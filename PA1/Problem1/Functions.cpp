#include <iostream>
#include <math.h>
#include <fstream>
#include "Functions.h"
using namespace std;

const int ENTRIES = 10;

void initialize()
{
    cout<< "EC327: Introduction to Software Engineering"<< endl;
    cout<< "Fall 2017"<< end;
    cout<< "Programming Assigment 2"<< endl;
    cout<< "Value of Entries is:"<< ENTRIES << endl;
}
bool checkCode(char commandCode)
{
    // checking user inputs
    if ((commandCode == 98) || (commandCode ==100) || (commandCode ==102) || (commandCode == 105) || /
    (commandCode == 108) || (commandCode == 110) || (commandCode ==111) || (commandCode == 113) || /
    (commandCode == 114))
    { 
        return true;
    }
    else 
    {
        return false;
    }

}
void writeDataToFile(fileWriteTo) // const char is a pointer and i have no idea why
{
    // writing to file
    char input1;
    ofstream outFile;
    outFile.open(fileWriteTo);
    cin << input1;
    outFile << input1;
    cout << input1;
    while (input1 != 113)
    {
        cin << input1;
        outFile << input1;
        cout << input1;

    }


}
void readDataFromFile(fileReadFrom)
{
    ifstream inFile;
    inFile.open(fileReadFrom);
    if (inFile.fail())
    {
        cout<< "Error opening file."<< endl;
    }
    char letter1;
    char letter2;
    int fibonacciNum;
    int firstNum;
    int lastNum;
    int deltaNum;
    // outputing the information in the file that was read, no other description of what to do.
    inFile >> letter1 >> fibonacciNum >> letter2 >> firstNum >> lastNum >> deltaNum << end;
    cout<< "Command 1 and Parameter: " << letter1 << " " << fibonacciNum << "Command 2 and Parameters" << /
    letter2 << " " << firstNum << " "<< lastNum << " " << deltaNum<< endl; 
}
double findNyanCatValue(double myNum)
{
    double myNum_result;
    myNum_result = (2*myNum) + (myNum * pow(6,myNum));
    return myNum_result;
}
int factorial(int factorialVal)
{
    int factorial = 1;
    for (i = 1, i<=factorialVal, ++i)
    {
        factorial = factorial*i;
    }
    return factorial;
}
int fibonacci(int index)
{
    int output;
    if (index == 0)
    {
        output = 0;
        return output;
    }
    else if (index == 1)
    {
        output = 1;
        return output;
    }
    else 
    {
        output = fibonacci(index-1)+fibonacci(index-2);
        return output;
    }


}

double findSqrtValue(double argument)
{
    double sqrtResult = sqrt(argument);
    return sqrtResult;
}
double naturalLog(double argument)
{
    double result = log(argument);
    return result;
}
int findNextOddValue(int value)
{
    if ((value % 2) == 0)
    {
        value = value +1;
    }
    else if ((value % 2) !=0)
    {
        value = value + 2;
    }
    return value;

}
