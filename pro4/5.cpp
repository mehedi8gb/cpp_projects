#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[]= {"This is w3resource.com"};
    int i, count = 1;
    for (i = 0;i < strlen(a); ++i)
    {
        if (a[i] == ' ')
            count++;
    }
    cout << "There are " << count << " words in the given string";
}