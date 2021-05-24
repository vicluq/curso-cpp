#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
// #include <iomanip>

using std::cin;
using std::cout;
using std::endl;

// Function prototypes => telling the compiler what it is befor defining it
void addElementToVec(std::vector<float> *vec, float elem);
float reduceArray(std::vector<float> numArr, float); // don't need the name but it is better

int main(void)
{
    // setting precision
    cout << std::setprecision(2);
    // cout.precision(2);
    std::vector<float> numberCollection{22, 13};

    numberCollection.push_back(29);
    numberCollection.insert(numberCollection.begin() + 1, {21.7, 33.8});
    addElementToVec(&numberCollection, 71.9);

    for (size_t i = 0; i < numberCollection.size(); ++i)
    {
        cout << numberCollection.at(i) << ' ';
    }

    cout << endl
         << "RESULT: " << reduceArray(numberCollection, 0)
         << endl;

    return 0;
}

void addElementToVec(std::vector<float> *vec, float elem)
{
    (*vec).push_back(elem);
}

float reduceArray(std::vector<float> numArr, float initialValue)
{
    float sum{initialValue};

    for (float num : numArr)
    {
        sum += num;
    }

    return sum;
}

/*
    FUNCTIONS:

        The use of functios are related to the declarative way of programaming, meaning we understand what it does but we don't need to know the entire process
        of how the function itself works.

        - they are useful to modularize your code, break it into parts that execute a certain type of code, thus makingit more readable
        - think of them just as math functions, they have a formula (what they do) and receive parameters
        - ex: <cmath> contais functions for algebric operations, sqrt, hypot, etc

        USAGE:
        - they may or may not return something => we must specify the return type, void for nothing and the others for each type


*/