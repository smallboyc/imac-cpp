#include <iostream>
#include <string>

std::string inverseWord(std::string str)
{
    std::string result;
    int size = str.size();
    int j{0};
    for (int i{size - 1}; i >= 0; i--)
    {
        result.push_back(str[i]);
        j++;
    }
    return result;
}

int main()
{
    std::string str{" "};
    std::cout << "Entrez une phrase : ";
    std::getline(std::cin, str);
    std::cout << "Mot inverse : " << inverseWord(str);
    return 0;
}