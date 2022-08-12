/*
    Lets see how many Variable types are there in CPP.
*/

#include<iostream>
using namespace std;

main() {

    int firstVariable = 10, secondVariable = 20; // Allocate 4 bytes each.
    cout << "Value of First int Type Variable : " << firstVariable << " Address of a Variable: " << &firstVariable << endl;
    cout << "Value of Second int Type Variable : " << secondVariable << " Address of a Variable: " << &secondVariable << endl;

    short shortVariable = 1; // Allocate 2 bytes.
    cout << "Value of Short Type Variable: " << shortVariable << " Address of a Short Type Variable: " << &shortVariable << endl;

    float floatVariable = 10.000004; // Allocate 4 bytes to float type variable.
    double doubleVariable = 10.00000000010; // Allocate 8 bytes to double type variables.
    cout << "Value of Float Type Variable: " << floatVariable << endl; 
    cout << "Value of Double Type Variable: " << doubleVariable << endl; // Try to print a address of Double and Float Variables.

    char charVariable = 'A'; // Char type variable can only take one value at a time.
    cout << charVariable << " is a char date type." << endl;

    string stringVariable1 = "Hello";
    cout << stringVariable1 << endl;
    string stringVariable2 = "World!";
    cout << stringVariable2 << endl; 

    string combineStrings = stringVariable1 + " " + stringVariable2; // This will concatinate(add) 2 or more strings together.
    cout<< combineStrings <<endl;

    bool b1=true; //Boolean is true or false. FALSE IS ALWAYS ZERO, EVERY OTHER NUMBER IS TRUE.
    cout<<b1<<endl;
    b1=1515; // True
    cout<<b1<<endl;
    b1=-445; // True
    cout<<b1<<endl;
    b1=0; // False
    cout<<b1<<endl;

    //Positive numbers or unsigned numbers. Increases the positive range.
    unsigned short int u1=60445;
    cout<< u1 <<endl;

    const string pray="Har Har Mahadev🙏";
    cout << pray << endl; // const variable can't be re-initialized because this will made them constant till program is there.
}