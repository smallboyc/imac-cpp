#include <iostream>

int factorial(int number)
{
    static int i{1};
    static int result{1};
    if (i <= number)
    {
        result *= i;
        i++;
        factorial(number);
    }
    else
    {
        return result;
    }
}

int main()
{
    int number{0};
    int result{1};
    std::cout << "Entrez un entier positif : ";
    while (!(std::cin >> number) || number <= 0)
    {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << "Entrez un entier positif : ";
    };

    // for (int i{1}; i <= number; i++)
    // {
    //     result *= i;
    // }
    std::cout << "Factorielle de " << number << " : " << factorial(number);

    return 0;
}