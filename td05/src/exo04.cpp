#include <iostream>
#include <string>

bool isPalindrome(std::string const &michel)
{
    for (int i{0}; i < michel.size(); i++)
    {
        if (michel[i] != michel[michel.size() - (i + 1)])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string word{""};
    std::cout << "Entrez un mot : ";
    std::cin >> word;
    if (isPalindrome(word))
        std::cout << word << " est un palindrome.";
    else
        std::cout << word << " n'est pas un palindrome.";

    // for (int i{0}; i < word.size(); i++)
    // {
    //     if (word[i] == word[word.size() - (i + 1)])
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         std::cout << word << " n'est pas un palindrome.";
    //         exit(0);
    //     }
    // }
    // std::cout << word << " est un palindrome.";
    return 0;
}