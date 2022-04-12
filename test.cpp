#include <iostream>
using namespace std;
int main()
{
    int num, len= 0, for_check, sum_1 = 0;
    cout<< "Number: ";
    cin>>num;
        while( num > 0)
    {
        num = num / 10;
        len++;
    }
    cout<<len<<endl;

    for(int i = 0; i < 10; i++)
    {
        for_check = num % 10;
        sum_1 = for_check + sum_1;
        num = num / 10;
        // cout<<len<<endl;
    }
    cout<<sum_1;
}