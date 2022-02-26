#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
} s[2];

int main()


{
    system("cls");
    cout << "Enter information of students: " << endl;

    // storing information
    for(int i = 0; i < 2; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 2; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}