#include <iostream>
using namespace std;

int main()
{
    int inp;

    cout << "Enter number: ";
    cin >> inp;

    for (int i = 1; i <= 10; ++i) {
        cout << inp << " * " << i << " = " << inp * i << endl;
    }
}