#include <iostream> 
#include <math.h>
using namespace std; 
int main(){

int x1, x2, x3, y1, y2, y3, ab, bc, ac, abc;
cout << "enter the value of x1, x2, x3, 71, 72,73";
cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
ab = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
bc = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
ac = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
abc = ab + bc;
if (abc - ac){
    cout << "these three point fall on one straight line";
}
else{
    cout << "don't fall on one straight line";
}
}