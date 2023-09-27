#include <iostream>

int main()
{
    int number{0};
    float result{0};
    int i{0};
    do
    {
        std::cout << "Entrez un nombre positif : ";
        std::cin >> number;

        if (number >= 0)
        {
            result += number;
            i++;
            std::cout << "Somme des entiers positifs saisis : " << result << std::endl;
            std::cout << "Moyenne des entiers positifs saisis : " << result / i << std::endl;
        }

    } while (number >= 0);
    std::cout << "Entier negatif saisi, fin du programme." << std::endl;
    return 0;
}