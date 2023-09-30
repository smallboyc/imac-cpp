#include <iostream>
#include <string>

int main()
{
    std::string word{""};
    std::cout << "Entrez un mot : ";
    std::cin >> word;

    for (int i{0}; i < word.size(); i++)
    {
        if (word[i] == word[word.size() - (i + 1)])
        {
            continue;
        }
        else
        {
            std::cout << word << " n'est pas un palindrome.";
            exit(0);
        }
    }
    std::cout << word << " est un palindrome.";
    return 0;
}