#include <iostream>
#include <climits>

int main(void)
{
    // NOTE initializations
    int accBalance = 2033; // C like initialization
    int accBalance2(2033); // Cpp like => constructor => prevents overflow cause it warns on compilation time
    int accBalance3{2033}; // Cpp11 like

    // NOTE types
    bool isThereMoney = true;
    long num = {2'000'000'000}; /// to read better, C++14 feature

    std::cout << "The num is " << num << '\n';
    std::cout << "Is it true? " << isThereMoney << '\n'; // true = 1 / false = 0

    return 0;
}

/*
    - Scope
    - initialization type & why it's important
    - Global Variables
    - types (1 byte = 8 bits):
        - int, signed & unsigned = 4 bytes (obs unsigned int == size_t)
        - float, signed & unsigned = 4 bytes
        - long long = 8 bytes
        - double = 8 bytes (decimal precision)
        - long double = 10 bytes
        - char + others, characters = 1 byte
        - bool (c++ only with true or false) = 1 byte
        * sizeof(var) ou sizeof var - can't do it with keywords (int, etc)
    - constants
        - occupies space, can't be changed
        - can replace it with #define (don't use in modern CPP)
*/