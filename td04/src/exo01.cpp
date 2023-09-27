#include <iostream>

int main()
{
    int number{0};
    std::cout << "Entrez un nombre : ";
    std::cin >> number;

    for (int i = 0; i <= number; i++)
    {
        if (i % 2 == 0)
            std::cout << i << std::endl;
    }

    // for (int i = 0; i <= number; i++)
    // {
    //     if (i % 2 != 0)
    //         continue;
    //     std::cout << i << std::endl;
    // }

    // for (int i = 0; i <= (number / 2); i++)
    // {
    //     std::cout << 2 * i << std::endl;
    // }

    return 0;
}