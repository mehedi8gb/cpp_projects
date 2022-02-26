#include <iostream>
using namespace std;

int main(){

 int numbers[10], n, i, m=0, flag=0; 

  n = sizeof(numbers)/sizeof(int);
  m = n/2; 

for(int n = 0; n < 11; n++){
    numbers[n] = n;
}
 
 
  for(i = 2; i <= m; i++)  
  {  
      if(numbers[i] % i == 0)  
      {  
         for (int i = 0; i < n; i++)
         {
             if(numbers[i] % i == 0){
             cout<< numbers[i] <<endl;  
             }
         }
         
          flag = 1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl; 


}
