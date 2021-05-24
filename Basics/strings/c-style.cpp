// C-Style strings -> arrays of characters, so they are pointers of type char

#include <iostream>
#include <cstring>

using std::cout;

int main(void)
{
    int i = 0, strLen = 0, are2and3Equal = 1;

    // Declarations => always remember the extra null char
    char str_1[9] = "victoria";
    char str_2[] = "charizard";
    char *str_3 = "cleytinho";

    // Input
    scanf("%8[^\n]", str_1);
    std::cin >> str_1; // não pega espaços pois isso eh usado com cpp string
    std::cin.getline(str_3, 20); // This method from cin, is the same as %20[^\n], it goes until the line break

    // Looping through a string

    // Getting the length - strlen function
    while (str_1[i] != '\0')
    {
        ++strLen;
        ++i;
    }

    i = 0;

    // Checking if they are equal - must have same length
    while (are2and3Equal && str_2[i] != '\0')
    {
        if (str_2[i] != str_3[i])
        {
            are2and3Equal = 0;
        }
    }

    return 0;
}