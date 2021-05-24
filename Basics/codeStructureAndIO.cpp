#include <iostream>
#include <stdio.h> // C stuff is available as well, it contains C :)

using std::cin;

int main(void)
{
    std::cout.precision(2); // setting float precison formatting
    char name[20];
    int age = 19;

    std::cout << age << '\n'; // Using the O stream to output content
    cin >> age;               // Using the I stream to get input content from the buffer
    cin >> name;              // won't read white spaces

    std::cout << "I am " << name << " and i\'m " << age << " years old\n"; // Concatenating to display multiple content

    // if is type "oi", it won't read it and the variable will not be defined, or it will be 0, or trash from buffer
    std::cout << "age address: " << (long int)&age; // variable address

    return 0;
}

/*
    * Pre processor
        - Analises code before compilation and adds what is needed such as macros and include libraries
        - pre processors directives: Intiates with #
        - The preprocessors don't undestand CPP, only the preprocessors directives

    * The Main function
        - What is executed, every function and content to be executed, should go into it
        - int main() and int main(int argc, char *argv[]) => args are SO info that is needed
            - These arguments are the flags passed when executing the program (terminal)

    * Basic IO from iostream (can also use stdio.h) = the iostream IO don't ask for the type like printf & scanf
        - cout => outputs content and is used with << (pretend that << is "leaving")
            - endl => flush the string as well
            - \n
        - cin => receives content from buffer and is used with >> (pretend that >> is "coming")
            - Can be chanined "std::cin >> data1 >> data2;"
            - Cpp ignores whites and tabs from buffer, unless it's told not to
        - cerr => standart error
        - clog => standart log
        - << & >> are bitwise ops
        - OBS: to receive and output with iostream, we don't specify like C, the program interprets by the type (we can control, but later)

        READ ON FLAGS FOR FORMSTING SUCH AS BOOLALPHA, SETPRECISION, SETFILL, ETC => std::setPrecision(...);
        IT WILL STAY LIKE THIS

    * Namespaces
        - std is a namspace that has content and to use it's content we must attach '::'
        - That is because many other libs can have a cout or cin named stuff, so namespaces identifies which is
        - "using namespace *nspName*" => allows to use std as standart for all std items (can have conflicts
        - We can specify what we want to use from the namespace as standart => "using std::cout", etd
*/