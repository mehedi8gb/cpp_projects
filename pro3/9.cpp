#include<iostream>
using namespace std;
int main()
{
    int nums[10]= {1,2,3,4,5,6,7,8,9,10}, i;


    cout << "Original: \n";
    for(i=0; i<10; i++){
        cout << nums[i] <<" ";
    }
    cout<<"\n Reverse:\n";
    for(i=9 ; i >= 0; i--){
cout << nums[i] <<" ";
    }
        
    cout<<endl;

}