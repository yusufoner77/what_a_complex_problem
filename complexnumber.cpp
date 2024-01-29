#include <iostream>
#include <cmath>
#include "complexnumber.hpp"
using namespace std;

ComplexNumber::ComplexNumber(float real_number, float imaginary_number) {
    real = real_number;
    imaginary = imaginary_number;
}

void ComplexNumber::pretty_print() {
    cout << real << " + " << imaginary << "i" << endl;
}

ComplexNumber ComplexNumber::addition(ComplexNumber c1) {
    
    float real_sum = real + c1.real;
    float imaginary_sum = imaginary + c1.imaginary;

    return ComplexNumber(real_sum, imaginary_sum); 
}

ComplexNumber ComplexNumber::subtraction(ComplexNumber c1) {

    float real_diff = real - c1.real;
    float imaginary_diff = imaginary - c1.imaginary;

    return ComplexNumber(real_diff, imaginary_diff);

}

ComplexNumber ComplexNumber::multiplication(ComplexNumber c1) {

    float real_mult = real * c1.real - imaginary * c1.imaginary;
    float imaginary_mult = real * c1.imaginary + imaginary * c1.real;

    return ComplexNumber(real_mult, imaginary_mult);

}

ComplexNumber ComplexNumber::division(ComplexNumber c1) {

    float real_div = (real * c1.real + imaginary * c1.imaginary) / (pow(c1.real, 2) + pow(c1.imaginary, 2));
    float imaginary_div = (-1 * real * c1.imaginary + imaginary * c1.real) / (pow(c1.real, 2) + pow(c1.imaginary, 2));

    return ComplexNumber(real_div, imaginary_div);

}

ComplexNumber ComplexNumber::negation() {

    float real_neg = -1 * real;
    float imaginary_neg = -1 * imaginary;

    return ComplexNumber(real_neg, imaginary_neg);

}

float ComplexNumber::magnitude() {

    float magnitude = sqrt(pow(real, 2) + pow(imaginary, 2));

    return magnitude;

}

ComplexNumber ComplexNumber::conjugation() {

    float real_conj = real;
    float imaginary_conj = -1 * imaginary;

    return ComplexNumber(real_conj, imaginary_conj);

}

float ComplexNumber::real_part() {

    float real_part = real;

    return real;

}

float ComplexNumber::imaginary_part() {

    float imaginary_part = imaginary;

    return imaginary;

}