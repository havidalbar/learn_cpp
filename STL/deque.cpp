//
//  deque.cpp
//  deque
//
//  Created by havid albar on 12/11/21.
//

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {7, 5, 16, 8};
    d.push_front(13);
    d.push_back(25);

    for (int n : d){
        cout << n << " ";
    cout << endl;
    
    return 0;
}
