#include <iostream>
#include "fraction.hpp"
#include "utils.hpp"

void newFraction(Fraction &fraction)
{
    std::cout << std::endl;

    std::cout << "Numerateur : " << std::endl;
    checkUserInput(fraction.numerator);
    std::cout << std::endl;
    std::cout << "Denominateur : " << std::endl;
    checkUserInput(fraction.denominator);
    std::cout << std::endl;
    while (fraction.denominator == 0)
    {
        std::cout << "Le denominateur ne peux pas etre 0 ! ";
        std::cout << std::endl;
        checkUserInput(fraction.denominator);
    }
    std::cout << std::endl;
}

int main()
{
    Fraction fraction1;
    Fraction fraction2;
    Fraction operation;
    std::cout << std::endl;
    std::cout << " - Fraction 1 - " << std::endl;
    newFraction(fraction1);
    std::cout << " - Fraction 2 - " << std::endl;
    newFraction(fraction2);

    std::cout << std::endl;
    std::cout << "Fraction 1 : ";
    operation.display(fraction1);
    std::cout << std::endl;
    std::cout << "Fraction 2 : ";
    operation.display(fraction2);
    std::cout << std::endl;

    std::cout << "Somme des 2 fractions : ";
    operation.display(simplify(operation.add(fraction1, fraction2)));
    std::cout << std::endl;
    std::cout << "Soustraction des 2 fractions : ";
    operation.display(simplify(operation.sub(fraction1, fraction2)));
    std::cout << std::endl;
    std::cout << "Multiplication des 2 fractions : ";
    operation.display(simplify(operation.mul(fraction1, fraction2)));
    std::cout << std::endl;
    std::cout << "Quotient des 2 fractions : ";
    operation.display(simplify(operation.div(fraction1, fraction2)));
    std::cout << std::endl;

    return 0;
}