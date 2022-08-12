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

1. Arithmetic Operators: - Arithmetic operators are used to perform arithmetic operations on variables and data. For example, a + b .
                        Here, the + operator is used to add two variables a and b. Similarly there are various other arithmetic operators in C++.
                        Operator     Operation
                        +         -> Addition, can also be used to concatinate 2 Strings together.
                        -         -> Subtraction
                        *         -> Multiplication
                        /         -> Division
                        %         -> Modulo Operation (Remainder after division) only be used with integers.

                         - Increment and Decrement Operators in Arithmetic operators.
                            C++ also provides increment and decrement operators: ++ and -- respectively.
                            ->   ++ increases the value of the operand by 1
                            ->   -- decreases it by 1
*/
#include <iostream>
using namespace std;

main() {
    int a = 7, b = 2;

    cout<<"Arithmetic Operators !"<<endl;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo(Remainder after Division) of a by b
    cout << "a % b = " << (a % b) << endl;

    int x = 10, y = 100, result_pre_x, result_post_x, result_pre_y, result_post_y;

    // incrementing x by 1 and storing the result in respective variables.
    result_pre_x = ++x;//Pre-Increment
    cout << "Result is show of pre increment = " << result_pre_x << endl;
    cout << "Value is of x before post increment = " << x << endl;
    result_post_x = x++;//Post-Increment
    cout << "Result is show after post increment = " << result_post_x << endl;


    // decrementing x by 1 and storing the result in respective variables.
    result_pre_y = --y;//Pre-Decrement
    cout << "Result is show of pre Decrement = " << result_pre_y << endl;
    cout << "Value is of x before post Decrement = " << x << endl;
    result_post_y = y--;//Post-Decrement
    cout << "Result is show after post Decrement = " << result_post_y << endl;
   
}