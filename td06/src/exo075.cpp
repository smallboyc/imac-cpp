#include <iostream>
#include <string>

bool isDigitFaitMaison(std::string str)
{
    for (int i{0}; i < str.size(); i++)
    {
        if (str[i] < 49 || str[i] > 57)
            return false;
    }
    return true;
}

int main()
{
    std::string str{""};
    std::cout << "Entrez une chaine de caracteres : ";
    std::cin >> str;
    if (isDigitFaitMaison(str))
        std::cout << "La chaine est un nombre entier !";
    else
        std::cout << "La chaine n'est pas un nombre entier.";
    return 0;
}