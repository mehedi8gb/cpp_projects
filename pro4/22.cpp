#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter the Capital string ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
    cout << "\n The string in lower case:" << str << "\n";
    return 0;
}