#include <iostream>
#include <windows.h>
#include <conio.h>
#include <unistd.h>
#include <string>

using namespace std;
class Figlet
{
    void gotoxy(short x, short y)
    {
        COORD pos = {x, y};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    }

public:
    int n;
    bool isActive = true;
    void yn()
    {
        cout << "\n\n\nwant to see this magic again? y/n";
        char c = getche();

            if (c == 'y' || c == 'Y')
                isActive = true;
            else
                isActive = false,cout <<"\n\tthanks for using! :D", sleep(2),exit(0);
    }
    void figlet(char *text, int n)
    {
        system("cls");

        for (int i = 0; i < n; i++)
        {
            int b = 8;
            if (text[i] == 'i')
            {
                b *= i;
                gotoxy(b, 0);
                cout << "  [][][]\n";
                gotoxy(b, 1);
                cout << "    []  \n";
                gotoxy(b, 2);
                cout << "    []  \n";
                gotoxy(b, 3);
                cout << "    []  \n";
                gotoxy(b, 4);
                cout << "  [][][]";
            }
            if (text[i] == 'f')
            {
                b *= i;
                gotoxy(b, 0);
                cout << "  [][][]\n";
                gotoxy(b, 1);
                cout << "  []    \n";
                gotoxy(b, 2);
                cout << "  [][]  \n";
                gotoxy(b, 3);
                cout << "  []    \n";
                gotoxy(b, 4);
                cout << "  []    ";
            }
            if (text[i] == 'l')
            {

                b *= i;
                gotoxy(b, 0);
                cout << "  []  \n";
                gotoxy(b, 1);
                cout << "  []  \n";
                gotoxy(b, 2);
                cout << "  []  \n";
                gotoxy(b, 3);
                cout << "  []  \n";
                gotoxy(b, 4);
                cout << "  [][][][]";
            }
            if (text[i] == 'e')
            {

                b *= i;
                gotoxy(b, 0);
                cout << "  [][][][]\n";
                gotoxy(b, 1);
                cout << "  []      \n";
                gotoxy(b, 2);
                cout << "  [][][][]\n";
                gotoxy(b, 3);
                cout << "  []      \n";
                gotoxy(b, 4);
                cout << "  [][][][]";
            }
            if (text[i] == 'a')
            {

                b *= i;
                gotoxy(b, 0);
                cout << "   []   \n";
                gotoxy(b, 1);
                cout << "  [][]  \n";
                gotoxy(b, 2);
                cout << " []  [] \n";
                gotoxy(b, 3);
                cout << "[][][][]\n";
                gotoxy(b, 4);
                cout << "[]    []";
            }
        }
    }
};
int main()
{
    Figlet chr;
    while (chr.isActive)
    {
        cout << "\nhow many alphabets do you want to figlet? \n:";
        chr.n = getche() - '0';
        char texts[chr.n];
        cout << "\nEnter Alphabets within (" << chr.n << ") charecters \t [note: now only work with 4 char's like a,f,i,l,e]\n:";
        cin >> texts;
        chr.figlet(texts, chr.n);
        chr.yn();
    }

    return 0;
}