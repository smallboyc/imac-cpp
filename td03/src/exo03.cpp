#include <iostream>

int main()
{
    int age{0};
    std::cout << "Entrez votre age :" << std::endl;
    if (std::cin >> age && age > 0)
    {
        if (age >= 18)
        {
            std::cout << "Vous etes majeur !" << std::endl;
        }
        else
        {
            std::cout << "Vous etes mineur !" << std::endl;
        }
    }
    else
    {
        std::cout << "Probleme !" << std::endl;
    }

    return 0;
}