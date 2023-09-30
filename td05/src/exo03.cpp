#include <iostream>
#include <vector>

void checkInputUser(int &nb)
{
    while (!(std::cin >> nb) || nb <= 0)
    {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << "Saisie invalide. Le nombre doit etre positif : ";
    };
}

int main()
{
    int total{0};
    int level{0};
    int nbEnemy{0};
    std::vector<int> levelEnemy;
    std::vector<int> resultTable;

    std::cout << "Entrez le niveau fini : ";
    checkInputUser(level);
    std::cout << "Entrez le nombre d'ennemis : ";
    checkInputUser(nbEnemy);

    for (int i{0}; i < nbEnemy; i++)
    {
        int element{0};
        std::cout << "Entrez le niveau de l'ennemi " << i + 1 << " : ";
        checkInputUser(element);
        levelEnemy.push_back(element);
    }

    for (int i{0}; i < levelEnemy.size(); i++)
    {
        int j{1};
        while (levelEnemy[i] * j < level)
        {
            resultTable.push_back(levelEnemy[i] * j);
            j++;
        }
    }

    // Filtrage du tableau
    for (int i{0}; i < resultTable.size(); i++)
    {
        for (int j{i + 1}; j < resultTable.size(); j++)
        {
            if (resultTable[i] == resultTable[j])
            {
                resultTable.erase(resultTable.begin() + i);
            }
        }
    }

    for (int i{0}; i < resultTable.size(); i++)
    {
        total += resultTable[i];
    }

    std::cout << "Points d'energie : " << total << std::endl;
    return 0;
}