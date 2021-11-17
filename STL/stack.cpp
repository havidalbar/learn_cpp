//
//  stack.cpp
//  stack
//
//  Created by havid albar on 16/11/21.
//

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(1);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    cout << s.size() << ": elements on the stack\n" << endl;
    return 0;
}
