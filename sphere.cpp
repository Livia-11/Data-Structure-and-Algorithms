#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double pi = 3.14;
    int r;
    double v;

    cout << "Enter the radius of the sphere: ";
    cin >> r;

    v = (4.0 / 3.0) * pi * pow(r, 3);

    cout << "The volume of the sphere is: " << v << endl;
    return 0;
}
