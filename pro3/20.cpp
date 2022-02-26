#include <iostream>
using namespace std;

int main()
{

    int numbers[10];

    for (int n = 0; n <= 10; n++)
    {
        numbers[n] = n;
    }
    for (int j = 0; j <= 10; j++)
    {
        cout << numbers[j] << endl;
    }
}
