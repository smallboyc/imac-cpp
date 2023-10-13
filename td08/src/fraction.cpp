#include <iostream>
#include "fraction.hpp"

Fraction Fraction::add(Fraction frac1, Fraction frac2)
{
    Fraction result;
    result.numerator = frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator;
    result.denominator = frac2.denominator * frac1.denominator;
    return result;
}

Fraction Fraction::sub(Fraction frac1, Fraction frac2)
{
    unsigned int var{frac1.numerator * frac2.denominator - frac2.numerator * frac1.denominator};
    if (var > INT_MAX)
        var = frac2.numerator * frac1.denominator - frac1.numerator * frac2.denominator;

    Fraction result;
    result.numerator = var;
    result.denominator = frac2.denominator * frac1.denominator;
    return result;
}

Fraction Fraction::mul(Fraction frac1, Fraction frac2)
{
    Fraction result;
    result.numerator = frac1.numerator * frac2.numerator;
    result.denominator = frac1.denominator * frac2.denominator;
    return result;
}

Fraction Fraction::div(Fraction frac1, Fraction frac2)
{
    Fraction result;
    result.numerator = frac1.numerator * frac2.denominator;
    result.denominator = frac2.numerator * frac1.denominator;
    return result;
}

void Fraction::display(Fraction const &frac)
{
    std::cout << frac.numerator << " / " << frac.denominator << std::endl;
}