#include<iostream>
using namespace std;


int main()
{
	int angle1, angle2, angle3;


	cout << "enter 1st angle" <<endl;
	cin >> angle1;
	cout << "enter 2nd angle" <<endl;
	cin >> angle2;
	cout << "enter 3rd angle" <<endl;
	cin >> angle3;
	int check = angle1 + angle2 + angle3;


	if(check == 180)
    {
        cout << "triangle is valid";
    }else {
    cout << "triangle is not valid";
    }


 // (check == 180) ? cout << "triangle is valid" :  cout << "triangle is valid";
	return 0;
}
