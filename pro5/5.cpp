#include <iostream>
#include <string>
using namespace std;
int n;
string output;
string a = "AA", b = "AB", c = "BB", d = "BC", e = "CD", f = "DD", g = "Fail";
void grade(int n)
{
    if (n >= 91 && n <= 100)
        output = a;
    else if (n >= 81 && n <= 90)
        output = b;
    else if (n >= 71 && n <= 80)
        output = c;
    else if (n >= 61 && n <= 70)
        output = d;
    else if (n >= 51 && n <= 60)
        output = e;
    else if (n >= 41 && n <= 50)
        output = f;
    else if (n <= 40)
        output = g;
    else
        output = "0";
}
int main()
{
    cout << "Enter your marks: ";
    cin >> n;

    grade(n);

    if (output == a)
        cout << "Your Grade is: " << a;
    else if(output==b)
        cout<<"Your Grade is: "<<b;
    else if(output==c)
        cout<<"Your Grade is: "<<c;
    else if(output==d)
        cout<<"Your Grade is: "<<d;
    else if(output==e)
        cout<<"Your Grade is: "<<e;
    else if(output==f)
        cout<<"Your Grade is: "<<f;
    else if(output==g)
        cout<<"Your Grade is: "<<g;
    else if(stoi(output) == 0)
        cout << "Invalid";
    return 0;
}