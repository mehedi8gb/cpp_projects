#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std;
int PowFunc(int num, int pow)
{
    int result = 1;
    for (int i = 0; i < pow; i++)
    {
        result *= num;
    }
    return result;
}

int main()

{

        int num, pow;
        long double pie (3.14159265358979323846264338327950288419716939937510582097);
        std::cout << "Enter Dec Number: " << std::endl;
        cin >> num;
             std::cout << "Enter Dec Number: " << std::endl;
        // cin >> pow;
        cout << setw(3) << dec << num <<endl;
       cout << uppercase << showbase;
        cout << setw(3) << oct << num <<endl;
        cout << setw(3) << hex << num << "\a" <<endl;
        cout << setw(3) << setprecision(100) << pie <<endl;
        //    cout << PowFunc(num,pow) << endl;
}