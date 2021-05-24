#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

int main(void)
{
    string myEmail{"victoria.tewari@gmail.com"};
    string my_string;
    string sentence;

    // NOTE Assignment & Concat (C-like would be strcpy and strcat) & Operators
    sentence = "meu email é: " + myEmail;
    cout << sentence << '\n';
    cout << (myEmail == sentence) << '\n';
    cout << (myEmail > sentence) << '\n'; // v > m (OK)

    // NOTE Its a vector of chars in its core! 'at' and array notation
    myEmail.at(8) = '_'; // '.' to '_'
    cout << myEmail << '\n';

    // NOTE Methods (pop_back, push_back)
    myEmail.substr(0, 17); // Returns the substring containg the n (17) chars from the index 0

    size_t substrPos = myEmail.find('@'); // Returns the index/pos of the desired char/string literal
    if (substrPos != string::npos) // string::npos is to check wether or not the substr is in it (could also check if it is bigger than the length)
        cout << myEmail.find("gmail") << '\n';

    myEmail.erase(0, 8); // From index 0, remove 8 chars

    myEmail.length(); // Returns the length

    // NOTE Input & Output
    std::cin >> my_string;             // Reads until space (space is like a buffer cleaner)
    getline(std::cin, my_string);      // Reads until line break
    getline(std::cin, my_string, '!'); // the third param is the char that you want as the STOP READING element

    vector<string> names;

    names.push_back("Victoria");
    names.push_back("Julia");
    names.insert(names.begin() + 1, "Carlos"); // Inserting an element between the two others

    for (string str : names)
    {
        cout << str << '\n';
    }

    return 0;
}

/*
    - Can use the assignment operator => string_1 = string_2 (assigns a COPY not a pointer)
    - Can use + operator to concatenate strings
    - Can use equality operators and 'bigger\smaller' than. it has the same effect as the strcmp
    - Can use some vector methods & array notations
    - Can iterate (its and array after all)
*/