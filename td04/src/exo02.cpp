#include <iostream>

int main()
{
    // int i{0};
    // while (i < 20)
    // {
    //     std::cout << i + 1 << std::endl;
    //     i++;
    // }

    // for (int i{0}; i < 20; i++)
    // {
    //     std::cout << i + 1 << std::endl;
    // }

    // int number{7};
    // int j{0};
    // while (j < 50)
    // {
    //     std::cout << j << " fois " << number << " = " << j * number << std::endl;
    //     j++;
    // }

    int number{7};
    for (int j{0}; j < 50; j++)
        std::cout << j << " fois " << number << " = " << j * number << std::endl;

    return 0;
}