/*
* This program prints an array of size 20 
* and fills it with random numbers
* 
* @author Christopher Hardy
* 
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//Declare Array x
	int x[20];

	//Loop through array
	for (int z = 0; z < 20; z++) {
		bool num = true;
		
		//Loop random numbers
		while (num) {
			x[z] = rand() % 20 + 1;
			num = false;
			
			//Check if value was used before
			for (int y = 0; y < z; y++) {
				if (x[z] == x[y]) num = true;
			}
		}	
	}

	//Print Array
	for (int z = 0; z < 20; z++)
		cout << x[z] << " ";
	cout << endl;
	return 0;
}



