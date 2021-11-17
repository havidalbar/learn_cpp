//
//  complex_arithmetic.cpp
//  complex_arithmetic
//
//  Created by havid albar on 09/11/21.
//
// Chapter 2, Page Book 61-62

#include <iostream>
using namespace std;

// make class complex
class complex {
// initialize attribute for class complex
private:
    double re, im;

public:
    // make constructor class complex
    complex(double r, double i): re{r}, im{i} {}
    complex(double r): re{r}, im{0} {}
    complex(): re{0}, im{0} {}
    
    // getter for attribute real
    double real() const {
        return re;
    }
    // setter for attribute real
    void real(double r){
        re = r;
    }
    
    // getter for attribute imaginer
    double imaginer(){
        return im;
    }
    
    //setter for attribute imaginer
    void imaginer(double i){
        im = i;
    }
    
    complex& operator += (complex z){
        re += z.re;
        im += z.im;
        return *this;
    }
    
    complex& operator -= (complex z){
        re -= z.re;
        im -= z.im;
        return *this;
    }
    
    complex& operator *= (complex z){
        re *= z.re;
        im *= z.im;
        return *this;
    }
    
    complex& operator /= (complex z){
        re /= z.re;
        im /= z.im;
        return *this;
    }
    
};


int main() {
    complex a {2.3};
    complex b {2.1};
    complex c {1.23};
    
    if (c.real() != b.real()) {
        c = -(b.real() /a.real() )+ 2 * b.real();
    }
    
    cout << a.real() + b.real() << endl;
    cout << b.real() + c.real() << endl;
    cout << c.real() << endl;
    return 0;
}
