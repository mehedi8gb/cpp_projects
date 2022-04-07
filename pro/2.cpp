#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number:" <<endl;
    cin >> num;
     cout << num % 2 <<endl;
  
  if((num % 2) == 0){
        cout << "number is even\" \n";
    }else{
     cout << "number is odd \n";
    }


  //  (check == 0) ? cout << "number is even" : cout << "number is odd";
main();
return 0;
}
