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
    char employed,    // Currently employed, Y or N
        recentGrad;  // Recent graduate, Y or N

    // Is the user employed and a recent graduate?
    cout << "\nLet's see if you qualify for a special interest rate!\n\n";

    cout << "Are you employed? (y/n)";
    cin >> employed;

    cout << "Did you graduate from college\n";
    cout << "in the past two years? (y/n)";
    cin >> recentGrad;

    // Determine the user's loan qualifications.
    if (employed == 'Y')
    {
        if (recentGrad == 'Y') // Nested if
        {
            cout << "You qualify for the special ";
            cout << "interest rate.\n";
        }
        else // Not a recent grad, but employed
        {
            cout << "You must have graduated from ";
            cout << "college in the past two\n";
            cout << "years to qualify.\n";
        }
    }
    else  // Not employed
    {
        cout << "You must be employed to qualify.\n";
    }
    return 0;
}