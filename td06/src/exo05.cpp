#include <iostream>

// Récursif avec variable static!

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




// Récursif classique (référence)

void suite(int &un, int &vn, int &i)
{
    int temp{un};
    std::cout << "U" << i << " = " << un << " et "
              << "V" << i << " = " << vn << std::endl;

    un = 3 * un + 2 * vn;

    vn = 2 * vn + temp + 1;

    i++;
    if (i <= 9)
        suite(un, vn, i);
    else
        return;
}

int main()
{
    int un{1};
    int vn{2};
    int i{0};
    suite(un, vn, i);
    return 0;
}