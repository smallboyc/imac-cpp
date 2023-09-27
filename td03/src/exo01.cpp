#include <iostream>

int main()
{
    int number{0};

    std::cout << "Saisir un entier :" << std::endl;
    std::cin >> number;

    if (number > 0)
    {
        std::cout << number << " est positif" << std::endl;
    }
    else if (number < 0)
    {
        std::cout << number << " est négatif" << std::endl;
    }
    else
    {
        std::cout << "Positif et negatif" << std::endl;
    }
    return 0;
}