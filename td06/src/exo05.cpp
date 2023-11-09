#include <iostream>

int Un(int const n);
int Vn(int const n);

int main()
{
    int n{0};
    while (n <= 9)
    {
        std::cout << "U" << n << " = " << Un(n) << " et "
                  << "V" << n << " = " << Vn(n) << std::endl;
        n++;
    }
    return 0;
}

int Un(int const n)
{
    if (n == 0)
        return 1;
    else
        return 3 * Un(n - 1) + 2 * Vn(n - 1);
}

int Vn(int const n)
{
    if (n == 0)
        return 2;
    else
        return 2 * Vn(n - 1) + Un(n - 1) + 1;
}

// Récursif avec variable static! (une fonction)

// void suite(int un, int vn)
// {
//     static int i{0};
//     static int un_p_1{0};

//     std::cout << "U" << i << " = " << un << " et "
//               << "V" << i << " = " << vn << std::endl;

//     un_p_1 = 3 * un + 2 * vn;

//     static int vn_p_1{0};
//     vn_p_1 = 2 * vn + un + 1;

//     i++;
//     if (i <= 9)
//         suite(un_p_1, vn_p_1);
//     else
//         return;
// }

// int main()
// {
//     int u0{1};
//     int v0{2};
//     suite(u0, v0);
//     return 0;
// }

// Récursif classique (référence) (une fonction)

// void suite(int &un, int &vn, int &i)
// {
//     int temp{un};
//     std::cout << "U" << i << " = " << un << " et "
//               << "V" << i << " = " << vn << std::endl;

//     un = 3 * un + 2 * vn;

//     vn = 2 * vn + temp + 1;

//     i++;
//     if (i <= 9)
//         suite(un, vn, i);
//     else
//         return;
// }

// int main()
// {
//     int un{1};
//     int vn{2};
//     int i{0};
//     suite(un, vn, i);
//     return 0;
// }
