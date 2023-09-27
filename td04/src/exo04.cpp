#include <iostream>
#include <vector>

int main()
{
    float money{.0f};
    std::vector<int> centimes{1, 2, 5, 10, 20, 50};
    std::vector<int> euros{1, 2};
    std::vector<int> billets{5, 10, 20, 50, 100, 200, 500};
    std::vector<int> potentiels_billets{};
    int result_billets{0};
    std::cout << "Saisissez un montant en euros : ";
    std::cin >> money;
    std::cin.clear();
    std::cin.ignore(255, '\n');
    while (money > 0)
    {
        for (int i{0}; i < billets.size(); i++)
        {
            if (static_cast<int>(money) / billets[i] >= 1)
            {
                potentiels_billets.push_back(billets[i]);
            }
        };

        for (int i{0}; i < potentiels_billets.size(); i++)
        {
            if (potentiels_billets[i] < potentiels_billets[i + 1])
                result_billets = potentiels_billets[i + 1];

            // std::cout << potentiels_billets[i] << std::endl;
        }
        if (static_cast<int>(money / result_billets) != 0) // probleme d'affichage avec "0 billets de .... => force une condition"
            std::cout << static_cast<int>(money / result_billets) << " billet(s) de " << result_billets << std::endl;
        money = static_cast<int>(money) % result_billets;
        if (money == 0)
            break;
    }

    return 0;
}