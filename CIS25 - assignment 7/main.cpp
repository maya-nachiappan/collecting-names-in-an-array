//
//  CIS25 - assignment 7
//
//  Created by maya nachiappan on 9/15/24.
//
// program to take 3 names from a user and store them in an array, and then print the first one

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int num=3;
    string names[num]; // creates an array to store 3 names
    cout << "Please enter 3 names: " << endl;
    for (int i=0; i<num; i++)
    {
        cout << "Name " << (i+1) << ":" << endl; // the user is prompted to enter 3 names
        getline(cin, names[i]); // each name is stored in an array index
    }
    cout << "The first name in the array is: " << names[0] << endl; // prints each name in the array in index order
    return 0;
}


