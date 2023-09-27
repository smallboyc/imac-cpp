#include <iostream>
#include <string>

int main()
{
    std::string fullname{""};
    std::cout << "Entrez votre nom complet : " << std::endl;
    std::getline(std::cin, fullname);
    // std::cin >> fullname;
    std::cout << "Votre nom complet est : " << fullname << "." << std::endl;
    return 0;
}
