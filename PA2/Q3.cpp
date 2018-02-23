#include <iostream>

using namespace std;

int main()
{
  int integer1; // getting inputs
  int integer2;
  cout << "Enter two positive integers: ";
  cin >> integer1;
  cin >> integer2;
  int digits1 = 0;
  int digits2 = 0;
  int integer1digits = integer1;
  int integer2digits = integer2;
  while (integer1digits != 0) //finding the number of digits in each integer
    { integer1digits /= 10; digits1 ++; }
  while (integer2digits != 0) 
    { integer2digits /= 10; digits2 ++; }
  
  while ((integer1 < 0) || (integer2 < 0) || (digits1 > 4294967295) ||  (digits2 > 4294967295)) //error checking the limits of the program
    {
      cout << "Enter two positive integers: ";
      cin >> integer1;
      cin >> integer2;

    }


  int integerValue1 = integer1;
  int integerValue2 = integer2;
    
    

  //convert positive integers to hex
  // converting integer1 to hex
  string hexResult1 = "";
  string hexResult2 = "";
  while (integerValue1 != 0)
    {
      int hex1 = integerValue1 % 16;
      integerValue1 = integerValue1 / 16;
        
      char hexCharacter1 = (hex1 >= 0 && hex1 <= 9) ?
	static_cast<char>(hex1 + '0'):
	static_cast<char>(hex1 - 10 + 'A');
            
      hexResult1 = hexCharacter1 + hexResult1;
    }
  // converting integer2 to hex
  while (integerValue2 != 0)
    {
      int hex2 = integerValue2 % 16;
      integerValue2 = integerValue2 / 16;
        
      char hexCharacter2 = (hex2 >= 0 && hex2 <= 9) ?
	static_cast<char>(hex2 + '0'):
	static_cast<char>(hex2 - 10 + 'A');
            
      hexResult2 = hexCharacter2 + hexResult2;
    }
    
  //zero padding
  string strInt1 = hexResult1;
  string strInt2 = hexResult2;   
  if (hexResult2.length() > hexResult1.length())
    {
      int addZeros =  hexResult2.length() - hexResult1.length();
      int i;

      for (i = 0; i < addZeros; i++)
        {
	  strInt1 = "0" + strInt1;
        }

    }
  else if (hexResult1.length() > hexResult2.length())
    {
      int addZeros = hexResult1.length() - hexResult2.length();
      int i;


      for (i = 0; i < addZeros; i++)
        {
	  strInt2 = "0" + strInt2;
        }
   
    }
    
    
  //hamming distance algorithm
  int hammingDistance = 0;
  int i;
  int intLength = strInt1.length();
  for (i = 0; i < intLength; i++)
    {
      if (strInt1[i] != strInt2[i])
	{
	  hammingDistance = hammingDistance + 1;
	}
    }

  cout << "Hamming distance between" << " "<< integer1 << " and " << integer2 << " "<<\
    "when numbers are in hex format is: "<< hammingDistance  << endl;
  //outputting resulting hamming distance to user
  return 0;
}
 
    
