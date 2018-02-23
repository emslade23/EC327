#include <iostream>
#include "Statistics.h"
#include "FileFunctions.h"
using namespace std;

int*DoubleAndReverse (int *list, int size)
{

    //practice values
    int list[] = {1,2,3,4,5};
    int size = 5;
    const int sizeConst = 2*size;
    
    int newList[sizeConst];
    for (int k = 0; k < size; k++) //copying the list into newList
    {  
       newList[k] = list[k];
    }
     for (int i = 0, j = size - 1; i < j; i++, j--) //reversing list
      {
          int temp = list[j];
          list[j] = list[i];
          list[i] = temp;
      }
      const int f = 2*size;
      int i = 0;
   for (int e = size; e<f; e++, i++) //getting the reverse list into newList
   {
       newList[e] = list[i];
   }
   return newList;

   cout<<"Doubled and Reversed is ["
   for (int i = 0; i<sizeConst; i++) //checking answer
   {
       cout<<<<newList[i]<< " ";
   }
   cout<< "]"<< endl;
}



int main()
{
    const char* filename = "data.txt";
    cout<< "Writing file: "<< filename;
    int N = 5;
    int M = 5;
    void WriteRandomData(N, M, filename);

    cout<< "Reading file: "<< filename;
    const int size = N;
    int myArray[N];
    void ReadData(filename, &size, myArray);
    cout<< "Array size is: " << size;
    int* pIntArray;
    pIntArray = DoubleAndReverse (myArray, &size);

    double median = getMedian(myArray, size);
    cout << "Median is: " << median<< endl;

    int largeNumber = getLargest(myArray, int size) //how to input the resulting array into the functions
    cout<< "Largest is: " << largeNumber<< endl;
    return 0;
}





