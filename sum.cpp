#include <iostream>
using namespace std;

// Overloading functions

int addition(int a, int b)
{
    return a + b;
}
int addition(int a, int b, int c)
{
    return a + b + c;
}
int addition(double a, double b, double c)
{
    return a + b + c;
}

int addition(double a, double b)
{
    return a + b;
}

int main()
{
    int sum = addition(1, 3);
    cout << "The sum is: " << sum << endl;
    return 0;
}