#include <iostream>
using namespace std;
int main()
{
    char str[100];
    int i;
    int alphabets = 0,num = 0,special = 0,space = 0;
    cout<<"enter string: ";
    cin >>str; 
    for(i=0; str[i] != '\0'; i++){

    if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) { 
         alphabets++;
    }else if(str[i]>='0' && str[i]<='9') {
         num++;
    }
    else{
        special++;
    }
    }
    cout<<"\n alphabet letters: "<<alphabets;
    cout<<"\n Digits: "<<num;
    cout<<"\n special characters: "<<special;
    return 0;
}