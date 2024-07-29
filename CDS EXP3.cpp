// arithematic operator
// assignment operator
// comparison operator
// bitwise operator
#include <iostream>
using namespace std;

int main(){
    int a, b, sum, diff, prod;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

   
    sum = a + b;
    cout << "The sum of the two numbers entered is: " << sum << endl;

    diff = a - b;
    cout << "The difference of the two numbers entered is: " << diff << endl;

    prod = a * b;
    cout << "The product of the two numbers entered is: " << prod << endl;

   
    if (a > b) {
        cout << "First number entered is greater" << endl;
    } else if (a < b) {
        cout << "Second number entered is greater" << endl;
    } else {
        cout << "Both numbers are equal" << endl;
    }

   
    cout << "a & b is: " << (a & b) << endl;
    cout << "a | b is: " << (a | b) << endl;
    cout << "~a is: " << (~a) << endl;
    cout << "a ^ b is: " << (a ^ b) << endl;


}

//Output
Enter the value of a: 3
Enter the value of b: 4
The sum of the two numbers entered is: 7
The difference of the two numbers entered is: -1
The product of the two numbers entered is: 12
Second number entered is greater
a & b is: 0
a | b is: 7
~a is: -4
a ^ b is: 7
