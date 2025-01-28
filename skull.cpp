#include <iostream>
using namespace std;

int main(){

    string school;

    cout << " What is your school?" << endl;

    getline(cin, school); 

    cout << "Your school is " << school << endl;

    return 0;
}