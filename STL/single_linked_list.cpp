//
//  single_linked_list.cpp
//  single_linked_list
//
//  Created by havid albar on 12/11/21.
//

#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> mult_three;
    for(int i=0; i!=10; i++){
        mult_three.push_front(i*3);
    }
    
    for(auto element: mult_three){
        cout << element << " ";
    }
    cout << endl;
    return 0;
}
