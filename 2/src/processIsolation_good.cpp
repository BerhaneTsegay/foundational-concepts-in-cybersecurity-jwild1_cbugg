// processIsolation_good.cpp

// This is a good example of process isolation. 
// 	It is a multi-threaded program which uses a mutex lock to 
//	control which process (technically thread) has access to write (stdout). 

// Code shamelessly stolen and modded
// Intended as a basic multithreaded program example
// Originally 'Example 2' by user usmanmalik on the go4expert.com forum
// https://www.go4expert.com/articles/writing-multithreaded-program-cpp-t29980/

// More stolen code. Mutex example from:
// http://www.cplusplus.com/reference/mutex/mutex/lock/

// Chris Bugg
// COSC 4010
// 10/10/17

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

std::mutex mtx;

static const int num_of_threads = 10;

//This is the function that will run in parallel
// It will be passed to the thread
void thread_method(int thread_id) 
{
	
	mtx.lock();
	
	std::cout << "thread " << thread_id << std::endl;

	mtx.unlock();
}

int main() 
{

	std::thread threads[num_of_threads];
	//This statement will launch multiple threads in loop
	for (int i = 0; i < num_of_threads; ++i) {
		threads[i] = std::thread(thread_method, i);
	}

	mtx.lock();

	std::cout << "main\n";

	mtx.unlock();

	//This is how we join the new thread with main
	for (int i = 0; i < num_of_threads; ++i) {
		threads[i].join();
	}

	std::cout << "done, hit a key ";

	getchar();	// Takes a char from a user (aka pause-after done functionality)
	return 0;
}
