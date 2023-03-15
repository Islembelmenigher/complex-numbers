#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor to initialize complex number
    Complex(double r = 0, double i = 0) {
        real = r;
        imaginary = i;
    }

    // Method to get real part of complex number
    double get_real() {
        return real;
    }

    // Method to set real part of complex number
    void set_real(double r) {
        real = r;
    }

    // Method to get imaginary part of complex number
    double get_imag() {
        return imaginary;
    }

    // Method to set imaginary part of complex number
    void set_imag(double i) {
        imaginary = i;
    }

    // Method to display the complex number in readable format
    void print() {
        cout << real << (imaginary >= 0 ? "+" : "-") << abs(imaginary) << "i" << endl;
    }

    // Method to add two complex numbers
    Complex add(Complex num) {
        double r = real + num.real;
        double i = imaginary + num.imaginary;
        return Complex(r, i);
    }

    // Method to add a real number to complex number
    Complex add(double num) {
        double r = real + num;
        return Complex(r, imaginary);
    }
};

int main() {
    Complex a(1.0, -2.0); // creates 1-2i
    Complex b(3.14); // creates 3.14

    b.set_imag(-5);

    Complex c = a.add(b);

    c.print(); // prints 4.14-7i

    c = a.add(5.5); // adds real number to complex number

    c.print(); // prints 6.5-2i

    return 0;
}
