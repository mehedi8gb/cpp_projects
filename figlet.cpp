#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <string>
#include <cstring>

using namespace std;
class Figlet
{
private:
    int n = 13, b = 11, d = 0, tColor = 7;
    string colorName; // n = char limit  b = width , d = height
public:
    char text[100] = "mdmehedihasan";
    int option;
    bool isActive = true;

    // functions

    void gotoxy(short x, short y)
    {
        COORD pos = {x, y};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    }

    void textColor(int tColor)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, tColor);
    }
    void changeColor()
    {
        system("cls");
        cout << "whice color do you want to set?\n";
        cout << "1. Blue\n";
        cout << "2. Green\n";
        cout << "3. Cyan\n";
        cout << "4. Red\n";
        cout << "5. Purpel\n";
        cout << "6. Yellow\n";
        cout << "7. White \n";
        cout << "8. Gray\n";
        tColor = getche() - '0';
        if (tColor == 1)
            colorName = "blue";
        else if (tColor == 2)
            colorName = "Green";
        else if (tColor == 3)
            colorName = "Cyan";
        else if (tColor == 4)
            colorName = "Red";
        else if (tColor == 5)
            colorName = "Purpel";
        else if (tColor == 6)
            colorName = "Yellow";
        else if (tColor == 7)
            colorName = "White";
        else if (tColor == 8)
            colorName = "Gray";
    }

    void fontGap()
    {
        system("cls");
        cout << "\nEnter font size\t\"Note: 11 is preferd and default font size\" \n:";
        cin >> b;
        cout << "Want to add padding on top (enter digit/n)? \"Note: 0 is default padding\"\n";
        char temp;
        cin >> temp;
        if (temp != 'n')
            d = temp - '0';
        else
            menu();
    }
    void charLimit()
    {
        system("cls");
        cout << "\nhow many alphabets do you want to figlet?\n:";
        cin >> n;
    }
    void enterChar() // enter character
    {
        system("cls");
        cout << "set data: " << text;
        cout << "\nEnter Alphabets within (" << n << ") charecters \t [note: now only work with 9 char's like m,d,h,d,a,f,i,l,e]\n:";
        string str;
        getline(cin, str);
        memset(text, 0, n*sizeof(*text));
        strcpy(text, str.c_str());
    }
    void update()
    {

        if (option == 2)
            cout << "\n\nFont Gap : " << b << " and Padding : " << d << " has been updated\n\n", option = 0;
        if (option == 3)
            cout << "\n\n Alphabets Limit are set to : " << n << "\n\n", option = 0;
        if (option == 4)
            cout << "\n\n Character's are set as : " << text << "\n\n", option = 0;
        if (option == 7)
            cout << "\n\n Color is set as " << colorName << "\n\n", option = 0;
    }

    void saveToFile()
    {

        //    ofstream saveFile ("file.txt", ios::out);
        //    saveFile << figlet(txt, fontGapReturn());
        //    cout << "" << endl<< endl<< endl<< endl<< endl<< endl;
        //    saveFile.close();
        //   ifstream loadFile;
        //   loadFile.open ("file.txt", ifstream::in);

        //   while (loadFile.good()){
        //        cout << (char) loadFile.get();
        //   }
        //   cout << "" << endl<< endl<< endl<< endl<< endl<< endl;
        //   loadFile.close();
    }

    void yn()
    {
        cout << "\n\n\nwant to see this magic again? y/n";
        char c = getche();

        if (c == 'y' || c == 'Y')
            isActive = true, system("cls"), b = 11;
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
                cout << "[] []    ";
            }
            if (text[i] == 's')
            {
                b *= i;
                gotoxy(b, 0 + d);
                cout << "   [][][]\n";
                gotoxy(b, 1 + d);
                cout << " []     \n";
                gotoxy(b, 2 + d);
                cout << "   []   \n";
                gotoxy(b, 3 + d);
                cout << "     []\n";
                gotoxy(b, 4 + d);
                cout << "[][][]  ";
            }
            if (text[i] == 'n')
            {
                b *= i;
                gotoxy(b, 0 + d);
                cout << "[]       []\n";
                gotoxy(b, 1 + d);
                cout << "[] []    []\n";
                gotoxy(b, 2 + d);
                cout << "[]   []  []\n";
                gotoxy(b, 3 + d);
                cout << "[]     [][]\n";
                gotoxy(b, 4 + d);
                cout << "[]       []";
            }
            if (text[i] == ' ')
            {
                b *= i;
                b = b - 2;
                gotoxy(b, 0 + d);
                cout << "  \n";
                gotoxy(b, 1 + d);
                cout << "  \n";
                gotoxy(b, 2 + d);
                cout << "  \n";
                gotoxy(b, 3 + d);
                cout << "  \n";
                gotoxy(b, 4 + d);
                cout << "  ";
            }
        }
    }
    int fontGapReturn()
    {
        return b;
    }
    int fontLimitReturn()
    {
        return n;
    }

    void menu()
    {
        system("cls");

        cout << endl;
        textColor(tColor);
        cout << "\t\t\t\t     ===========================================" << endl;
        cout << "\t\t\t\t     =      `Figlet Character Genaretor`       =" << endl;
        cout << "\t\t\t\t     ===========================================" << endl;
        cout << "\t\t\t\t     ===========================================" << endl;
        cout << "\t\t\t\t     =      FontGap: " << b << " CharLimit: " << n << "\t    =" << endl;
        cout << "\t\t\t\t     ===========================================" << endl;
        cout << "\t\t\t\t     x [1] - Show Figlet                       x" << endl;
        cout << "\t\t\t\t     x [2] - Set Font Gap                      x" << endl;
        cout << "\t\t\t\t     x [3] - Enter Character limit             x" << endl;
        cout << "\t\t\t\t     x [4] - Enter Characters                  x" << endl;
        cout << "\t\t\t\t     x [5] - Create file with saved charecters x" << endl;
        cout << "\t\t\t\t     x [6] - Delete the file                   x" << endl;
        cout << "\t\t\t\t     x [7] - Change Font Color                 x" << endl;
        cout << "\t\t\t\t     x [8] - Exit Program                      x" << endl;
        cout << "\t\t\t\t     ===========================================" << endl;
        update();
        cout << "\n          Enter Your Choice:	";
    }
    void Exit()
    {
        cout << "\n\t\t\t\t     ===========================================" << endl;
        cout << "\t\t\t\t     |         Thanks For Using This App       |" << endl;
        cout << "\t\t\t\t     ===========================================" << endl;
        sleep(2);
        exit(0);
    }
    void loading()
    {
        system("color 0B");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\tLoading ";
        for (size_t i = 0; i < 35; i++)
        {
            cout << char(219);
            if (i < 8)
                Sleep(180);
            if (i < 15 && i > 7)
                Sleep(130);
            if (i < 20 && i > 25)
                Sleep(90);
            if (i > 25)
                Sleep(10);
        }
    }
};
int main()
{
    Figlet chr;
    chr.loading();
    while (chr.isActive)
    {

        chr.menu();

        chr.option = getche() - '0';
        switch (chr.option)
        {
        case 1:
            if (!chr.text)
            {
                chr.enterChar();
            }
            else
            {
                chr.figlet(chr.text, chr.fontGapReturn());
                chr.yn();
            }
            break;
        case 2:
            chr.fontGap();
            break;
        case 3:
            chr.charLimit();
            break;
        case 4:
            chr.enterChar();
            break;

        case 5:
            // coming soon
            chr.saveToFile();
            break;
        case 7:
            chr.changeColor();
            break;
        case 8:
            chr.Exit();
            break;

        default:
            break;
        }
    }

    return 0;
}