#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex operator + (Complex a, Complex b) {
    struct Complex tmp;
    tmp.real = a.real + b.real;
    tmp.imag = a.imag + b.imag;
    return tmp;
    /*****************
    # YOUR CODE HERE #
    *****************/
}

Complex operator - (Complex a, Complex b) {
    struct Complex tmp;
    tmp.real = a.real - b.real;
    tmp.imag = a.imag - b.imag;
    return tmp;
    /*****************
    # YOUR CODE HERE #
    *****************/
}

Complex operator * (Complex a, Complex b) {
    struct Complex tmp;
    tmp.real = a.real*b.real - a.imag*b.imag;
    tmp.imag = a.real*b.imag + a.imag*b.real;
    return tmp;
    /*****************
    # YOUR CODE HERE #
    *****************/
}

Complex operator / (Complex a, Complex b) {
    struct Complex tmp;
    tmp.real = (a.real*b.real + a.imag*b.imag)/(b.real*b.real + b.imag*b.imag);
    tmp.imag =- (a.real*b.imag - a.imag*b.real)/(b.real*b.real + b.imag*b.imag);
    return tmp;
    /*****************
    # YOUR CODE HERE #
    *****************/
}

ostream& operator << (ostream& out, const Complex &a) {
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}

int main() {
    cout << " Nguyen Van Linh 20194093\n" << endl;
    double real_a, real_b, img_a, img_b;
    cin >> real_a >> img_a;
    cin >> real_b >> img_b;

    Complex a{real_a, img_a};
    Complex b{real_b, img_b};

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;

    return 0;
}
