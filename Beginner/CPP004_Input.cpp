/*
* Author: Manish Sharma
* Created: 12 Aug, 2022
*/
/*
In this session we will learn how to get input from a user.
*/
#include<iostream>
using namespace std;

main(){
    // cout is used to output to a user. It means console out.
    // cin is used to take input from a user. It means console in.

   string firstname, lastname;
    cout << "Enter your First Name: ";
    cin >> firstname;
    cout << "Enter your Last Name: ";
    cin >> lastname;

    //This will print a first and last name of a user that is given by him.
    cout << "\nWelcome " << firstname << " " << lastname; 
    // Now try to get any other type of variable as input and print it to the user.

    // Look how I have added space between a first and last name, Because while output from variable space will not be included automatically. See example,
    cout << "\nWelcome " << firstname << lastname;
}
