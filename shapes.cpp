#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

class Shape {

    public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
    virtual string toName () = 0;
};

class Rectangle : public Shape {
    float width;
    float length;

    public:
    Rectangle (float w, float l) {
        width = w;
        length = l;
    }
    float area() {
        return (length * width);
    }
    float perimeter() {
        return (2*(length + width));
    }
    string toName () {
        return "Rectangle";
    }
};

class Circle : public Shape {
    float radius;

    public:
    Circle (float r) {
        radius = r;
    }
    float area() {
        return (radius * radius * M_PI);
    }
    float perimeter() {
        return (2 * M_PI * radius);
    }
    string toName () {
        return "Circle";
    }
};

class Triangle : public Shape {
    float a, b, c;

    public:
    Triangle (float a1, float b1, float c1) {
        a = a1; b = b1; c = c1;
    }
    float area() {
        float s = (a + b + c) / 2.0;

        return (sqrt (s * (s - a) * (s - b) * (s - c)));
    }
    float perimeter() {
        return (a + b + c);
    }
    string toName () {
        return "Triangle";
    }
};

class Rhombus : public Shape {
    float a, h;

    public:
    Rhombus (float a1, float h1) {
        a = a1; h = h1;
    }
    float area() {
        return (a * h);
    }
    float perimeter() {
        return (4 * a);
    }
    string toName () {
        return "Rhombus";
    }
};

/////////////////// Main.cpp /////////////////

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>


void write (Shape *s) {
    cout << s->toName() << " Area: " << fixed << setprecision(2) << s->area();
    cout << " Perimeter: " << fixed << setprecision(2) << s->perimeter() << endl;
}

int main()
{
    Rectangle r (10, 20);
    Circle c (30);
    Triangle t (40, 50, 60);
    Rhombus h (20, 15);

    vector <Shape *>shapes;
    shapes.push_back (&r);
    shapes.push_back (&c);
    shapes.push_back (&t);
    shapes.push_back (&h);

    for_each (shapes.begin(), shapes.end(), write);

    return 0;
}


