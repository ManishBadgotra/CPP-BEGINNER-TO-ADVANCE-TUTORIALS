/*
* Author: Manish Sharma
* Created: 12 Aug, 2022
*/
/*
Lets learn about operators in c++.
There are 6 types of operators in c++
1. Arithmetic Operators
2. Assignment Operators
3. Relational Operators
4. Logical Operators
5. Bitwise Operators
6. Other Operators 

4. Logical Operators: - Logical operators are used to check whether an expression is true or false. If the expression is true, it returns 1 whereas if the expression is false, it returns 0.

                            Operator                    Example                             Meaning
                            &&                  expression1 && expression2                  Logical AND.
                                                                                            True only if all the operands are true.
                            ||                  expression1 || expression2                  Logical OR.
                                                                                            True if at least one of the operands is true.
                            !                          !expression                          Logical NOT.
                                                                                            True only if the operand is false.
                        In C++, logical operators are commonly used in decision making.

5. Bitwise Operators: - In C++, bitwise operators are used to perform operations on individual bits. They can only be used alongside char and int data types.

                            Operator                            Description
                            &                                   Binary AND
                            |                                   Binary OR
                            ^                                   Binary XOR
                            ~                                   Binary One's Complement
                            <<                                  Binary Shift Left
                            >>                                  Binary Shift Right

6. Other Operators: - Here's a list of some other common operators available in C++. We will learn about them in later tutorials.

                            Operator         Description                                                   Example
                            sizeof           returns the size of data type                                 sizeof(int); // 4
                            ?:               returns value based on the condition                          string result = (5 > 0) ? "even" :"odd"; // "even"
                            &                represents memory address of the operand                      &num; // address of num
                            .                accesses members of struct variables or class objects         s1.marks = 92;
                            ->               used with pointers to access the class or struct variables    ptr->marks = 92;
                            <<               prints the output value                                       cout << 5;
                            >>               gets the input value                                          cin >> num;



*/

#include <iostream>
using namespace std;

main() {
    cout<<"Logical Operators !"<<endl;

    // AND - &&
    // True only when both the expressions are true

    cout << (7>5 && 5!=10) <<endl;
    cout << (2>5 && 5!=10) <<endl;

    // OR - ||
    // True when both the expressions are true or only one of them is true.

    cout << (2>5 || 5!=10) <<endl;
    cout << (2>5 || 5!=5) <<endl;

    // NOT - !
    // Return true if result is false and vice versa.
    cout << !(7>5 && 5!=10) <<endl;

   /*
    Try searching for Bitwise and Other operators and Do some exercises by your own.
    */
}

