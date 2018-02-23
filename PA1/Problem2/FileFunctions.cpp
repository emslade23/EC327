#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void WriteRandomData(int N, int M, filename)// understand pointers
{
    int i = 1;
    int remainderNum = M+1;
    int randomInt;

    for (i, i<=N, i++) // generating random integers for 0 to M inclusive and writing them to file
    {
        srand(time(0));
        randomInt = rand % remainderNum;
        ofstream myfile;
        myfile.open(filename);
        myfile << randomInt <<endl;
    }
    myfile.close();
}

void ReadData(filename, int &size, int myArray[])
{
    // opening file
    ifstream inFile;
    inFile.open(filename);
    int i = 0;
    //error checking
    if (inFile.fail())
    {
        cout<< "Error opening file."<< endl;
    }
    if(inFile.is_open())
    {
        while(! openfile.eof())
        {
            inFile >> myArray[i];
            i = i +1;
        }
        size = sizeof(myArray)/sizeof(myArray[0]);
    }

}
