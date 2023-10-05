#include <iostream>
#include <string>

void changeCharacter(std::string &str)
{
    for (int i{0}; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 95)
            str[i] += 32;
        else if (str[i] == ' ')
            continue;
        else
            str[i] -= 32;
    }
}

int main()
{
    std::string str{" "};
    std::cout << "Entrez une phrase : ";
    std::getline(std::cin, str);
    changeCharacter(str);
    std::cout << str;
    return 0;
}