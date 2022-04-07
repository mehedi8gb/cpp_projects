#include <iostream>

using namespace std;

int main()
{
    int  num1, num2, num3;
    cout << "enter Rams age" <<endl;
    cin >> num1;
    cout << "enter shyam age" <<endl;
    cin >> num2;
    cout << "enter ajay age" <<endl;
    cin >> num3;

    if(num1 < num2 && num1 < num3){
        cout << " Ram is youngest";
    }else if(num2 < num1 && num2 < num3){
        cout << " shyam is youngest";
    }else if(num3 < num1 && num3 < num2){
        cout << " ajay is youngest";
    }else{
    cout << "invalid";
    }
        //    ((num1 < num2) && (num1 < num3)) ?  cout << " Ram is youngest" 
        // :  cout << ((num2 < num1) && (num2 < num3))  ? cout << " shyam is youngest"
        // :  cout <<  ((num3 < num1) && (num3 < num2) ) ? cout << " ajay is youngest" : cout << "else";
      
        return 0;
}
