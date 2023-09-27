#include <iostream>

int main()
{
    float number{.0f};
    std::cout << "Entrez un nombre : ";
    while (!(std::cin >> number) || number < 0)
    {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << "Saisie invalide. Entrez un nombre correct : ";
    };
    for (int i{0}; i < 11; i++)
    {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }
    return 0;
}