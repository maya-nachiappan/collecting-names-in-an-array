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
    string names[num];
    cout << "Please enter 3 names: " << endl;
    for (int i=0; i<num; i++)
    {
        cout << "Name " << (i+1) << ":" << endl;
        getline(cin, names[i]);
    }
    cout << "The first name in the array is: " << names[0] << endl;
    return 0;
}


