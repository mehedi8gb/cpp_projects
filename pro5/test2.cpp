#include <iostream>
using namespace std;

class a
{

public:
    a()
    {
        cout << "it is the starting";
    }
    ~a()
    {
        cout << "it is the end" << endl;
    }
};
class b : public a
{
public:
    b()
    {
        cout << "b" << endl;
    }
    ~b()
    {
        cout << "b na c" << endl;
    }
};
class c : public b
{
    public:
    c()
    {
        cout << "10 taka" << endl;
    }
    ~c()
    {
        cout << "10  u taka" << endl;
    }
      void display(){
            cout << "aj amar 10 taka o nai" << endl;
}
  
};

int main()
{
    a o;
    b b;
    c j;
}
