#include <iostream>
#include <string>
#include <vector>

int IncludesCharacters(std::string str, std::vector<char> ref)
{
    int result{0};
    for (int i{0}; i < str.size(); i++)
    {

        for (int j{0}; j < ref.size(); j++)
        {
            if (str[i] == ref[j] || str[i] == ref[j] + 32)
            {
                result++;
            }
        }
    }
    return result;
}

int main()
{
    std::string str{" "};
    std::vector<char> voyelles{'a', 'e', 'i', 'o', 'u', 'y'};
    std::cout << "Entrez une phrase : ";
    std::getline(std::cin, str);
    std::cout << IncludesCharacters(str, voyelles) << " voyelles dans " << str;
    return 0;
}