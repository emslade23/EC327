#include <iostream>
#include "Functions.h"
using namespace std;


const int ENTRIES = 10;

int main()
{
    // initial user inputs
    char commandCode;
    cout<< "Please enter command code:";
    cin >> commandCode;
    if ((commandCode > 64) && (charVal < 91)) // for converting uppercase to lowercase
    {
      commandCode = commandCode + 32;
    }
    bool logical_result = checkCode(commandCode);
  if (logical_result)
  {
      //ask for parameters for specific commands and run command codes
      
      cout<< "Please enter command parameters: ";
      // declaring variables for each possible command parameter
      int num;
      const char * fileWriteTo;
      const char * fileReadFrom;
      int firstVal;
      int lastVal;
      double first;
      double last;
      double delta;
      double result;
      if ((commandCode == 102) || (commandCode == 98))//f and b
      {
          cin>> num;
          int num2;
          if (commandCode == 102)
          {
              num2 = factorial(num);
          }
          else if (commandCode == 98)
          {
              num2 = fibonacci(num);
          }
          cout << num2 << endl;
      }
      else if ((commandCode == 105) || (commandCode == 111))//i and o
      {
          cin >> fileWriteTo;
          cin >> fileReadFrom;
          if (commandCode == 105)
          {
              void readDataFromFile(fileReadFrom;
          }
          else
          {
              void writeDataFromFile(fileReadFrom);
          }

      }
      else if (commandCode == 100)//d
      {
          cin >> firstVal;
          cin >> lastVal;
      }
      else if ((commandCode == 114)||(commandCode == 108) || (commandCode == 110))//r,l,n
      {
          cin >> first;
          cin >> last;
          cin >> delta;
          int i = 1;
          double changingVal;
          if ((delta <= 0) || (first > last)) // error checking
          {
              cout << "No computation needed." << endl;
          }
          if (commandCode == 114) // calling function in steps of delta // *possible errors*
          {
            result = findSqrtValue(first);
            while (first< last) && (first<= ENTRIES)) 
              {
                double deltaIncrement = delta*i;
                if (deltaIncrement> last) //if delta is greater than 
                {
                    deltaIncrement = last;
                }
                changingVal = first + deltaIncrement;
                result = findSqrtValue(changingVal); //note: overwriting result everytime
                cout<< result<< endl;  
                i = i+1;
              }

          }

          else if (commandCode == 108) //natural log
          {
            result = naturalLog(first);
            double deltaIncrement = delta*i;
            if (deltaIncrement> last) //if delta is greater than 
            {
                deltaIncrement = last;
            }
            changingVal = first + deltaIncrement;
            result = naturalLog(changingVal); //note: overwriting result everytime
            cout<< result<< endl;  
            i = i+1;
            }


          }

          else if (commandCode == 110) //Nyancat value 
          {
            result = findNyanCatValue(first);
            double deltaIncrement = delta*i;
            if (deltaIncrement> last) //if delta is greater than 
            {
                deltaIncrement = last;
            }
            changingVal = first + deltaIncrement;
            result = findNyanCatValue(changingVal); //note: overwriting result everytime
            cout<< result<< endl;  
            i = i+1;
              }


          }
      }
  }
  else if (commandCode == 113) // if user inputs q
  {
      break;
  }
  else 
  {
      cout << "Invalid command code."<< endl; // this means the character was not accounted for in program
  }











    return 0;
}