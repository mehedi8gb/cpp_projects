#include<iostream>
#include<math.h>

using namespace std;
int main()
{
int x1, x2, x3, y1, y2, y3;
int ab, bc, ca, abc;
cout<<"enter the number of (x1, y1): ";
cin >> x1 >> y1;
cout<<"enter the number of (x2, y2): ";
cin>>x2>>y2;
cout<<"enter the number of (x3, y3): ";
cin>>x3>>y3;
ab=sqrt(pow((x1-x2),2)+(pow(y1-y2),2));
bc=sqrt(pow((x2-x3),2)+(pow(y2-y3),2));
ca=sqrt(pow((x1-x3),2)+(pow(y1-y3),2));
if(ab+bc==ca)
{
cout<<"These three points fall on one straight line.";
}
else
{
cout<<"These three points do not fall on one straight line.";
}



}