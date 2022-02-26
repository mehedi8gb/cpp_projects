#include <iostream>
using namespace std;

int main()

{
    int input;
    cin >> input;
    switch (input)
    {
    case '1':
        printf("One");
    case '2':
        printf("Two");
    case '3':
        printf("Three");
    default:
        printf("Default");
        break;
    }
}
