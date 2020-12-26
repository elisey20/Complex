#include <iostream>
#include "structs.h"
#include "methods.h"

int main()
{
    Complex num1 = {2, 3};
    Complex num2 = {0, 0};

    Complex num3 = num1 / num2;

    std::cout << num3;

    return 0;
}
