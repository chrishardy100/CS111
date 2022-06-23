/*This program takes 2 numbears as inputs
* and outputs the bigger of the two numbers
* 
* 
* @author Christopher Hardy

*/
#include <iostream>
#include <cmath>
using namespace std;
int biggerDigits(int a, int b) {
    int choose = 0, big = 0, temp = 0;

    for (int i = 10; i < 100000; i *= 10) {
        if ((a % i) > (b % i)) {
            choose = (a % i) - big;
        }
        if ((b % i) > (a % i)) {
            choose = (b % i) - big;

        }
        big = big + choose;
    }
    //if(a > b)big = big + ( )
    return big;
}
int main() {

    //INPUT
    cout << "Enter 2 numbers" << endl;
    int x, y;
    cin >> x;
    cin >> y;
    
    //OUTPUT
    cout << biggerDigits(x, y); //print 2445
    //cout << 0 + ((x  % 100) -10);
    return 0;
}


