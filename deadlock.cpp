#include <iostream>
#include <map>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
using namespace std;

int main() {
    /*
    A mutex is a lockable object that is designed to signal when critical sections of code need exclusive access, 
    preventing other threads with the same protection from executing concurrently and access the same memory locations.
    */
    mutex m1;
    mutex m2;
    thread t1([&m1, &m2] {
        /*
        All lock and unlock operations on the mutex follow a single total order, 
        with all visible effects synchronized between the lock operations and previous unlock operations on the same object.
        */
        cout << "1. Acquiring m1.";
        m1.lock();
        this_thread::sleep_for(chrono::milliseconds(10));
        cout << "1. Acquiring m2";
        m2.lock(); 
    });
    thread t2([&m1, &m2] {
        cout << "2. Acquiring m2";
        m2.lock();
        this_thread::sleep_for(chrono::milliseconds(10));
        cout << "2. Acquiring m1";
        m1.lock();
    });
    t1.join();
    t2.join();
}