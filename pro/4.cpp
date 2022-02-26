#include<iostream>
using namespace std;
main()
{

    int last_digit, num, next_digit, rev_num;

    cout << "Enter five digit number:";
    cin >> num;

    last_digit = num - ((num / 10) * 10);
    rev_num = last_digit;
    next_digit = (num / 10) - ((num / 100) * 10);
    rev_num = (rev_num * 10) + next_digit;
    next_digit = (num / 100) - ((num / 1000) * 10);
    rev_num = (rev_num * 10) + next_digit;
    next_digit = (num / 1000) - ((num / 10000) * 10);
    rev_num = (rev_num * 10) + next_digit;
    next_digit = (num / 10000) - ((num / 100000) * 10);
    rev_num = (rev_num * 10) + next_digit;
    cout << "The reversed number is: " << rev_num <<endl;
    
    if (rev_num == num)
    {
        cout << "entered number and reversed number are equal" <<endl;
    }
    else
    {
        cout << "entered number and reversed number are not equal" <<endl;
    }
}