#include <iostream>
#include <math.h>
using namespace std;
int main()

{
int x1,x2,x3,y1,y2,y3;
int ab,bc,ac,abc;
cout << "x1";
cin >> x1;
cout << "x2";
cin >> x2;
cout << "x3";
cin >> x3;
cout << "y1";
cin >> y1;
cout << "y2";
cin >> y2;
cout << "y3";
cin >> y3;

ab = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
bc = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
ac = sqrt(pow((x1-x3),2)+pow((y1-y3),2));


  int  m = (y2 - y1) / (x2 - x1);  
  int  n = (y3 - y2) / (x3 - x2);  
  
    if( m == n)  
    {  
        cout << "All 3 points lie on the same line \n";  
    }  
    else  
    {  
        cout << "All 3 points do not lie on the same line \n";  
    } 
}