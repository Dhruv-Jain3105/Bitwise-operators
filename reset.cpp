/*
Name:-Dhruv Jain
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int main(){
    int a=22;
    int reset=1;
    int pos_for_reset;
    cout << "Type pos for reset: ";
    cin >> pos_for_reset;
    a=a^(reset<<pos_for_reset);
    cout << "Value of a after changing position: " << a;
}
/*
Output:
Type pos for reset: 2
Value of a after changing position: 18
*/
