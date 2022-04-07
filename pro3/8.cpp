#include<iostream>
using namespace std;

int main()
{
    int sz, j, p;

    cout << "Enter size of the array: ";
    cin>>sz;

    int arr[sz];

    cout << "Enter "<< sz <<" number of array please elements use a space between: ";
    for (int i = 0; i < sz; i++) {
        cin >> arr[i];
    }

    cout << "All prime list:";

    for (int i = 0; i < sz; i++) {
        j = 2;
        p = 1;
        while (j < arr[i]) {
            if (arr[i] % j == 0) {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1) {
            cout << arr[i] << " ";
        }
    }

}
