#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    system("cls");
    int a[4][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}};
    int b[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
        };

    // array a
    int rows = sizeof(a) / sizeof(a[0]);
    int cols = sizeof(a[0]) / sizeof(int);
    // array b
    int rowsB = sizeof(b) / sizeof(b[0]);
    int colsB = sizeof(b[0]) / sizeof(int);
   int n = sizeof(a) / sizeof(int) + sizeof(b) / sizeof(int);
    int m = sizeof(a) / sizeof(int) + sizeof(b) / sizeof(int);

    int c[rows][cols];

    cout << rows << " " << cols << endl;
    cout << rowsB << " " << colsB;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; i++)
        {
              if (i < sizeof(a) / sizeof(int))
        {
            c[i][j] = a[i][j];
        }
        else
        {
            c[i][j] = b[i - sizeof(a) / sizeof(int)][i - sizeof(a) / sizeof(int)];
        }
        }

    }

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
            cout << " " << c[i][j];
       }
       cout << endl;

    }

   
}