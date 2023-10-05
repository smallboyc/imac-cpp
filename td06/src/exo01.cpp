#include <iostream>

// copie
//  int somme(int a, int b)
//  {
//      return a + b;
//  }

// référence
//  int somme(int &a, int &b)
//  {
//      return a + b;
//  }

// référence avec passage d'ittéraux
int somme(int const &a, int const &b)
{
    return a + b;
}

int main()
{
    // int a{24};
    // int b{12};

    std::cout << somme(24, 12);
    return 0;
}
