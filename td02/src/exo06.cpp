#include <iostream>

int main()
{
    float sac_patates{0};
    float carottes{0};
    float salades{0};

    std::cout << "Entrez le nombre de sacs de pommes de terre : " << std::endl;
    std::cin >> sac_patates;
    std::cout << "Entrez le nombre de carottes : " << std::endl;
    std::cin >> carottes;
    std::cout << "Entrez le nombre de salades : " << std::endl;
    std::cin >> salades;

    std::cout << "Le prix total de la commande est de : " << sac_patates * 3 + carottes * (2.5 * 0.15) + salades * 1.2 << " euros." << std::endl;
    return 0;
}