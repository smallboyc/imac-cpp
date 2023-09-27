#include <iostream>
int main()
{
    int nb{11};
    std::cout << "Le resultat donne logiquement " << nb / 2 << " car le type est int." << std::endl;
    std::cout << "Le resultat apres conversion en float est : " << static_cast<float>(nb) / 2.0f << std::endl;
    return 0;
}