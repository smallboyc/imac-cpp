#include <iostream>
#include <vector>

void moyenne(std::vector<int> table)
{
    int i{0};
    float result{0};
    while (i != table.size())
    {
        result += table[i];
        i++;
    }
    std::cout << "La moyenne est de : " << result / table.size() << std::endl;
}

void moyenne(std::vector<float> table)
{
    int i{0};
    float result{0};
    while (i != table.size())
    {
        result += table[i];
        i++;
    }
    std::cout << "La moyenne est de : " << result / table.size() << std::endl;
}

int main()
{
    std::vector<int> intTable{1, 20, 14, 16, 17, 12, 11};
    std::vector<float> floatTable{14.2, 17.4, 9.1, 19.5};
    moyenne(intTable);
    moyenne(floatTable);
    return 0;
}