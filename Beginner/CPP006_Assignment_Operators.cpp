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

2. Assignment Operators: - In C++, assignment operators are used to assign values to variables. For example, a = 5 means assign 5 to a.
                            Operator            Example         Equivalent to
                                =                a = b;             a = b;
                               +=                a += b;          a = a + b;
                               -=                a -= b;          a = a - b;
                               *=                a *= b;          a = a * b;
                               /=                a /= b;          a = a / b;
                               %=                a %= b;          a = a % b;
*/
#include<iostream>
using namespace std;

main(){

    int a, b;
        cout<<"Assignment Operators !"<<endl;
    // 2 is assigned to a 
    a = 2;

    // 7 is assigned to b 
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
}

