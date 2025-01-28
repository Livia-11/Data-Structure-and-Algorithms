#include <iostream>
using namespace std;

int main()
{
    int i;
    int sum = 0;

    for (i = 1; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << "Sum of even numbers between 1 and 100: " << sum << endl;
    
    return 0;
}