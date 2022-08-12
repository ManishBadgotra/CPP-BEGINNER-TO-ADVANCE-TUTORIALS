/* What is Variables? 
Ans- A variable is a symbolic name for (or reference to) information. The variable's name represents what information the variable contains. They are called variables because the represented information can change but the operations on the variable remain the same.
*/
#include<iostream>
using namespace std;

main() {
    int firstVariable; // Declaring our first integer type variable called firstVariable, this will allocate 4 bytes in a memory.
    
    // Initializing value to a variable.
    firstVariable = 5;

    cout << firstVariable << endl;  // By this we can print value that is stored in a variable which is 5 in our case.

    cout << &firstVariable << endl;  // Adding & operator before variable will print a address of a variable.

    // cout is used for print a line and endl used in a last will start a newline after that. You can also use "\n" which also mean newline and can be use like cout << firstVariable << "\n";

    // semicolon is know as terminator which helps complier to tell that this line ends here.

    /*
    Rules for Declaring a Variable.
    1. Varibale can't have the same name because CPP is a case-sensitive language.
    2. Variable Name can't start with a number.
    3. Variable Name should not contain space between name example: int first variable;
    4. Variable Name should be self-descriptive means by seeing a variable a person can get what this variable is used for.
    5. Variable Names can't have special characters and keywords other than underscore.    
    */

   // we can Re-initialize a variable as many time as we can.
   firstVariable = 13;

   cout << firstVariable << endl; // Now value that will print be 13.

   // Lets see does memory address has been changed?
    cout << &firstVariable << endl;
}