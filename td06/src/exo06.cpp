#include <iostream>
#include <string>
#include <vector>

bool checkPangram(std::string str)
{
    std::vector<char> result;
    for (int i{0}; i <= str.size(); i++)
    {
        for (int j{65}; j <= 95; j++)
        {
            if (str[i] == j || str[i] == (j + 32))
            {
                bool leave{false};
                for (int w{0}; w < result.size(); w++)
                {
                    if (str[i] == result[w])
                        leave = true;
                }
                if (!leave)
                    result.push_back(str[i]);
            }
        }
    }
    if (result.size() == 26)
    {
        return true;
    }
    return false;
}

int main()
{
    std::string str{""};
    std::cout << "Entrez une phrase : ";
    std::getline(std::cin, str);
    if (checkPangram(str))
        std::cout << "C'est un Pangramme !";
    else
        std::cout << "Ce n'est pas un Pangramme !";
    return 0;
}