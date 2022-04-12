#include <iostream>
#include <windows.h>
using namespace std;
class Business{
        float purchased, sold;
        float profit ,loss;
        void eqtn(){

              loss = purchased - sold;
              profit = sold - purchased;
              //   (sold > purchased) ?  cout << "profit: " << profit <<endl : cout << "Loss: " << loss <<endl;
              if(loss < profit)
        cout << "He has benefited here." <<endl,
        cout << "profit: " << profit <<endl;
              else if (profit < loss)
        cout << "He has lost here." <<endl,
        cout << "Loss: " << loss <<endl;
        }
    public:
Business(){
     
        system("color 0B");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\tLoading ";
        for (size_t i = 0; i < 35; i++)
        {
            cout << char(219);
            if (i < 8)
                Sleep(150);
            if (i < 15 && i > 7)
                Sleep(120);
            if (i < 20 && i > 25)
                Sleep(90);
            if (i > 25)
                Sleep(10);
        }
    system("cls");
}

void setD(){
    cout << "enter Purchased amount:" <<endl;
    cin >> purchased;
     cout << "enter Sold amount:" <<endl;
    cin >> sold;
}
~Business(){

    eqtn();
}

};
class bash : public Business{}; // inheritance
int main()
{
    bash b;
    b.setD();
}
