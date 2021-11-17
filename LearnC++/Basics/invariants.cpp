//
//  invariants.cpp
//  invariants
//
//  Created by havid albar on 08/11/21.
//
// Chapter 2, Page Book 56

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
    Vector(int item){
    if(item<0) {
        throw length_error("error");
    }
        element = new int[item];
        size = item;
    }
    
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
    Vector v(-1);
    for(int i=0; i!=v.get_size(); i++){
        cout << "Insert element " << i << ": " << endl;
        cin >> v[i];
    }
    
    // make condition exception with try catch
    try{
        // this statement will error because this vector have 5 value start with 0 and end in 4, and this statement access vector in v[5]
        v[v.get_size()] = 7;
        
    // condition if out of range
    }catch (out_of_range){
        cout << "error range" << endl;
    // condition if vector value negative
    }catch (length_error){
        cout << "error length negative size" << endl;
    // condition if bad allocation memory
    }catch (bad_alloc){
        cout << "error bad allocation memory" << endl;
    }
    
    for(int i=0; i!=v.get_size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}


