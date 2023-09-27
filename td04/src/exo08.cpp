#include <iostream>
#include <cstdlib>

int main()
{
    srand(time(NULL));
    int target{std::rand() % 100 + 1};
    int number{0};

    while (number != target)
    {
        std::cout << "Entrez un nombre positif : ";
        while (!(std::cin >> number) || number <= 0)
        {
            std::cin.clear();
            std::cin.ignore(255, '\n');
            std::cout << "Saisie invalide. Entrez un nombre positif : ";
        };

        if (number < target)
            std::cout << "C'est plus !" << std::endl;
        else if (number > target)
            std::cout << "C'est moins !" << std::endl;
        else
            break;
    }

    std::cout << std::endl;
    std::cout << "Bravo !" << std::endl;
    std::cout << "Il s'agissait bien de " << target << std::endl;

    return 0;
}