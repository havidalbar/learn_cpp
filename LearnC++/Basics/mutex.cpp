//
//  mutex.cpp
//  mutex
//
//  Created by havid albar on 17/11/21.
//
// Chapter 2, Page Book 112

#include <iostream>
#include <thread>
#include <list>
#include <mutex>
using namespace std;

list<int>myList;

mutex myMutex;

void addToList(int max, int interval)
{
    lock_guard<mutex> guard(myMutex);
    for (int i = 0; i < max; i++) {
        if( (i % interval) == 0) myList.push_back(i);
    }
}

void printList()
{
    lock_guard<mutex> guard(myMutex);
    for (auto itr = myList.begin(), end_itr = myList.end(); itr != end_itr; ++itr ) {
        cout << *itr << ",";
    }
}

int main() {
    int max = 50;

    thread t1(addToList, max, 1);
    thread t2(addToList, max, 10);
    thread t3(printList);

    t1.join();
    t2.join();
    t3.join();
    cout << endl;
    return 0;
}
