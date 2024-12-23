#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

class Triangle : public Shape {
private:
    double s1, s2, s3;
public:
    Triangle(double s1, double s2, double s3) : s1(s1), s2(s2), s3(s3) {}
    double area() const override {
        double s = (s1 + s2 + s3) / 2;
        return sqrt(s * (s - s1) * (s - s2) * (s - s3));
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Triangle(4.0, 7.0, 9.0);

    for (int i = 0; i < 3; ++i) {
        cout << "Area of shape " << i + 1 << " is " << shapes[i]->area() << endl;
        delete shapes[i];
    }

    return 0;
}
class Triangle : public Shape {
private:
    double a, b, c;
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}
    double area() const override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};