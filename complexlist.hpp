#pragma once
#include <vector>
#include "complexnumber.hpp"

using namespace std;

class ComplexList 
{
public:
    ComplexNumber sum(vector<ComplexNumber> list);

    ComplexList(vector<ComplexNumber> list);

};