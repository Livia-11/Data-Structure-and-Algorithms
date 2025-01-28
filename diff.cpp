#include <iostream>
using namespace std;

int difference(int numbers[])
{
    int oddSum = 0;
    int evenSum = 0;
    int diff;

    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++)
    {

        if (numbers[i] % 2 == 0)
        {
            int evenSum = +numbers[i];
        }
        else
        {
            int oddSum = +numbers[i];
        }
        int diff = oddSum - evenSum;
        return diff;
    }
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Difference between sum of odd and even numbers: " << difference(numbers) << endl;

    return 0;
}