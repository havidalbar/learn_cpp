//
//  IO_type_variables.cpp
//  IO_type_variables
//
//  Created by havid albar on 07/11/21.
//
// Chapter 2, Page Book 40

#include <iostream>
using namespace std;


// make function void type
void print_all(bool st, char c, int numIn, double numDb){
    cout << "Boolean value: " << st << endl;
    cout << "Char value: " << c << endl;
    cout << "Integer value: " << numIn << endl;
    cout << "Double value: " << numDb << endl;
}

int main() {
    // initialize variables and type
    bool state;
    char ch;
    int numI;
    double numD;
    
    //input boolean is 0 for false, 1 for true
    cout << "Input boolean" << endl;
    cin >> state;
    cout << "Input character" << endl;
    cin >> ch;
    cout << "Input number integer type" << endl;
    cin >> numI;
    cout << "Input number double type" << endl;
    cin >> numD;
    
    print_all(state, ch, numI, numD);
    
    return 0;
}
