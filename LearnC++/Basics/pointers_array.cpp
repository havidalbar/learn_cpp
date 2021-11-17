//
//  pointers_array.cpp
//  pointers_array
//
//  Created by havid albar on 07/11/21.
//
// Chapter 2, Page Book 45-46

#include <iostream>
using namespace std;

// make void function for copy array same value
void copy_arr(int arr[]){
    int item[10];
    for(auto i=0; i < 10; i++){
        item[i] = arr[i];
    }
    for(int element: item){
        cout << element << endl;
    }
}

// make int array function for copy array with new value
int * copy_arr2(int arr[]){
    for(auto i=0; i < 10; i++){
        arr[i] += 1;
    }
    return arr;
}

int main() {
    // initialize array
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    
    // print with foreach
    for(int element: v){
        cout << element << endl;
    }
    
    cout << "pointer and address" << endl;
    //pointer(*) and address (&)
    int *p = &v[3];
    int x = *p;
    cout << p << endl;
    cout << *p << endl;
    cout << x << endl;
    
    // copy array in void function with same value
    cout << "copy array same value" << endl;
    copy_arr(v);
    
    // copy array in int array function with new value
    copy_arr2(v);
    cout << "copy array new value" << endl;
    for(int element: v){
        cout << element << endl;
    }
    
    // assign address from auto type
    for(auto& element: v){
        ++element;
        cout << element << " ";
    }
    
    return 0;
}
