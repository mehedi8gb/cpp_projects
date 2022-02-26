#include <iostream>
using namespace std;

int main()
{
    string alp1, alp2;

    cout << "Enter string s1: ";
    getline (cin, alp1);

    alp2 = alp1;

    cout << "alp 1 = "<< alp1 <<endl;
    cout << "alp 2 = "<< alp2 <<endl;
    cout << "number of charecter copied = "<< alp2.length() <<endl;

    return 0;
}