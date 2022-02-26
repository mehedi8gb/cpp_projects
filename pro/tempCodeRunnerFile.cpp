#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>


using namespace std;

void againCall()
{
    cout << "Enter class again? then hit 'y' or any key to exit" << endl;
    char check = getche();
    if (check == 'y')
    {
        system("cls");
    }
    else
    {
        cout << "\n\n";
        cout << "\t\t     Thank you for using this software :D";
        cout << "\n\n";
        sleep(5);
        exit(0);
    }
}
// show function
void showFunc(int value, int num)
{
    string sub;
    (num == 1) ? sub = " subject" : sub = " subjects";
    cout << "you can eligible to get total of: " << value * num << " grace in " << num << sub << endl;
}

int main()
{
    system("cls");
    while (1)
    {

        int num;
        char Class;
        string showdText = "How many subjects have you failed?, EX:1,2,3: ";
        cout << "Enter Class [EX:1,2,3]: " << endl;
        fflush(stdin);
        Class = getche();

        

        switch (Class)
        {
        case '1':
            system("cls");
            cout << showdText << endl;
            cin >> num;
            if (num <= 3 && num > 0)
            {
                showFunc(5, num);
            }
            else
            {
                cout << "You can not eligible to get any grace" << endl;
            }
            againCall();

            break;
        case '2':
            system("cls");
            cout << showdText << endl;
            cin >> num;
            if (num <= 2 && num > 0)
            {
                showFunc(5, num);
            }
            else
            {
                cout << "You can not eligible to get any grace." << endl;
            }
            againCall();
            break;
        case '3':
            system("cls");
            cout << showdText << endl;
            cin >> num;
            if (num == 1 && num > 0)
            {
                showFunc(1, num);
            }
            else
            {
                cout << "You can not eligible to get any grace" << endl;
            }
            againCall();
        default:
            cout << "Something went wrong!" << endl;
            exit(0);
            break;
        }
    }
}