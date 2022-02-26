#include <iostream>

using namespace std;

int main(){

 int numbers[10], n;
   n = sizeof(numbers)/sizeof(int);

for(int n = 0; n < 11; n++){
    numbers[n] = n;
}
       cout << numbers[n/2];
}
