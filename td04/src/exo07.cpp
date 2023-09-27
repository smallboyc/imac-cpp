#include <iostream>

// 1 - Triangle rectangle.

// int main()
// {
//     int number{0};
//     int i{0};
//     char star{'*'};

//     std::cout << "Entrez un nombre positif : ";
//     while (!(std::cin >> number) || number <= 0)
//     {
//         std::cin.clear();
//         std::cin.ignore(255, '\n');
//         std::cout << "Saisie invalide. Entrez un nombre positif : ";
//     };

//     while (i < number)
//     {
//         int j{0};
//         while (j != i + 1)
//         {
//             std::cout << star;
//             j++;
//         }
//         i++;
//         std::cout << std::endl;
//     }

//     return 0;
// }

// 2 - Sapin

// int main()
// {
//     int number{0};
//     int i{1};
//     char star{'*'};

//     std::cout << "Entrez un nombre positif : ";
//     while (!(std::cin >> number) || number <= 0)
//     {
//         std::cin.clear();
//         std::cin.ignore(255, '\n');
//         std::cout << "Saisie invalide. Entrez un nombre positif : ";
//     };

//     while (i <= number)
//     {
//         int z{0};
//         while (z != number - i)
//         {
//             std::cout << " ";
//             z++;
//         }
//         int j{1};
//         while (j <= 2 * i - 1)
//         {
//             std::cout << star;
//             j++;
//         }
//         i++;
//         std::cout << std::endl;
//     }

//     return 0;
// }

// 3 - Carré / Rectangle

int main()
{
    int number{0};
    char star{'*'};
    int i{1};

    std::cout << "Entrez un nombre positif : ";
    while (!(std::cin >> number) || number <= 0)
    {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << "Saisie invalide. Entrez un nombre positif : ";
    };

    while (i <= number)
    {
        int j{1};
        while (j <= number)
        {
            if (j != 1 && j != number && i != 1 && i != number)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << star;
            }
            j++;
        }
        i++;
        std::cout << std::endl;
    }

    return 0;
}