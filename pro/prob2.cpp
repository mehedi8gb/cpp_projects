#include <iostream>

using namespace std;

int main()
{

    char name[6];
    cout << sizeof(name);

    for (int i = 0; i < 5; i++)
    {
        cin >> name[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << name[i];
    }
}