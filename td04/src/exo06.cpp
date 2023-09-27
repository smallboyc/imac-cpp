#include <iostream>

int main()
{
    int number{0};
    int i{0};

    std::cout << "Entrez un nombre positif : ";
    while (!(std::cin >> number) || number <= 0)
    {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << "Saisie invalide. Entrez un nombre positif : ";
    };

    std::cout << "Terme de depart : " << number << std::endl;

    while (number > 1)
    {
        i++;
        if (number % 2 == 0)
        {
            number /= 2;
        }
        else
        {
            number = 3 * number + 1;
        }
        std::cout << number << std::endl;
    };
    std::cout << std::endl;
    std::cout << i - 1 << " Termes necessaires pour atteindre 1." << std::endl;

    return 0;
}