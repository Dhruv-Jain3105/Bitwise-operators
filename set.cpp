/*
Name:-Dhruv Jain
PRN:-24070123042
Batch:-A2
*/
#include <iostream>
using namespace std;

int main(){
    int i=22;
    int a=1;
    int pos_to_reset;
    int set;
    cout << "Type Position to reset: ";
    cin >> pos_to_reset;
    a=a<<pos_to_reset;
    set=i|a;
    cout << "Value of a after changing position: " << set;
}
/*
Output:
Type Position to reset: 3
Value of a after changing position: 30
*/
