#include <iostream>
#include <vector>

std::vector<int> fibonacci(int number, std::vector<int> &resultTable)
{
    static int i{0};

    if (resultTable.size() != number)
    {
        resultTable.push_back(resultTable[i + 1] + resultTable[i]);
        i++;
        fibonacci(number, resultTable);
    }

    return resultTable;
}

int main()
{
    int number{0};
    std::vector<int> resultTable{0, 1};

    std::cout << "Entrez un entier positif : ";
    while (!(std::cin >> number) || number <= 0)
    {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << "Entrez un entier positif : ";
    };

    fibonacci(number, resultTable);

    for (int i{0}; i < resultTable.size(); i++)
    {
        std::cout << resultTable[i] << ", ";
    }

    // Itératif
    //  for (int i{0}; i < number; i++)
    //  {
    //      resultTable.push_back(resultTable[i] + resultTable[i + 1]);
    //      std::cout << resultTable[i] << ", ";
    //  }

    return 0;
}