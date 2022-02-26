#include<iostream>
using namespace std;
 
int main()
{
    int rows = 5, n = 1;
    // int data[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    for (int i = 0; i < rows; i++)
    {
    //    int val = 1;
        for (int j = 1; j < (rows - i); j++)
        {
            cout << "   ";
        }


          for (int k = 0; k <= i; k++)
        {
            cout << "      " << n++;
        }
           cout << "\n \n";
    }
    cout << "\n";
}