#include <iostream>

using namespace std;

double getMedian(int array[], int size)
{  
    //practice inputs
    int array[] = {8,25,10,32,81}; 
    int size = 5;
    // sorting the array using selection sort method
    for (int i =0; i < size - 1; i++)
    {
        int minVal = array[i];
        int minValIndex = i;
        for (int j = i+1; j <size; j++)
        {
            if (minVal> array[j])
            {
                minVal = array[j];
                minValIndex = j;
            }
        }
        if (minValIndex != i)
        {
            array[minValIndex] = array[i];
            array[i] = minVal;
        }
    }
    for (int i = 0; i <size; i++) //checking the array by printing to console
    {
    cout << array[i]<< " ";
    }
    
    // finding median
    int middle = size / 2.0;
    int indexVal = middle -1;
    if (size % 2)
    {
        double median = (array[middle]) / 1.0;
        cout << "The median is: " << median << endl;
    }
    else
    {
        double median = (array[indexVal] + array[middle]) / 2.0;

        cout << "The median is: " << median << endl;

    }
    return median;
    
}

int getLargest(int array[], int size)
{   
    for (int i =0; i < size - 1; i++)
    {
        int minVal = array[i];
        int minValIndex = i;
        for (int j = i+1; j <size; j++)
        {
            if (minVal> array[j])
            {
                minVal = array[j];
                minValIndex = j;
            }
        }
        if (minValIndex != i)
        {
            array[minValIndex] = array[i];
            array[i] = minVal;
        }
    return array[size-1];
}