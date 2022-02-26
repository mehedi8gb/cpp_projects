#include<iostream>
using namespace std;
int main()
{
    // changes detected 
    float purchased, sold;
    cout << "enter Purchased amount:" <<endl;
    cin >> purchased;
     cout << "enter Sold amount:" <<endl;
    cin >> sold;
float profit = sold - purchased,
    loss = purchased - sold;

    if(sold > purchased){
        cout << "He has benefited here." <<endl;
        cout << "profit: " << profit <<endl;
    }else{
         cout << "He has lost here." <<endl;
        cout << "Loss: " << loss <<endl;
    }
 //   (sold > purchased) ?  cout << "profit: " << profit <<endl : cout << "Loss: " << loss <<endl;


    main();
return 0;
}
