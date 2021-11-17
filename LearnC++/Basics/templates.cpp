//
//  templates.cpp
//  templates
//
//  Created by havid albar on 09/11/21.
//
// Chapter 2, Page Book 78-79

#include <iostream>
#include <list>
using namespace std;

template<typename T>
class Vector{
private:
    T* element;
    int size;
public:
    Vector(int s);
    ~Vector(){ delete[] element; }
    T& operator[](int i);
    const T& operator[](int i) const;
    int get_size() const {
        return size;
    }
};

template<typename T>
Vector<T>::Vector(int item){
    if(item<0) throw out_of_range("err");
    element = new T[item];
    size = item;
}


template<typename T>
const T& Vector<T>::operator[](int item) const {
    if (item<0 || get_size()<=item)
    throw out_of_range{"Vector::operator[]"};
    return element[item];
}

void write(const Vector<string>& vs) {
    for (int i = 0; i!=vs.get_size(); ++i) cout << vs[i] << '\n';
}



int main() {
    Vector<char> vc(200);
    Vector<string> vs(5);
    Vector<list<int>> vli(45);
    write(vs);
    return 0;
}
