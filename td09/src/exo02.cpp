#include <iostream>
#include <vector>

int *tallestNumber(std::vector<int> const &table)
{
    int *ptr_result{new int{0}};
    for (int i{0}; i < table.size(); i++)
    {
        if (*ptr_result < table[i])
            *ptr_result = table[i];
    }
    return ptr_result;
}

// int sum(int *table, int const size)
// {
//     int result{0};
//     for (int i{0}; i < size; i++)
//     {
//         result += *(table + i);
//     }
//     return result;
// }

int *sum(std::vector<int> const &v)
{
    int sum{0};
    int *ptr_sum{&sum};
    for (int i{0}; i < v.size(); i++)
    {
        *ptr_sum += v[i];
    }
    return ptr_sum;
}

int main()
{
    srand((unsigned)time(NULL));
    std::vector<int> table(4);
    int *array_ptr{data(table)};
    for (int i{0}; i < table.size(); i++)
    {
        table[i] = rand() % 101;
        std::cout << table[i] << ", ";
    }
    std::cout << "L'element le plus grand est " << *tallestNumber(table) << std::endl;
    std::cout << "La somme est " << *sum(table) << std::endl;
    // std::cout << "La somme est " << sum(array_ptr, table.size());

    return 0;
}