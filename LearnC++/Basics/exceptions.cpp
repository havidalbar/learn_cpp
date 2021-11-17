//
//  exceptions.cpp
//  exceptions
//
//  Created by havid albar on 08/11/21.
//
// Chapter 2, Page Book 55

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
        // make condition if vector empty or size less than i
        if(i<0 || get_size()<=i){
            throw out_of_range("Vector::operator[]");
        }
        return element[i];
    }
    
    // getter size element
    int get_size(){
        return size;
    }
};


int main() {
    // initialize vector
    Vector v(5);
    for(int i=0; i!=v.get_size(); i++){
        cout << "Insert element " << i << ": " << endl;
        cin >> v[i];
    }
    
    // make condition exception with try catch
    try{
        // this statement will error because this vector have 5 value start with 0 and end in 4, and this statement access vector in v[5]
        v[v.get_size()] = 7;
    }catch (out_of_range){
        cout << "error" << endl;
    }
    
    for(int i=0; i!=v.get_size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}

