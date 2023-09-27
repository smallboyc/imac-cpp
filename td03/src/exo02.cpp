#include <iostream>

int main()
{
    int nb{0};
    std::cout << "Entrez un entier : " << std::endl;
    std::cin >> nb;
    if (nb % 2 == 0)
    {
        std::cout << "Le nombre est pair !" << std::endl;
    }
    else
    {
        std::cout << "Le nombre est impair !" << std::endl;
    }

    return 0;
}