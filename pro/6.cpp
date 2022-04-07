#include<iostream>
using namespace std;


int main()
{
	int num;
	cout<<"Enter number:";
	cin >> num;

	if( num > 0)
		cout << "absolute number is: " << num;
	else
		cout << "absolute number is: " << -num;

// ( num > 0) ? cout << "absolute number is: " << num : cout << "absolute number is: " << -(num);
	return 0;
}
