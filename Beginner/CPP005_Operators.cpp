/*
* Author: Manish Sharma
* Created: 12 Aug, 2022
*/
// Lets learn about operators in c++.
/*
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


2. Assignment Operators: - In C++, assignment operators are used to assign values to variables. For example, a = 5 means assign 5 to a.
                            Operator            Example         Equivalent to
                                =                a = b;             a = b;
                               +=                a += b;          a = a + b;
                               -=                a -= b;          a = a - b;
                               *=                a *= b;          a = a * b;
                               /=                a /= b;          a = a / b;
                               %=                a %= b;          a = a % b;

3. Relational Operators: - A relational operator is used to check the relationship between two operands. For example, a > b means checks if a is greater than b.

                            Here, > is a relational operator. It checks if a is greater than b or not.
                            If the relation is true, it returns 1 whereas if the relation is false, it returns 0.

                            Operator                    Meaning                         Example
                            ==                          Is Equal To                     3 == 5 gives us false
                            !=                          Not Equal To                    3 != 5 gives us true
                            >                           Greater Than                    3 > 5 gives us false
                            <                           Less Than                       3 < 5 gives us true
                            >=                          Greater Than or Equal To        3 >= 5 give us false
                            <=                          Less Than or Equal To           3 <= 5 gives us true

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
    int a, b;
    a = 7;
    b = 2;

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
    /*
    All above examples are of Arithmetic Operators.
    */


    cout<<"Assignment Operators !"<<endl;
    // 2 is assigned to a for assignment operators concept.
    a = 2;

    // 7 is assigned to b for assignment operators concept.
    b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a +b
    cout << "a = " << a << endl;
    // Exercise:   Try other assignment operators for your practice.

   /*
    All above examples are of Assignment Operators.
    */


    cout<<"Relational Operators !"<<endl;
    a = 3; //re-initilized a
    b = 5; //re-initilized b
    bool result;

    result = (a == b);   // false
    cout << "3 == 5 is " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;

    result = a > b;   // false
    cout << "3 > 5 is " << result << endl;

    result = a < b;   // true
    cout << "3 < 5 is " << result << endl;

    result = a >= b;  // false
    cout << "3 >= 5 is " << result << endl;

    result = a <= b;  // true
    cout << "3 <= 5 is " << result << endl;

   /*
    All above examples are of Relational Operators.
    */

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
    All above examples are of Logical Operators.
    */

   /*
    Try searching for Bitwise and Other operators and Do some exercises by your own.
    */
}

