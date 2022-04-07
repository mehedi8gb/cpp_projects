#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

using namespace std;
void gotoxy(short x, short y)
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
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
int main()
{
    int n;
    cout << "how many alphabets do you want to figlet? \n:";
    n = getche() - '0';
    char texts[n];
    cout << "\nEnter Alphabets within (" << n << ") charecters \t [note: now only work with 4 char's like a,f,i,l,e]\n:";
    cin >> texts;
    figlet(texts, n);

    return 0;
}