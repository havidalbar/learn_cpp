//
//  main.cpp
//  classes
//
//  Created by havid albar on 07/11/21.
//
// Chapter 2, Page Book 49

#include <iostream>
using namespace std;

// make class vector
class Vector {
    
// make attribute from vector with modifier private
private:
    int* element;
    int size;
    
// make function with modifier public
public:
    // constructor class vector
    Vector(int item):
    element{new int[item]},
    size{item} {}
    
    // setter attribute element with subscriptiong
    int& operator[](int i){
        return element[i];
    }
    
    // getter size element
    int get_size(){
        return size;
    }
};

// make function int type for read and sum value from user input
int read_and_sum(int item) {
    Vector v(item);
    for(int i=0; i!=v.get_size(); i++){
        cout << "Insert element " << i << ": " << endl;
        cin >> v[i];
    }
    
    int sum = 0;
    for (int i=0; i!=v.get_size(); ++i){
        sum+=v[i];
    }
    
    cout << v.operator[](2) << endl;
    return sum;
}


int main() {
    cout << read_and_sum(5) << endl;
    return 0;
}
