#include <iostream>
#include <vector>
#include "utils.hpp"
#include "fraction.hpp"

int gcd(int const nb1, int const nb2)
{
    std::vector<int> compare;
    int result{0};

    int bigger{nb1 > nb2 ? nb1 : nb2};

    for (int i{1}; i <= bigger; i++)
    {
        if (nb1 % i == 0 && nb2 % i == 0)
            compare.push_back(i);
    }

    for (int i{0}; i <= compare.size() - 1; i++)
    {
        if (compare[i] > result)
            result = compare[i];
    }
    return result;
}

void checkUserInput(unsigned int &nb)
{
    std::cout << "Entrez un entier > 0 : ";
    while (!(std::cin >> nb))
    {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << std::endl;
        std::cout << "Erreur ! Entrez un entier > 0 : ";
    }
    std::cout << "Merci.";
    std::cout << std::endl;
}

Fraction simplify(Fraction const &fraction)
{
    int pgcd{gcd(fraction.denominator, fraction.numerator)};
    Fraction result;
    result.numerator = fraction.numerator / pgcd;
    result.denominator = fraction.denominator / pgcd;
    return result;
}
