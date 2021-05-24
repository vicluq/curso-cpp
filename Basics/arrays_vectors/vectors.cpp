/* 
    Vectors are part of the STL library, a OOP lib from Cpp 

    - they are dynamic arrays, except that we aren't the ones to allocate it, but cpp does it for us
    - we can use powerfull methods with them (they are containers, inside the concepts of OOP) 
    - they are stored the same way as an array (in a sequence) and because of that, they all have the same element type
    - they are all initialized to zero (int, floa, number ones) and are very efficient

*/

#include <iostream>
#include <stdio.h>
#include <vector> // Including vectors from STL

using std::cout;

int main(void)
{

    // Declaration >> std::vector<content type> var_name (amount?) or {...};
    int gradeAmount = 5;
    std::vector<int> grades{10, 9, 8, 9, 6};
    std::vector<int> grades2 (4, 7); // 4 elements with the value of 7

    // NOTE Accessing values

    // 1) same as arrays => No bound checking
    cout << grades[4] << '\n';
    cout << grades[0] << '\n';

    // 2) at(index) method => there is bound checking
    cout << grades.at(0) << '\n';
    std::cin >> grades.at(0); // since its all "pointers", the method at allows the usage with cin such as grades[x]
    scanf("%d", &grades.at(0)); // with scanf

    // 3) getting the size
    cout << "Vector size is: " << grades.size() << '\n'; // no need for creating a new var to check

    // NOTE Modifiyng values

    // 1) push_back(value) => adds a value to the end of the vector (must be of the same type as the vector)
    grades.push_back(7); // 10, 9, 8, 9, 6
    ++gradeAmount;       // Cpp doesn't control this, so we must handle the amounts => some vector methods do the checking and giv us a warning (arrays don't)
    cout << grades[gradeAmount - 1] << '\n'; // or grades[grades.size() - 1]

    cout << "Vector NEW size is: " << grades.size() << '\n';
    // obs: in C style arrays, we would have to reallocate memory dynamically

    grades.erase(grades.begin(), grades.begin() + 3);

    // NOTE Methods
        // vector.begin => returns the memory address (pointer) to the first element
        // vector.erase() => erases an element. receives the memory address of the element(s). can receive two params if you want to delete a range
        // vector.swarp(vector2) => swaps both vecs
        // vector.clear() => clears the vector's content
        // vector.emplace() => cpp ref

    // NOTE 2D Vector => vector of vectors

    // 1) using at => vector.at(x).at(y)
    // 2) i can push_back vectors to 2d vecs

    return 0;
}