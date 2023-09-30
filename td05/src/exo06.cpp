#include <iostream>
#include <vector>
#include <string>

void checkInputUser(int &nb)
{
    while (!(std::cin >> nb) || nb < 0 || nb > 5)
    {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << "Saisie invalide. Le nombre doit etre positif : ";
    };
}

int main()
{
    std::vector<int> table(10, 0);
    std::vector<int> finalTable;
    int add{0};

    for (int i{0}; i < table.size(); i++)
    {
        std::cout << "(" << i + 1 << ") Entrez un nombre compris entre 0 et 5 : ";
        checkInputUser(table[i]);
    }

    std::cout << "Elements du tableau avant : " << std::endl;
    for (int i{0}; i < table.size(); i++)
    {
        std::cout << table[i] << ", ";
    }

    for (int i{0}; i < table.size(); i++)
    {
        if (table[i] != 3)
            finalTable.push_back(table[i]);
        else
            add++;
    }

    for (int i{0}; i < add; i++)
        finalTable.push_back(0);

    std::cout << std::endl;

    std::cout << "Elements du tableau apres : " << std::endl;
    for (int i{0}; i < finalTable.size(); i++)
    {
        std::cout << finalTable[i] << ", ";
    }

    return 0;
}