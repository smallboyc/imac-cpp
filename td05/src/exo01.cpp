#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
    size_t const dwarf_count = 200;
    int max_calories{0};
    long min_calories{60000};

    std::vector<int> calories;

    // std::srand permet de fixer la "seed" du générateur aléatoire (pour avoir des résultats reproductibles)
    std::srand(42);

    for (int i = 0; i < dwarf_count; ++i)
    {
        calories.push_back(rand() % 24000 + 100);
    }

    // affichage optionnel des calories transportées par chaque nain
    for (int const c : calories)
    {
        if (c > max_calories)
            max_calories = c;
        if (c < min_calories)
            min_calories = c;
        // std::cout << c << ", ";
    }
    std::cout << std::endl;
    std::cout << "Quantite de provision max : " << max_calories << std::endl;
    std::cout << "Quantite de provision min : " << min_calories;

    // TODO: afficher la quantité de provisions la plus grande transportée par un nain

    return 0;
}