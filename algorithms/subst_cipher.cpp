// Coded messages => replace a char with it's equivalent according to you
#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>

using std::cout;
using std::string;

// Cpp Style
int main(void)
{
    size_t divPos, charPos;
    string ciphers[4]{"a => y", "c => x", "h => Z", "o => T"};
    string word;

    getline(std::cin, word);

    for (int k = 0; k < 4; ++k)
    {
        divPos = ciphers[k].find("=>");
        charPos = word.find(ciphers[k].substr(divPos - 2, 1));

        if (charPos != string::npos)
        {
            word[charPos] = ciphers[k][divPos + 3];
        }
    }

    cout << word << std::endl;

    return 0;
}

// C-Style
// int main(void)
// {
//     size_t currentIndex = 0, spaceCount = 0;
//     char ciphers[4][7] = {"c => x",
//                           "a => y",
//                           "h => Z",
//                           "o => T"};
//     char decoded[4][3]; // store the ciphers formatted

//     char word[10];
//     fgets(word, 9, stdin);

//     // Get the ciphers
//     for (int i = 0; i < 4; ++i)
//     {
//         while (ciphers[i][currentIndex] != '\0')
//         {
//             if (currentIndex == 0)
//                 decoded[i][0] = ciphers[i][currentIndex];
//             else if (ciphers[i][currentIndex] == ' ' && spaceCount < 2)
//                 ++spaceCount;
//             else if (spaceCount == 2)
//                 decoded[i][1] = ciphers[i][currentIndex];

//             ++currentIndex;
//         }
//         std::cout << decoded[i][0] << " > " << decoded[i][1] << std::endl;

//         currentIndex = 0;
//         spaceCount = 0;
//     }

//     while (word[currentIndex] != '\0')
//     {
//         for (int k = 0; k < 4; ++k)
//         {
//             if (word[currentIndex] == decoded[k][0])
//                 word[currentIndex] = decoded[k][1];
//         }

//         ++currentIndex;
//     }

//     std::cout << word << std::endl;

//     return 0;
// }