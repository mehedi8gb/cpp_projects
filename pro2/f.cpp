#include <iostream>
using namespace std;

int main()
{
    char ch[7] = {'A','B','C','D','E','F','G'};
    int i = 0, lop =7;

    while (7 >= lop)
    {
        for(i; i < lop-- ; i++)
    {
        cout <<  ch[i];
    }
    int j = 6;
    while(j-- >= 0)
    
    { 
        cout <<  ch[j--];
    }
    cout <<endl;
    }
    
}