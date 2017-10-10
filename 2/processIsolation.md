## Process Isolation

Process Isolation requires the operating system to keep seperate the resources each process needs to operate. 

In our example, we... asdfasdfasdf

![Don't let your processes inspect each other!](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/2/process_isolation.png)

#### Sources:
https://www.heidisql.com/uploads/718-1-process-isolation-2.png

TODELETE:
A process is a program running in a computer. Processes running in a computer have their own portion of memory called the address space. The address space is an area of memory that only one running program can access. If a word processor, a database and a browser are running on a computer, they are all running in different address spaces. This is done to ensure correct operation, security and protection. The word processor cannot access the memory of the browser or database. If two processes are running and one of the processes has a problem, that problem should be confined to the process with a problem and not affect the other process. 

In addition to process isolation, it is also possible to have operating isolation. Programs such as VMWare or Virtual Box enable multiple operating systems to execute on the same computer without interfering with other program. In this context, each OS is viewed as a process, to be kept separate from the other processes (OSs). Program running in each OS, should not be aware of programs running on another OS, nor should they be aware of the existence of another OS. 
