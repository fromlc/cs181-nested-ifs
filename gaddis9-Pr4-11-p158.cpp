//------------------------------------------------------------------------------
// gaddis9-Pr4-11-p158.cpp
// 
// Author: Tony Gaddis, in Gaddis 9E pp. 158
// Modified by: Prof. Linda C
// 
// This program demonstrates the nested if statement.
//------------------------------------------------------------------------------
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {
    char employed;    // Currently employed, Y or N
    char recentGrad;  // Recent graduate, Y or N

    // Is the user employed and a recent graduate?
    cout << "\nLet's see if you qualify for a";
    cout << "\nspecial interest rate!\n\n";

    cout << "Are you currently employed? (y/n) ";
    cin >> employed;
    employed = toupper(employed);       // FORCE UPPERCASE

    // Determine user's loan qualifications
    if (employed != 'Y')  // Not employed
    {
        cout << "\nSorry, you must be currently employed";
        cout << "\nto qualify.\n";
    }
    else
    {
        cout << "\nDid you graduate from college";
        cout << "\nin the past two years ? (y/n) ";
        cin >> recentGrad;
        recentGrad = toupper(recentGrad);   // FORCE UPPERCASE

        if (recentGrad == 'Y') // Nested if
        {
            cout << "\nYou qualify for the special interest rate!\n";
        }
        else // Not a recent grad, but employed
        {
            cout << "\nSorry, you must have graduated";
            cout << "\nfrom college in the past two";
            cout << "\nyears to qualify.\n";
        }
    }
    return 0;
}