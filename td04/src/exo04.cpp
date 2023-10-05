#include <iostream>
#include <vector>

int main()
{
    float montant;
    int reste;
    int montant_part_ent;
    int montant_decimal;

    std::vector<int> billets{500, 200, 100, 50, 20, 10, 5};
    std::vector<int> piece{2, 1};
    std::vector<int> centime{50, 20, 10, 5, 2, 1};

    std::cout << "Combien d'argent voulez-vous rendre ?" << std::endl;
    std::cin >> montant;

    montant_part_ent = static_cast<int>(montant);
    montant_decimal = (montant - montant_part_ent) * 100;

    reste = montant_part_ent;

    for (int i{0}; i < billets.size(); i++)
    {
        int result{0};
        result = reste / billets[i];
        reste = reste % billets[i];
        if (result != 0)
            std::cout << result << " billets de " << billets[i] << " euros" << std::endl;
    }

    for (int i{0}; i < piece.size(); i++)
    {
        int result{0};
        result = reste / piece[i];
        reste = reste % piece[i];
        if (result != 0)
            std::cout << result << " pieces de " << piece[i] << " euros" << std::endl;
    }

    reste = montant_decimal;

    for (int i{0}; i < centime.size(); i++)
    {
        int result{0};
        result = reste / centime[i];
        reste = reste % centime[i];
        if (result != 0)
            std::cout << result << " pieces de " << centime[i] << " centimes" << std::endl;
    }

    return 0;
}