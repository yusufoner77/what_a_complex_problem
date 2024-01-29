#include <iostream>
#include "complexlist.hpp"
#include "complexnumber.hpp"
using namespace std;

ComplexList::ComplexList(vector<ComplexNumber> new_list) {
    vector<ComplexNumber> list = new_list;
}

ComplexNumber ComplexList::sum(vector<ComplexNumber> new_list) {

    float real_list_sum = 0.0;
    float imaginary_list_sum = 0.0;

    for (int i = 0; i < new_list.size(); i++) {
        
        real_list_sum = real_list_sum + new_list[i].real;
        imaginary_list_sum = imaginary_list_sum + new_list[i].imaginary;

    }

    return ComplexNumber(real_list_sum, imaginary_list_sum);

}