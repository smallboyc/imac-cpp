#include <iostream>

int main()
{
    int altitude{0};
    float temperatureAmbiante{0};
    float temperatureEbullition{100};
    int time{0};
    bool salt{false};
    std::cout << "Entre une altitude : ";
    std::cin >> altitude;
    std::cout << "Entre une temperature ambiante (en celcius) : ";
    std::cin >> temperatureAmbiante;
    std::cout << "Ajouter le sel ? (1 = oui / 0 = non) : ";
    std::cin >> salt;

    if (altitude >= 300)
        temperatureEbullition -= altitude / 300;
    if (salt)
        temperatureEbullition += 1.5;
    time = (temperatureEbullition - temperatureAmbiante) / 10;
    std::cout << "Temperature d'ebullition : " << temperatureEbullition << "degres celcius." << std::endl;
    std::cout << "Temps d'ebullition : " << time << " min." << std::endl;
    return 0;
}