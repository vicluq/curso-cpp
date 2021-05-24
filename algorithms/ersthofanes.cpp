#include <iostream>
#include <math.h>
#include <stdlib.h>

using std::cout;

int main(void)
{
    // Getting the prime factors of a number
    int num{100}, result{num};
    int *divisors = (int *)calloc(1, sizeof(int)), *temp, divAmount = 0;

    if (divisors != NULL)
    {
        for (int i = 2; i < sqrt(num) && result != 1; ++i)
        {
            while (result % i == 0 && result != 1)
            {
                result /= i;

                ++divAmount;
                temp = (int *)realloc(divisors, divAmount * sizeof(int));

                if (temp != NULL)
                {
                    divisors = temp;
                    divisors[divAmount - 1] = i;
                }
                else
                    exit(1);
            }
        }

        cout << "PRIME FACTORS FOR " << num << '\n';
        for (int k = 0; k < divAmount; ++k)
            cout << k + 1 << ": " << divisors[k] << '\n';

        free(divisors);
    }
    else
    {
        exit(1);
        cout << "Calloc problem";
    }
    return 0;
}