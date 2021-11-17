//
//  main.cpp
//  separate_compilation
//
//  Created by havid albar on 07/11/21.
//
// Chapter 2, Page Book 52-53

#include <iostream>
#include "Vector.h"
#include <cmath>
using namespace std;

double sqrt_sum(Vector& v){
    double sum = 0;
    for(int i=0; i!=v.get_size(); i++){
        sum += sqrt(v[i]);
    }
    return sum;
}

int main() {
    Vector v(5);
    for(int i=0; i!=v.get_size(); i++){
        cout << "Insert element " << i << ": " << endl;
        cin >> v[i];
    }
    cout << sqrt_sum(v) << endl;
    return 0;
}
