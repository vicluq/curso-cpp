#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    vector<vector<int>> vector_2d;
    vector<int> vector_1, vector_2;

    vector_1.push_back(10);
    vector_1.push_back(20);

    cout << vector_1.at(0) << '\n';
    cout << vector_1.at(1) << '\n';
    cout << "vector_1 size is " << vector_1.size() << '\n';

    vector_2.push_back(100);
    vector_2.push_back(200);

    cout << vector_2.at(0) << '\n';
    cout << vector_2.at(1) << '\n';
    cout << "vector_2 size is " << vector_2.size() << '\n';

    cout << '\n';

    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);

    for (int i{0}; i < vector_2d.size(); ++i)
    {
        for (int k{0}; k < vector_2d.at(i).size(); ++k)
            cout << "vector_2d[" << i << "][" << k << "] = " << vector_2d.at(i).at(k) << '\n';
    }

    vector_1.at(0) = 100;

    for (int i{0}; i < vector_2d.size(); ++i)
    {
        for (int k{0}; k < vector_2d.at(i).size(); ++k)
            cout << "vector_2d[" << i << "][" << k << "] = " << vector_2d.at(i).at(k) << '\n';
    }

    return 0;
}