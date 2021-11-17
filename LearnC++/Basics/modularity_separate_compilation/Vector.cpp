//
//  vector.cpp
//  separate_compilation
//
//  Created by havid albar on 07/11/21.
//

#include <stdio.h>
#include "Vector.h"

Vector::Vector(int item):element{new double[item]}, size{item} {}

double& Vector::operator[](int item) {
    return element[item];
};

int Vector::get_size() {
    return size;
}

