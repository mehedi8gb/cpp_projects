#include <iostream>

using namespace std;

int main()
{
 int i, count=0;
   char str[50];

   cout << "Enter String Data: ";
   cin >> str;

   for(i=0; str[i] != '\0';i++)
   {
        count++;
   }
   cout<<"length of string: " << count <<endl;

}