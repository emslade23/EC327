#include <iostream>
#include <string>

using namespace std;

int main()
{
    // getting values
    char charVal;
    int operationVal;
    cout<< "Enter char, operation:";
    cin >> charVal;
    cin >> operationVal;
    char charVal2= 0;
    int alphabetNum =0;
    int alphabetNum2 = 0;
    
    if (((charVal > 96) && (charVal < 123)) || ((charVal > 64) && (charVal < 91))) // error checking letter
    {
    // performing the three specified operations
        if (operationVal == 1)
        {
            if ((charVal > 96) && (charVal < 123)) // for lowercase
            {
             charVal2 = charVal - 32;
            }
            
            else if ((charVal > 64) && (charVal < 91)) // for uppercase 
            {
              charVal2 = charVal + 32;
            }
            cout << "Result: "<< charVal2<< endl;
        
        }
        else if (operationVal == 2)
        {
            if (((charVal > 96) && (charVal < 123))) // for lowercase
            {
             charVal = charVal - 32; //change to uppercase
             //77.5 is the middle value in the alphabet for uppercase
                if (charVal > 77.5)
                {
                    alphabetNum = charVal - 77.5;
                    alphabetNum2 = 77.5 - alphabetNum;
                    charVal = alphabetNum2;
                   
                }
             
                else if (charVal < 77.5)
                {
                    alphabetNum = 77.5 - charVal;
                    alphabetNum2 = 77.5 +alphabetNum + 1;
                    charVal = alphabetNum2;
                }
                cout << "Result: "<< charVal<< endl;
            }
         
            else if (((charVal > 64) && (charVal < 91))) // for uppercase
            {
              charVal = charVal + 32; //change to lowercase 
                if (charVal > 109.5) //upper half of lowercase alphabet to get corresponding lower half
                {
                    alphabetNum = charVal - 109.5;
                    alphabetNum2 = 109.5 -alphabetNum; //if input is R, output is I
                    charVal = alphabetNum2;
                   
                }
  
               
              
                else if (charVal < 109.5)// lower half of lowercase alphabet to get corresponding upperhalf
                {
                    alphabetNum = 109.5 - charVal;
                    alphabetNum2 = 109.5 + alphabetNum +1; // if input L output is o
                    charVal = alphabetNum2;
                    
                }
                cout << "Result: "<< charVal<< endl;
            }
        }
        
        else if (operationVal == 3)
        {
            if ((charVal > 96) && (charVal < 123)) //for lowercase
            {
             
                if ((charVal<117))
                {
                    charVal2 = charVal + 6; //for most of alphabet
                    
                }
                else
                {
                    charVal = charVal - 20; //for final 5 in alphabet
                    if ((charVal > 96) && (charVal < 123)) // for lowercase to uppercase
                    {
                     charVal2 = charVal - 32;
                    }
                }
                cout << "Result: "<< charVal2<< endl;
                
            }

                
            else if ((charVal > 64) && (charVal < 91)) //for uppercase
             {
              if ((charVal<85))
		        {
                  charVal2 = charVal + 6; //for most of alphabet
		        }
              else
		        {
                  charVal = charVal - 20; //for final 5 in alphabet
                  if ((charVal > 64) && (charVal < 91)) // for uppercase  to lowercase
                  {
                    charVal2 = charVal + 32;
                  }

		        }
              cout<< "Result: "<< charVal2<<endl;
             }
        }
        
        else
        {
	  cout<< "Result: Illegal operation"<<endl; //error checking double letter input
        }
    }
    else
    {
      cout<< "Result: Illegal operation"<<endl;
    }
        
    return 0;
}

