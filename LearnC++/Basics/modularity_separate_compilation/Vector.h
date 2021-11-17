//
//  Vector.h
//  separate_compilation
//
//  Created by havid albar on 07/11/21.
//

#ifndef Vector_h
#define Vector_h

#endif /* Vector_h */

class Vector{
private:
    double* element;
    int size;
public:
    Vector(int item);
    double& operator[](int item);
    int get_size();
};
