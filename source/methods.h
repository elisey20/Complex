#pragma once

#include "structs.h"

Complex operator+(const Complex& num1, const Complex& num2);

Complex operator-(const Complex& num1, const Complex& num2);

std::ostream& operator << (std::ostream& a, const Complex& num);

Complex operator * (const Complex& num1, const Complex& num2);

Complex operator / (const Complex& num1, const Complex& num2);
