/*
    For Range Loops
        - useful to avoid memory invasion and leaks
        - useful for not declaring aparent extra vars
*/
#include <iostream>
#include <vector>

using std::vector;

int main(void)
{
    // Arrays & Vectors
    vector<float> grades{7.45, 9.7, 6.5, 8.7, 9.3};
    float gradeAverage = 0;

    for (float currentGrade : grades) // if we pass "auto currentGrade" => the compiler "guesses"
        gradeAverage += currentGrade / grades.size();
    // 1 - We can declare the collection inside the loop, but then we'd have get the size mannually
    // OBS: setting decimal precision => cout << var << setPrecision(2); iostream feature

    std::cout << gradeAverage << '\n';

    // Strings => C-style
    char aString[] = "cool name bruh";
    for (auto c : aString)
        std::cout << c << '\n';

    for (char c : "This is Luquet")
        std::cout << c << '\n';

    return 0;
}