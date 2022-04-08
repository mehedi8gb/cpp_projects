#include <iostream>
#include <windows.h>
#include <conio.h>
#include <unistd.h>
#include <string>

using namespace std;
class Figlet
{
private:
    char temp; 
    int n = 6, b = 11, d = 0;// b = width , d = height
    char *txt;

public:
    int option;

    bool isActive = true;

    // functions

  void gotoxy(short x, short y)
    {
        COORD pos = {x, y};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    }

    void fontSize()
    {
        system("cls");
        cout << "\nEnter font size \t \"Note: 11 is preferd and default font size\" \n:";
        cin >> b;
        cout << "Want to add padding on top (enter digit/n)? \"Note:  is default padding\"\n";
        cin >> temp;
        if (temp != 'n')
            d = temp - '0';
        else
            menu();
    }
    void charLimit()
    {
        system("cls");
        cout << "\nhow many alphabets do you want to figlet? \n:";
        cin >> temp;
        if (temp != 'n')
            n = temp - '0';
        else
            menu();
    }
    void enterChar(char *texts) // enter character
    {
        system("cls");
        cout << "\nEnter Alphabets within (" << n << ") charecters \t [note: now only work with 9 char's like m,d,h,d,a,f,i,l,e]\n:";
        cin >> texts;
        txt = texts;
    }
    void update()
    {

        if (option == 2)
            cout << "\n\nFont Gap : " << b << " and Padding : " << d << " has been updated\n\n", option = 0;
        if (option == 3)
            cout << "\n\n Alphabets Limit are set to : " << n << "\n\n", option = 0;
        if (option == 4)
            cout << "\n\n Character's are set as : " << txt << "\n\n", option = 0;
    }
    
  

    void yn()
    {
        cout << "\n\n\nwant to see this magic again? y/n";
        char c = getche();

        if (c == 'y' || c == 'Y')
            isActive = true, system("cls");
        else
            isActive = false, cout << "\n\tthanks for using! :D", sleep(2), exit(0);
    }
    void figlet(char *text, int B)
    {
        system("cls");

        for (int i = 0; i < n; i++)
        {
            b = B;
            if (text[i] == 'i')
            {
                b *= i;
                gotoxy(b, 0 + d);
                cout << " [][][]\n";
                gotoxy(b, 1 + d);
                cout << "   []  \n";
                gotoxy(b, 2 + d);
                cout << "   []  \n";
                gotoxy(b, 3 + d);
                cout << "   []  \n";
                gotoxy(b, 4 + d);
                cout << " [][][]";
            }
            if (text[i] == 'f')
            {
                b *= i;
                gotoxy(b, 0 + d);
                cout << "  [][][]\n";
                gotoxy(b, 1 + d);
                cout << "  []    \n";
                gotoxy(b, 2 + d);
                cout << "  [][]  \n";
                gotoxy(b, 3 + d);
                cout << "  []    \n";
                gotoxy(b, 4 + d);
                cout << "  []    ";
            }
            if (text[i] == 'l')
            {

                b *= i;
                gotoxy(b, 0 + d);
                cout << "  []  \n";
                gotoxy(b, 1 + d);
                cout << "  []  \n";
                gotoxy(b, 2 + d);
                cout << "  []  \n";
                gotoxy(b, 3 + d);
                cout << "  []  \n";
                gotoxy(b, 4 + d);
                cout << "  [][][][]";
            }
            if (text[i] == 'e')
            {

                b *= i;
                gotoxy(b, 0 + d);
                cout << " [][][][]\n";
                gotoxy(b, 1 + d);
                cout << " []      \n";
                gotoxy(b, 2 + d);
                cout << " [][][][]\n";
                gotoxy(b, 3 + d);
                cout << " []      \n";
                gotoxy(b, 4 + d);
                cout << " [][][][]";
            }
            if (text[i] == 'a')
            {
                b *= i;
                gotoxy(b, 0 + d);
                cout << "   []   \n";
                gotoxy(b, 1 + d);
                cout << "  [][]  \n";
                gotoxy(b, 2 + d);
                cout << " []  [] \n";
                gotoxy(b, 3 + d);
                cout << "[][][][]\n";
                gotoxy(b, 4 + d);
                cout << "[]    []";
            }
            if (text[i] == 'm')
            {
                b *= i;
                gotoxy(b, 0 + d);
                cout << " []      [] \n";
                gotoxy(b, 1 + d);
                cout << " [][]  [][] \n";
                gotoxy(b, 2 + d);
                cout << " []  ][  [] \n";
                gotoxy(b, 3 + d);
                cout << " []  []  [] \n";
                gotoxy(b, 4 + d);
                cout << " []      [] ";
            }
            if (text[i] == 'h')
            {
                b *= i;
                gotoxy(b, 0 + d);
                cout << "[]      [] \n";
                gotoxy(b, 1 + d);
                cout << "[]      [] \n";
                gotoxy(b, 2 + d);
                cout << "[][]][[][] \n";
                gotoxy(b, 3 + d);
                cout << "[]      [] \n";
                gotoxy(b, 4 + d);
                cout << "[]      [] ";
            }
            if (text[i] == 'd')

            {
                b *= i;
                gotoxy(b, 0 + d);
                cout << "[] []   \n";
                gotoxy(b, 1 + d);
                cout << "[]   [] \n";
                gotoxy(b, 2 + d);
                cout << "[]    []\n";
                gotoxy(b, 3 + d);
                cout << "[]   [] \n";
                gotoxy(b, 4 + d);
                cout << "[] []   ";
            }
        }
    }
    int fontGapReturn(){
        return b;
    }
    int fontLimitReturn(){
        return n;
    }

    void menu()
    {
        cout << endl;
        cout << "          ===========================================" << endl;
        cout << "          =      `Figlet Character Genaretor`       =" << endl;
        cout << "          ===========================================" << endl;
        cout << "          ===========================================" << endl;
        cout << "          =      FontGap: " << b << " CharLimit: " << n << "\t    =" << endl;
        cout << "          ===========================================" << endl;
        cout << "          x [1] - Show Figlet                       x" << endl;
        cout << "          x [2] - Set Font Gap                     x" << endl;
        cout << "          x [3] - Enter Character limit             x" << endl;
        cout << "          x [4] - Enter Characters                  x" << endl;
        cout << "          x [5] - Create file with saved charecters x" << endl;
        cout << "          x [6] - Delete the file                   x" << endl;
        cout << "          x [7] - Exit Program                      x" << endl;
        cout << "          ===========================================" << endl;
        update();
        cout << "\n          Enter Your Choice:	";
    }
};
int main()
{
    Figlet chr;
    while (chr.isActive)
    {

        chr.menu();
        char text[chr.fontLimitReturn()] = "mehedi";
        chr.option = getche() - '0';
        switch (chr.option)
        {
        case 1:
            if (!text)
            {
                chr.enterChar(text);
            }
            else
            {
                chr.figlet(text, chr.fontGapReturn());
                chr.yn();
            }
            break;
        case 2:
            chr.fontSize();
            break;
        case 3:
            chr.charLimit();
            break;
        case 4:
            chr.enterChar(text);
            break;

        case 5:
            // coming soon
            break;

        default:
            break;
        }
    }

    return 0;
}