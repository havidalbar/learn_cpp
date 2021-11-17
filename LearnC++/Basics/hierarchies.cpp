//
//  hierarchies.cpp
//  hierarchies
//
//  Created by havid albar on 09/11/21.
//
// Chapter 2, Page Book 68-72

#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

class Shape{
public:
    virtual Point center() const = 0;
    virtual void move(Point to) = 0;
    virtual void draw() const = 0;
    virtual void rotate(int angle) = 0;
    virtual ~Shape() {}
};


class Circle : public Shape {
public:
    Circle(Point p, int rr);
    void move(Point to) { x=to; }
    void draw() const;
    void rotate(int) {} private:
    Point x;
    int r;
};



int main() {

    cout << "Hello, World!\n";
    return 0;
}
