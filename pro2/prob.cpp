#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int classno, atdclass;
    cout << "enter total class no=\n";
    cin >> classno;
    cout << "enter attended class no=\n";
    cin >> atdclass;
    int percent = (atdclass / classno) * 100;
    if (percent > 75)
    {
        char ans;
        cout << "have you any medical issue?if have press Y : or not then press N\n";
        cin >> ans ;

        if (ans == 'Y' || ans == 'y')
        {
            cout << "exam";
        }
    }

    else
    {
        cout << "no exam";
    }
}