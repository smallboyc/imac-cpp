#include <iostream>
#include <array>

void printSudoku(std::array<int, 81> &table)
{
    int i{0};
    while (i < table.size())
    {
        if (i % 3 == 0)
            std::cout << "   ";
        if (i % 9 == 0)
            std::cout << std::endl;
        if (i % 27 == 0)
            std::cout << std::endl;
        std::cout << table[i] << " ";
        i++;
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, 81> sudoku{5, 3, 0, 0, 7, 0, 0, 0, 0, 6, 0, 0, 1, 9, 5, 0, 0, 0, 0, 9, 8, 0, 0, 0, 0, 6, 0, 8, 0, 0, 0, 6, 0, 0, 0, 3, 4, 0, 0, 8, 0, 3, 0, 0, 1, 7, 0, 0, 0, 2, 0, 0, 0, 6, 0, 6, 0, 0, 0, 0, 2, 8, 0, 0, 0, 0, 4, 1, 9, 0, 0, 5, 0, 0, 0, 0, 8, 0, 0, 7, 9};
    printSudoku(sudoku);
    int i{0};
    while (i < 9)
    {
        if (sudoku[i] == 0)
        {
            int j{1};
            while (j <= 9)
            {
                int z{0};
                while (z < 9)
                {
                    if (sudoku[z] != j)
                    {
                        z++;
                    }
                    else
                    {
                        break;
                    }
                    if (z == 9)
                    {
                        sudoku[i] = j;
                        i++;
                    }
                }
                j++;
            }
        }
        i++;
    }
    printSudoku(sudoku);
    return 0;
}