#include <iostream>
#include <string>

enum class Article
{
    ALIMENTATIONS,
    VETEMENTS,
    CHAUSSURES,
    AUTRE
};

int main()
{
    Article product;
    int choice{0};
    float price{0};
    std::string loyaltyChoice{""};
    bool loyaltyCard{false};
    int age{0};
    std::cout << "Type d'article : " << std::endl;
    std::cout << "1 - ALIMENTATIONS" << std::endl;
    std::cout << "2 - VETEMENTS" << std::endl;
    std::cout << "3 - CHAUSSURES" << std::endl;
    std::cout << "4 - AUTRE" << std::endl;
    std::cin >> choice;
    if (choice >= 1 || choice <= 4)
    {
        product = static_cast<Article>(choice - 1);
    }
    else
    {
        exit(0);
    }
    std::cout << "Prix de l'article : " << std::endl;
    std::cin >> price;

    do
    {
        std::cout << "Avez vous la carte de fidelite ? oui / non" << std::endl;
        std::cin >> loyaltyChoice;
        if (loyaltyChoice == "oui")
        {
            loyaltyCard = true;
        }
        else if (loyaltyChoice == "non")
        {
            loyaltyCard = false;
        }
    } while (loyaltyChoice != "oui" && loyaltyChoice != "non");

    std::cout << "Quel est votre age ? " << std::endl;
    std::cin >> age;
    if (product == Article::ALIMENTATIONS)
    {
        if (loyaltyCard)
        {
            price = price - (price * 0.08);
        }
        else
        {
            price = price - (price * 0.05);
        }
        if (age < 26)
            price = price - (price * 0.1);
    }
    else if (product == Article::VETEMENTS)
    {
        if (loyaltyCard)
        {
            price = price - (price * 0.15);
        }
        else
        {
            price = price - (price * 0.1);
        }
        if (age < 26)
            price = price - (price * 0.1);
    }
    else if (product == Article::CHAUSSURES)
    {
        if (loyaltyCard)
        {
            price = price - (price * 0.18);
        }
        else
        {
            price = price - (price * 0.12);
        }
        if (age < 26)
            price = price - (price * 0.1);
    }
    else if (product == Article::AUTRE)
    {
        if (age < 26)
            price = price - (price * 0.1);
    }

    std::cout << "Le prix total est de " << price << " euros !" << std::endl;
    if (price * 0.1 <= 30)
        std::cout << "Vous disposez d'un bon d'achat de " << price * 0.1 << " euros !" << std::endl;
    return 0;
}