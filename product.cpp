#include <iostream>
using namespace std;

int main()
{
    int i;
    int product = 1;

    for (i = 1; i <= 19; i++)
    {
        if (i % 2 != 0)
        {
            product *= i;
        }
    }
    cout << "The product of all odd numbers from 1 to 19 is: " << product << endl;
    return 0;
}
