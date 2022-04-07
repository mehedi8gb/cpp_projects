#include <iostream>
using namespace std;

int main()
{
string txt = "ok";
    int num, devisor;
    bool isPrime = true;
    cout << "enter number to check prime or not:" << endl;
    cin >> num;
    if (num == 1)
    {
        cout << "entered number is a prime number" << endl;
    }
    else if (num < 1)

        cout << "entered number can not be smaller\
         then 1" << endl;
   
    else
    {
        for (devisor = 2; devisor <= (num / 2); devisor++)
        {
            if ((num % devisor) == 0)
            {
                isPrime = false;
                break;
            }
           
        }
         if (isPrime)
                cout << "entered number is prime" << endl;
            else
                cout << "entered number is composite number" << endl;
    }
}
// int numbers[10], n, i, m=0, flag=0; 

//   n = sizeof(numbers)/sizeof(int);
//   m = n/2; 

// for(int n = 0; n < 11; n++){
//     numbers[n] = n;
// }
 
 
//   for(i = 2; i <= m; i++)  
//   {  
//       if(numbers[i] % i == 0)  
//       {  
//          for (int i = 0; i < n; i++)
//          {
//              if(numbers[i] % i == 0){
//              cout<< numbers[i] <<endl;  
//              }
//          }
         
//           flag = 1;  
//           break;  
//       }  
//   }  
//   if (flag==0)  
//       cout << "Number is Prime."<<endl; 

