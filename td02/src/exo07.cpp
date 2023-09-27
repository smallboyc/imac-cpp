#include <iostream>
#include <cmath>
int main()
{
    int a{5};
    int b{8};
    float c{M_PI * 3}; // je veux le résultat de pi (environ 3.141592) fois 3

    b += 20; // je veux ajouter 20 à la valeur de b

    a = a * 15; // je veux le résultat de a fois 15
    std::cout << "a: " << a << std::endl;

    std::cout << "b: " << b << std::endl;

    std::cout << "c: " << c << std::endl;

    return 0;
}