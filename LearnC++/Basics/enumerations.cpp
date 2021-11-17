//
//  enumerations.cpp
//  enumerations
//
//  Created by havid albar on 07/11/21.
//
// Chapter 2, Page Book 50

#include <iostream>
using namespace std;


// make class enumeration for choice color and traffic light
enum class Color { red, green, blue };
enum class Traffic_light { green, yellow, red};

// initialize variable from class enumeration
Color col = Color::red;
Traffic_light trafl = Traffic_light::red;

int main() {
    cout << "Enumeration" << endl;
    return 0;
}
