#include<iostream>
using namespace std;
class rAngular
{
    float length;
    float bredth;
public:
    rAngular()
    {

    cout<< "Enter length" <<endl;
    cin>>length;
    cout<< "Enter bredth " <<endl;
    cin>>bredth;
   }

    ~rAngular()
  {
      float area=length*bredth;

      cout << "Area ="<<area<<endl;
 }


};
int main()
{
    rAngular o;
}