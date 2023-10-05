#include <iostream>
#include <string>
#include <vector>

int words(std::string str)
{
    int result{0};
    for (int i{0}; i < str.size(); i++)
    {
        if (str[i] != ' ' && str[i + 1] == ' ')
            result++;
    }
    return result + 1;
}

int main()
{
    std::string str{""};
    std::cout << "Entrez une phrase : ";
    std::getline(std::cin, str);
    std::cout << "Il y a " << words(str) << " mots dans " << str;
    return 0;
}