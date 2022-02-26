#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x, sum =0, i, _1st, _2nd, sum2 = 0;
    cout<< "Enter the value of X: ";
    cin>>x;
    _1st = (x-1)/x;
    cout << _1st <<endl;
    for(i=2; i<=7; i++)
    {
        _2nd = (float) (0.5 * pow(_1st, i));
        sum = sum + _2nd;
    }
    sum2= sum +_1st;
    cout<< "Sum = "<<sum2;

}