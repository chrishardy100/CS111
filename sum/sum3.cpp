

/*
* 
* adds all numbers in an array between 100 & 1000
* 
* @author Christopher Hardy
* 
*/
#include <iostream>
#include <cmath>
using namespace std;
void sum3(int array[], int b) {
    int sum = 0;
    for (int i = 0; i < b; i++) {
        if (array[i] >= 100 && array[i] < 1000) sum = sum + array[i];
    }
    cout << sum;
}
int main() {
    int x[6] = { 3, 31, 314, 111, 4000, 100 };
    sum3(x, 6);
}

