/*
Name:-Dhruv Jain
PRN:-24070123042
Batch:-A2
*/
#include <iostream>
using namespace std;

int main(){
    int a =10;
    int b=20;
    int bit_add = a&b;
    int bit_sub = a|b;
    int bit_com_a = ~a;
    int bit_com_b = ~b;
    int bit_xor = a^b;
    int left_shift_a = a<<2;
    int right_shift_a = a>>2;
    cout << "BIT_ADD:" << bit_add << endl << "BIT_SUB:" << bit_sub << endl;
    cout << "BIT_COM_A:" << bit_com_a << endl << "BIT_COM_B:" << bit_com_b << endl;
    cout << "BIT_XOR:" << bit_xor << endl << "LEFT SHIFT a BY 2:" << left_shift_a << endl;
    cout << "RIGHT SHIFT OF a BY 2:" << right_shift_a << endl; 
}
/*
Output:
BIT_ADD:0
BIT_SUB:30
BIT_COM_A:-11
BIT_COM_B:-21
BIT_XOR:30
LEFT SHIFT a BY 2:40
RIGHT SHIFT OF a BY 2:2
*/
