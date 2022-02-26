#include <iostream>
using namespace std;
int main(){
   system("cls");
   int sz, lg, slg;
    cout << "Enter size of the array: ";
    cin>>sz;
    int arr[sz];
    cout << "Enter "<< sz <<" number of array please elements use a space between: ";
    for (int i = 0; i < sz; i++) {
        cin >> arr[i];
    }

   // if(arr[0]<arr[1]){
   //    lg = arr[1];
   //    slg = arr[0];
   // }
   // else{
   //    lg = arr[0];
   //    slg = arr[1];
   // }
   for (int i = 0; i< sz ; i ++) {

      if (arr[i] > lg) {
         slg = lg;
         lg = arr[i];
      }

      else if (arr[i] > slg && arr[i] != lg) {
         slg = arr[i];
      }
   }
   cout<<"Second Largest Element in array is: "<<slg;

   // largest number
   //cout<<"\nLargest number in the array is: "<<lg;
}
