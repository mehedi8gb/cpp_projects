#include <iostream>

using namespace std;

int main()
{
    int year, eq_4,eq_100, eq_400;

    // entry
    cout << "enter year:" << endl;
    cin >> year;

    //equations
    eq_4 = year % 4;
    eq_100 = year % 100;
    eq_400 = year % 400;
    if((eq_4 == 0 && eq_100 != 0) || eq_400 == 0){
        cout << year << " it's leap year "  <<endl;
    }else{
    cout << year << " it's not a leap year " <<endl;
    }


//    ((eq_4 == 0 && eq_100 != 0) || eq_400 == 0) ?    cout << year << " it's leap year" :   cout << year << " it's not a leap year";
main();
    return 0;
}
