#include <iostream>
using namespace std;

int fact(int n)
{

    // Best case
    if ((n == 0) || (n == 1))
    {
        return 1;
    }
    // Assumption/Hypothesis/small answer
    int smallAnswer = fact(n - 1);
    // induce
    return n * smallAnswer;
}
int main()
{

    cout << "result is:" << fact(10) << endl;
}