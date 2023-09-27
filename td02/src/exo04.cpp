#include <iostream>

int main()
{
    int days{0};
    int century{0};
    int year{0};
    int month{0};
    int week{0};
    int day{0};
    std::cout << "Entrez un nombre de jours : " << std::endl;
    std::cin >> days;
    century = days / (360 * 100);
    year = days / 360;
    month = days % 12;
    week = ((days % 360) % 30) / 7;
    day = ((days % 360) % 30) % 7;
    std::cout << days << " jours correspondent a : " << century << " siecles " << year << " annees " << month << " mois " << week << " semaines " << day << " jours." << std::endl;
    return 0;
}