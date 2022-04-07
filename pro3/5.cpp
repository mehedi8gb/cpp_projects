#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int a[6] = {1, 2, 3, 4,5,6},
        b[4] = {7, 8, 9, 10};

    // array a
    int rows = sizeof(a) / sizeof(a[0]);
    // array b
    int rowsB = sizeof(b) / sizeof(b[0]);
    int n = rows + rowsB;

    int c[n];

    // cout << rows << " " << rowsB << "\n\n\n";

    for (int i = 0; i < n; i++)
    {
        if (i < rows)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - rows];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << c[i] << " ";
    }
}