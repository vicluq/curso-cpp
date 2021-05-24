#include <iostream>
#include <string>

int main(void)
{
    std::string str;
    std::cin >> str;

    for (int k = 1; k <= str.length(); ++k)
    {
        // Spaces to build pyramids
        for (int m = k; m <= (2 * str.length() - 1) / 2; ++m)
            std::cout << ' ';

        // Pyramid contents
        for (int i = 0; i < ((2 * k) - 1); ++i)
        {
            if (i < k)
            {
                std::cout << str[i];
            }
            else
            {
                std::cout << str[(2 * k) - i - 2];
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

/*
===== LOGICA:

    1 (1 + 0)
   121 (2 + 1)
  12321 (3 + 2) 
 1234321 (4 + 3)
123454321 (5 + 4) 

  i    ind  k   i
  3 -> 1 => 3 - 3 + 1 
  4 -> 0 => 3 - 4 + 1

  6 -> 0 => 4 - 6 + 2
  5 -> 1 => 4 - 5 + 2
  4 -> 2 => 4 - 4 + 2

  8 -> 0 => 5 - 8 + 3
*/