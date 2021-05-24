// cctype ia a container from STL in c++ and has function for char checking

#include <iostream>
#include <cctype>

int main(void)
{

    char c_string[] = "v1ctori4 is c00l";

    for (auto c : c_string)
    {
        std::cout << c << " is a number: " << isdigit(c) << '\n';
        std::cout << c << " is a letter: " << isalpha(c) << '\n';
        std::cout << '\n';
    }

    return 0;
}

/*
    Function List:
        - islower(c)
        - isupper(c)
        - isalnum(c) - is a letter or digit
        - isalpha(c) - is a letter (returns any non-zero value)
        - isdigit(c) - is a digit
        - isprint(c) - is a printable char
        - ispunct(c) - is a punctuation char
        - isspace(c) - is a white space

        - tolower(c)
        - toupper(c)
*/