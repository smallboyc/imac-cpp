#include <iostream>
#include <string>

void checkInputUser(long int &nb)
{
    while (!(std::cin >> nb) || nb < 1000000)
    {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << "Saisie invalide. Le nombre doit etre positif et superieur a 1 000 000 : ";
    };
}

int main()
{
    long int number{0};
    int total{0};
    std::string mostCurrentNumber{""};
    std::cout << "Entrez un nombre positif superieur a 1 000 000 : ";
    checkInputUser(number);
    std::string numberString{std::to_string(number)};
    for (int i{0}; i < numberString.size(); i++)
    {
        int count{0};
        for (int j{0}; j < numberString.size() - 1; j++)
        {
            if (numberString[i] == numberString[j + 1])
            {
                count++;
            }
        }
        if (count > total)
        {
            total = count;
            mostCurrentNumber = numberString[i];
        }
    }
    std::cout << mostCurrentNumber << " est le chiffre qui apparait le plus souvent.";
    return 0;
}