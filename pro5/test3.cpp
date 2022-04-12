#include<iostream>
using namespace std;

int s, c;
class Cost
{
public:
  void  cost()
    {
        cout<< "Cost: ";
        cin>>c;
    }
};

class Sell
{
public:
  void  cell()
    {
        cout<< "Sell: ";
        cin>> s;
    }
};

class Profit
{
private:
    int p;
public:
  void profit()
    { int r = s-c;
       cout << r;
    }
};

class Loss: public Cost, public Sell , public Profit
{
private:
    int l;
public:
    void loss()
    {int r = c-s;
       cout<< r;
    }
};


class Decision: public Loss
    {
    public:
        void deci()
        {
            if(s > c)
            {
                cout<< "Profit: " ;
            }
            else
            {
                cout<< "Loss: ";
            }
        }
    };


int main()
{
    Decision s;

    s.cost();
    s.cell();
    s.deci();
    s.profit();
    s.loss();
    
}