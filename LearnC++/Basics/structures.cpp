//
//  structures.cpp
//  structures
//
//  Created by havid albar on 07/11/21.
//
// Chapter 2, Page Book 47-48

#include <iostream>
using namespace std;

// initialize type struct
struct Vector {
    int size;
    int* element;
};

// make function void for initialize value struct
void vector_init(Vector& v, int item) {
    v.element = new int[item];
    v.size = item;
}

// make function int type for read and sum value from user input
int read_and_sum(int item){
    Vector v;
    vector_init(v, item);
    
    for(int i=0; i!=item; i++){
        cout << "Insert element " << i << ": " << endl;
        cin >> v.element[i];
    }
    
    int sum = 0;
    for(int i=0; i!=item; i++){
        sum += v.element[i];
    }
    
    cout << "Size vector: " << v.size << endl;
    return sum;
}

int main() {
    cout << read_and_sum(5) << endl;
    return 0;
}
