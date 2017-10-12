## Process Isolation
Process Isolation requires the operating system to keep seperate the resources each process needs to operate. 
##### In our examples, we used a multi-threaded proccess outputing to the console to illustrate this

Our good example, `processIsolation_good.cpp` uses a Mutex lock to control which thread can output to stdout (console) at which time.
```
#include <mutex>
std::mutex mtx;     // Identify mutex by shorthand 'mtx'
...
    mtx.lock();
	std::cout << "thread " << thread_id << std::endl;   // Outputting to stdout
    mtx.unlock();
```
Resulting in output like this:
```
$ ./processIsolation_good
thread 0
thread 1
thread 2
thread 3
thread 5
thread 6
thread 7
thread 8
thread 4
main
thread 9
done, hit a key
```
In `processIsolation_bad.cpp` we simply comment-out the mutex lock calls
```
    // mtx.lock();
	std::cout << "thread " << thread_id << std::endl;
    // mtx.unlock();
```
and are treated with output like this:
```
$ ./processIsolation_bad
thread thread thread thread thread 1320thread 5
thread 6
4




thread 8
main
thread 7
thread 9
done, hit a key
```
This clearly shows how failing to implement proper *proccess isolation* allows seperate processes to interfere with each other. Sometimes this is simply by inspecting each-other (see below), but often this results in privledge escalation and data leaks.

###### Example:
 
![Processes inspecting each-other](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/2/process_isolation.png)

#### Sources:
https://www.heidisql.com/uploads/718-1-process-isolation-2.png
