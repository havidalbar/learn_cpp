//
//  queue.cpp
//  queue
//
//  Created by havid albar on 15/11/21.
//

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> i;
    i.push(20);
    i.push(10);
    i.push(30);
    while (!i.empty()) {
        cout << i.front() << " ";
        i.pop();
    }
    cout << endl;
    cout << i.size() << ": elements on the queue\n" << endl;
    return 0;
}
