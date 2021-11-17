//
//  IO_arithmetic.cpp
//  IO_arithmetic
//
//  Created by havid albar on 07/11/21.
//
// Chapter 2, Page Book 41-42

#include <iostream>
using namespace std;
#include <complex>

// make function non void type
int sum(int num1, int num2){
    return num1 + num2;
}

int subtract(int num1, int num2){
    return num1 - num2;
}

int multiply(int num1, int num2){
    return num1 * num2;
}

int divide(int num1, int num2){
    return num1 / num2;
}

int mod(int num1, int num2){
    return num1 % num2;
}

// make function void type
void print_all(int resSum, int resSub, int resMul, int resDiv, int resMod){
    cout << "Result sum value: " << resSum << endl;
    cout << "Result subtract value: " << resSub << endl;
    cout << "Result multiply value: " << resMul << endl;
    cout << "Result divide value: " << resDiv << endl;
    cout << "Result modulo value: " << resMod << endl;
}

// make function constexpr type with return int
constexpr int sum_const(int num1, int num2){
    return num1 + num2;
}


int main() {
    // initialize variables and type
    int num1, num2, resSum, resSub, resMul, resDiv, resMod = 0;
    cout << "Input num1" << endl;
    cin >> num1;
    cout << "Input num2" << endl;
    cin >> num2;
    
    resSum = sum(num2, num1);
    resSub = subtract(num2, num1);
    resMul = multiply(num2, num1);
    resDiv = divide(num2, num1);
    resMod = mod(num2, num1);
    print_all(resSum, resSub, resMul, resDiv, resMod);
    
    // selection condition
    if (num1 > num2) {
        cout << "Number 1 greater than number 2" << endl;
        
    }else if (num1 < num2){
        cout << "Number 1 less than number 2" << endl;
        
    }else if (num1 == num2){
        cout << "Number 1 equal with number 2" << endl;
    }
    
    // same initialize
    double d1 = 2.3;
    double d2 {2.3};
    if (d1 == d2){
        cout << "d1 same with d2" << endl;
    }
    
    // complex number with double-precision floating-point lists
    complex<double> z = 1;
    cout << "complex number z1: " << z << endl;
    
    // complex number with d1 and d2
    complex<double> z2 {d1,d2};
    cout << "complex number z2: " << z2 << endl;
    
    // complex number initialize
    complex<double> z3 = {1,2};
    cout << "complex number z3: " << z3 << endl;
    
    
    // initialize without spesific type (auto)
    int y = 4;
    auto b = true;
    auto ch = 'x';
    auto i = 123;
    auto d = 1.2;
    auto zAuto = sqrt(y);
    cout << "Result auto boolean value: " << b << endl;
    cout << "Result auto character value: " << ch << endl;
    cout << "Result auto integer value: " << i << endl;
    cout << "Result auto double value: " << d << endl;
    cout << "Result auto sqrt value: " << zAuto << endl;
    
    // constant type
    const int dmv = 4;
    int var = 4;
    const double max3 = 1.4 * sqrt(var);

    constexpr double max1 = 1.4 * dmv;
    cout << "Result const max3 value: " << max3 << endl;
    cout << "Result constexpr max1 value: " << max1 << endl;
    cout << "Result constexpr sum value: " << sum_const(max1, max3) << endl;

    return 0;
}
