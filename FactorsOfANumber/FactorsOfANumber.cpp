// FactorsOfANumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Connor Swanson
// Activision Blizzard
// 7/21/2022

#include <iostream>
#include <vector>

using namespace std;

vector<int> GetFactors(int number);

int main()
{
    // Introduce the user to the program
    cout << "Welcome to the Factor Finder!  Input a positive number to get the factors of the number!" << endl << endl;

    // Ask the user for a positive number input
    cout << "Please enter a positive number:" << endl;

    // Collect the user's input
    int input = 0;
    cin >> input;

    // Run algorithm
    vector<int> factorList = GetFactors(input);


    // Display factors to the user
    for (auto i = factorList.cbegin(); i != factorList.cend(); i++)
    {
        cout << *i << ' ';
    }

}

vector<int> GetFactors(int number)
{
    vector<int> factors;
    vector<int>::iterator itr;

    for (int i = (number / 2); i > 0; i--)
    {
        if (number % i == 0)
        {
            itr = factors.begin();
            itr = factors.insert(itr, i);
        }
    }

    return factors;
}