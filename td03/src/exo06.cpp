#include <iostream>
#include <string>

int main()
{
    int number{0};
    std::cout << "Saisir un entier : ";
    std::cin >> number;
    std::string checkSign{number > 0 ? "positif" : number < 0 ? "negatif"
                                                              : "positif et negatif"};
    std::string checkParity{number % 2 == 0 ? "pair !" : "impair !"};

    std::cout << number << " est " << checkSign << " et " << checkParity << std::endl;

    return 0;
}