#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int n, inv = 0;
char bas[100];
int rep = 1;
while (rep) {
    cout << "Enter 5 Digits: ";
    cin >> bas;
    rep = 0; 
    if (strlen(bas) != 5) {
        cout << "You must type 5 digits\n";
        rep = 1;
        continue;
    }
    for (int i = 0; i < 5; i++) {
        if (!isdigit(bas[i])) {
            cout << " is not a digit\n";
            rep = 1;
            continue;
        }
    }
}
cout << "\n Inverted number = ";
for (int i = 4; i >= 0; i--) {
    cout <<  bas[i];
}
}