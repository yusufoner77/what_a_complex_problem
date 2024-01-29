#include <iostream>
#include "complexnumber.hpp"
using namespace std;


int main() {
ComplexNumber n1 = ComplexNumber(5.0, 7.0);
ComplexNumber n2 = ComplexNumber(2.5, 3.1);

ComplexNumber n3 = n1.addition(n2);
n3.pretty_print();

ComplexNumber n4 = n1.subtraction(n2);
n4.pretty_print();

ComplexNumber n5 = n1.multiplication(n2);
n5.pretty_print();

ComplexNumber n6 = n1.division(n2);
n6.pretty_print();

ComplexNumber n7 = n1.negation();
n7.pretty_print();

float n8 = n1.magnitude();
cout << n8 << endl;

ComplexNumber n9 = n1.conjugation();
n9.pretty_print();

float n10 = n1.real_part();
cout << n10 << endl;

float n11 = n1.imaginary_part();
cout << n11 << endl;

}