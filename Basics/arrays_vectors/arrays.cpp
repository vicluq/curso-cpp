/* ARRAYS
    - Colection os data of the same data type
    - How are they stored in memory? a linear "array" os memory addresses, fixed in size
        - The block are stored in sequence in memory
        - Must be careful when dealing with the index, so we don't invade memory
    - Are pointers in essence
        - the name of the array is the address of the [0] element and [1] is (arr + 1) and *(arr + 1)
*/
#include <iostream>

int main(void) {

    int grades[3] {10, 3, 5};

    std::cout << grades[2]; // Last element
    std::cout << grades[0]; // First element

    return 0;
}