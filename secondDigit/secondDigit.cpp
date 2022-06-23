/*
* 
* Returns the second digit from the leff form a number.
* 
* @author Christopher Hardy
* 
* 
*/
//Recusion
#include <iostream>
#include <cmath>
using namespace std;
int secondDigit(int x);

int main()
{
	//Input
	int num;
	cout << "Enter a number\n";
	cin >> num;
	
	//Output
	cout << secondDigit(num) << endl;
	return 0;
}

int secondDigit(int x) {

	int ans = x;

	//If x < 100 return x % 10
	if (x >= 100) secondDigit(ans / 10);

	else if (x < 100) {
		ans = ans % 10;
	}

	//Take off right most digit untill x < 100
	return x;
}

