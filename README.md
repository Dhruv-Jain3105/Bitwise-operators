# Bitwise-operators
## Aim: To study and implememt C++ Bitwise Operators.
## Software used: Visual Studio Code
## Theory:
Bitwise operator in C++ is used to make changes or perform operations on bits. They work on bit level i.e. 0's and 1's. These operations are faster than arithmetic operations and are mostly used in low level programming.
## Types of bitwise operators:
* AND(&)
* OR(|)
* NOT(~)
* XOR(^)
* Right Shift Operator (>>)
* Left Shift Operator(<<)
### 1) AND(&) :
AND(&) operator compares two integer bits as (0 & 0 --> 0) ; (0 & 1 -->0) ; (1 & 0 --> 0) and (1 & 1 --> 1)
For Example:-
10 --> 1010
20 --> 10100
(10 & 20) --> 1010 & 10100 --> 00000 --> 0

### 2) OR(|) :
OR(|) operator compares two integer bits as (0 & 0 --> 0) ; (0 & 1 --> 1) ; (1 & 0 --> 1) and (1 & 1 --> 1)
For Example:-
10 --> 1010
20 --> 10100
(10 & 20) --> 1010 & 10100 --> 11110 --> 30

### 3) XOR(^) :
XOR(^) operator compares two integer bits as (0 & 0 --> 0) ; (0 & 1 --> 1) ; (1 & 0 --> 1) and (1 & 1 --> 0)
For Example:-
10 --> 01010
20 --> 10100
(10 & 20) --> 1010 & 10100 --> 11110 --> 30

### 4) NOT(~) :
NOT(~) operator compares one integer bits as (~0 --> 1) ; (~1 --> 0)
For Example:-
10 --> 1010
~10 --> 0101 --> 5

### 5) Left Shift Operator(<<) :
Left Shift operator shifts all bits left by n bits where n is "(no.)<
For Example:-
10 --> 1010
10<<2 --> this will shift left by 2 bits --> 101000 --> 40

### 6) Right Shift Operator (>>) :
Right Shift operator shifts all bits right by n bits where n is "(no.)>>n"
For Example:-
20 --> 10100
20>>2 --> Shift right by 2 bits --> 101 --> 5
## Algorithm :
### 1) Basic Operation:
1.  Start the program.
2. Declare and initialize two integer variables:
a = 10
b = 20
3. Perform Bitwise Operations:
* Bitwise AND (&): bit_add = a & b – Performs AND operation on each bit.
* Bitwise OR (|): bit_sub = a | b – Performs OR operation on each bit.
* Bitwise Complement (~):
* bit_com_a = ~a – Inverts all bits of a.
* bit_com_b = ~b – Inverts all bits of b.
* Bitwise XOR (^): bit_xor = a ^ b – Performs XOR operation on each bit.
* Left Shift (<<): left_shift_a = a << 2 – Shifts bits of a two positions to the left.
* Right Shift (>>): right_shift_a = a >> 2 – Shifts bits of a two positions to the right.
4. Display all results using cout.
5. Stop the program.

### 2) Resetting a Bit using Bitwise XOR in C++
*Steps
1. Start the program.
2. Declare and initialize the required variables:
* a = 22 – The initial number whose bit will be changed.
* reset = 1 – A helper value used for bit manipulation.
* pos_for_reset – To store the bit position entered by the user.
3. Display message to the user: "Type pos for reset:"
4. Take input from the user and store it in pos_for_reset.
5. Perform the Bitwise Operation:
* Use a = a ^ (reset << pos_for_reset)
* This shifts the reset (1) to the given bit position and then toggles (changes) that bit in a using XOR.
* If the bit was 1, it becomes 0 (reset); if it was 0, it becomes 1.
6. Display the result:
7. Print: "Value of a after changing position: " followed by the updated value of a.
8. Stop the program.

### 3) Setting a Bit using Bitwise OR in C++
Steps
1. Start the program.
2. Declare and initialize the required variables:
* i = 22 – The initial number whose bit will be changed.
* a = 1 – A helper value used for bit manipulation.
* pos_to_reset – To store the bit position entered by the user.
* set – To store the updated value after changing the bit.
3. Display message to the user: "Type Position to reset:"
4. Take input from the user and store it in pos_to_reset.
5. Perform the Bitwise Operation:
* Shift the helper bit to the desired position: a = a << pos_to_reset
* Set (turn ON) that bit in i using Bitwise OR: set = i | a
* This operation ensures the specific bit at the given position is changed to 1, while other bits remain unchanged.
6. Display the result:
* Print: "Value of a after changing position: " followed by the updated value stored in set.
7. Stop the program.
## Conclusion
This experiment successfully demonstrates how to set (turn ON) a specific bit in an integer using Bitwise OR ( | ) and Left Shift ( << ) operators in C++. The left shift moves the bit (1) to the desired position, and the bitwise OR ensures that the corresponding bit in the original number is changed to 1, while all other bits remain unchanged. This technique is widely used in low-level programming, hardware control, and memory manipulation.
