#include <iostream>

using namespace std;

int main()
{
  char inp[15]= {'w','3','r','e','s','o','u','r','c','e','.','c','o','m','\0'};
  
  for (int i = 14; i >= 0; i--)
  {
       cout << " " << inp[i] << " ";
  }
  return 0;
}