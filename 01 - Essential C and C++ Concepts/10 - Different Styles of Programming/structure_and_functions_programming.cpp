// An example of Structure and Functions style of programming

#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

int area(Rectangle r) { return r.length * r.breadth; }

int perimeter(Rectangle r) { return 2 * (r.length + r.breadth); }

int main() {
    Rectangle r = {0, 0};

    int l, b;
    cout << "Enter Length and Breadth: ";
    cin >> l >> b;

    initialize(&r, l, b);

    int a = area(r);
    int p = perimeter(r);

    cout << "Area: " << a << ", Perimeter: " << p << endl;

    return 0;
}