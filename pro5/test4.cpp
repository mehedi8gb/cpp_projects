#include <iostream>
using namespace std;
class A
{
 	public:
 	int x;
 void	getx()
    {
 	    cout << "enter value of x: "; 
	    cin >> x;
    }
};
class B : public A
{
 	public:
 	int y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
};

class C : public B   //C is derived from class A and class B
{
 	public:
 	int sum()
 	{
 	    cout << "Sum = " << x + y;
	    return x + y;
 	}
};

int main()
{
 	 C o; //object of derived class C
 	 o.getx();
 	 o.gety();
 	 o.sum();
 	 return 0;
}   	//end of program