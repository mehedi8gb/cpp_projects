#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  for (int i = 0; i < 300; i++)
  {
    for (int j = 2; j * j <= i; j++)
    {
      if (i % j == 0)
        break;
      else if (j + 1 > sqrt(i))
      {
        cout << i << endl;
      }
    }
  }

  return 0;
}