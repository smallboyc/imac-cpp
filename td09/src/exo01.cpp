#include <iostream>

void DisplayPtr(int const *ptr)
{
    std::cout << "Valeur pointe : " << *ptr << " a l'adresse : " << ptr;
}

int main()
{
    // int *ptr_numb{new int{}};
    // std::cout << "Entrez une valeur entiere : ";
    // std::cin >> *ptr_numb;
    // std::cout << *ptr_numb;
    // delete ptr_numb;

    int a{24};
    int *ptr_a{&a};
    DisplayPtr(ptr_a);
    delete ptr_a;
    ptr_a = nullptr;
    return 0;
}