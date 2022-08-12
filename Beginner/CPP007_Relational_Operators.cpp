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


*/

#include <iostream>
using namespace std;

main() {
    int a , b;

    cout<<"Relational Operators !"<<endl;
    a = 3; //initilized a
    b = 5; //initilized b
    bool result;

    result = (a == b);   // false
    cout << "3 == 5 is " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;

    result = (a > b);   // false
    cout << "3 > 5 is " << result << endl;

    result = (a < b);   // true
    cout << "3 < 5 is " << result << endl;

    result = (a >= b);  // false
    cout << "3 >= 5 is " << result << endl;

    result = (a <= b);  // true
    cout << "3 <= 5 is " << result << endl;

}

