#include <iostream>

int main()
{
    float a{0};
    float b{0};
    float c{0};
    std::cout << "Entrez une premiere note :" << std::endl;
    std::cin >> a;
    std::cout << "Entrez une seconde note :" << std::endl;
    std::cin >> b;
    std::cout << "Entrez une troisieme note :" << std::endl;
    std::cin >> c;
    float sum{a + b + c};

    std::cout << "La somme de vos notes est de : " << sum << " et votre moyenne est de : " << sum / 3 << std::endl;
    return 0;
}