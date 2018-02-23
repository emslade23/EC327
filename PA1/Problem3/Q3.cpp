#include <iostream>

using namespace std;

void PrintRhombus(int n)
{
    
}

int main()
{
    int rhombusNum;
    cout<< "Enter a number [1-9]: ";
    cin << rhombusNum;
    while ((rhombusNum <1) ||(rhombusNum >9))
    {
        cout << "Error, incorrect input."<< endl;
        cout<< "Enter a number [1-9]: ";
        cin << rhombusNum;
    }
    PrintRhombus(rhombusNum);
    return 0;
}