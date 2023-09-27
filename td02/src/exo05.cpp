#include <iostream>

int main()
{
    int number{0};
    std::cout << "Entrez un nombre entre 1 et 26" << std::endl;
    std::cin >> number;
    number+=64;
    std::cout << "Lettre correspondante dans l'alphabet : " << char(number) << std::endl;
    return 0;
}