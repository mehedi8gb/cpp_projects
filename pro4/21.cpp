#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);
    cout << "\n The string in upper case:" << str << "\n";
    return 0;
}