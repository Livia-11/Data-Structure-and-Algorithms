#include <iostream>
using namespace std;
int sum(int x)
{
    int sum = 0;
    while(x > 0)
    {
        sum += x % 10; // Add the last digit of x to sum
        x /= 10;       // Remove the last digit from x
    }
    return sum;
}
int main()
{
    int x = 1335;
    cout << "The sum of the digits of " << x << " is: " << sum(x) <<endl;
    return 0;
}