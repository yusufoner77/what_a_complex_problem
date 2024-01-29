

class ComplexNumber 
{
public:
    float real;
    float imaginary;

    void pretty_print();
    ComplexNumber addition(ComplexNumber c1);
    ComplexNumber subtraction(ComplexNumber c1);
    ComplexNumber multiplication(ComplexNumber c1);
    ComplexNumber division(ComplexNumber c1);
    ComplexNumber negation();
    float magnitude();
    ComplexNumber conjugation();
    float real_part();
    float imaginary_part();
    
    ComplexNumber(float real, float imaginary);

};