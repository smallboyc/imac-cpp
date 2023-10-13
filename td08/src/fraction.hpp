#pragma once

struct Fraction
{
    unsigned int numerator{0};
    unsigned int denominator{1};
    Fraction add(Fraction frac1, Fraction frac2);
    Fraction sub(Fraction frac1, Fraction frac2);
    Fraction mul(Fraction frac1, Fraction frac2);
    Fraction div(Fraction frac1, Fraction frac2);
    void display(Fraction const &frac);
};
