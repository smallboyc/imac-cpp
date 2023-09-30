#include <iostream>
#include <vector>
#include <string>
int main()
{
    std::vector<std::string> card_number(4, "");
    int code{0};
    for (int i{0}; i < card_number.size(); i++)
    {
        std::cout << "Entrez 4 chiffres postifs : ";
        while (!(std::cin >> card_number[i]) || card_number[i].size() != 4)
        {
            std::cout << "Entrez 4 chiffres postifs : ";
        }

        std::cout << card_number[i] << std::endl;
    }

    std::cout << std::endl;

    for (int i{0}; i < card_number.size(); i++)
    {

        for (int j{0}; j < 4; j++)
        {
            if (j % 2 != 0)
            {

                if ((static_cast<int>(card_number[i][j]) - 48) * 2 > 9)
                {
                    std::string result{std::to_string((static_cast<int>(card_number[i][j]) - 48) * 2)};
                    std::cout << (static_cast<int>(result[0]) - 48 + static_cast<int>(result[1]) - 48) << " ";
                    code += (static_cast<int>(result[0]) - 48 + static_cast<int>(result[1]) - 48);
                }
                else
                {
                    std::cout << (static_cast<int>(card_number[i][j]) - 48) * 2 << " ";
                    code += (static_cast<int>(card_number[i][j]) - 48) * 2;
                }
            }
            else
            {
                std::cout << card_number[i][j] << " ";
                code += static_cast<int>(card_number[i][j] - 48);
            }
        }
    }
    std::cout << std::endl;
    std::cout << "Code : " << code;
    return 0;
}