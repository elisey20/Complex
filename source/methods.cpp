#include <iostream>
#include <cmath>
#include "structs.h"

Complex operator + (const Complex& num1, const Complex& num2)
{
    Complex res;
    res.real = num1.real + num2.real;
    res.imaginary = num1.imaginary + num2.imaginary;
    return res;
}

Complex operator - (const Complex& num1, const Complex& num2)
{
    Complex res;
    res.real = num1.real - num2.real;
    res.imaginary = num1.imaginary - num2.imaginary;
    return res;
}

std::ostream& operator << (std::ostream& a, const Complex& num)
{
    a << num.real;
    if (num.imaginary > 0)
        a << '+';
    a  << num.imaginary << 'i';
    return a;
}

Complex operator * (const Complex& num1, const Complex& num2)
{
    Complex res;
    res.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    res.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    res.real = round(res.real * 100) / 100;
    res.imaginary = round(res.imaginary * 100) / 100;
    return res;
}

Complex operator / (const Complex& num1, const Complex& num2)
{
    Complex res;
    res.real = (num1.real * num2.real + num1.imaginary * num2.imaginary) / (num2.real * num2.real + num2.imaginary * num2.imaginary);
    res.imaginary = (num2.real * num1.imaginary - num2.imaginary * num1.real) / (num2.real * num2.real + num2.imaginary * num2.imaginary);
    res.real = round(res.real * 100) / 100;
    res.imaginary = round(res.imaginary * 100) / 100;
    return res;
}

bool operator==(const Complex& num1, const Complex& num2)
{
    return num1.real == num2.real && num1.imaginary == num2.imaginary;
}