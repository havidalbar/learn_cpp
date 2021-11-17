//
//  loops.cpp
//  loops
//
//  Created by havid albar on 07/11/21.
//
// Chapter 2, Page Book 43-44


#include <iostream>
using namespace std;

// make function bool type with statement if-else
bool accept(char ans){
    if (ans=='y'){
        return true;
    }else{
        return false;
    }
}

// make function bool type with statement switch-case
bool accept2(char ans){
    switch (ans) {
        case 'y':
            return true;
            break;
        case 'n':
            return false;
            break;
            
        default:
            return true;
            break;
    }
}

int main() {
    // initialize variables and type
    char c = 1;
    int i = 0;
    
    // loop with while
    while ((accept(c) || accept2(c)) && i<5 ) {
        cout << i << endl;
        i++;
        cout << "print again?" << endl;
        cin >> c;
    }

    return 0;
}
