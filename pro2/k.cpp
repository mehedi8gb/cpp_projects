#include <iostream>

using namespace std;
int main()
{
   while (1)
   {
     int year = 0, alternate, invest;
    std::cout << "Enter the year: " << std::endl;
    cin >> year;

    while(alternate > invest)
    {
        year++; 
        alternate = year * 90;
        invest = (1000 * year) - 4000;
    }

    cout << "the life of machine: " << year;
   }
   

}