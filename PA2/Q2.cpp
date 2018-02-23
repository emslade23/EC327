#include <iostream>
using namespace std;

int main()
{
  // Sending messages to console
  int conversionFrom;
  int conversionTo;
  double input;
  cout << "Cups = 1, Ounces = 2, Tablespoons = 3, Teaspoons = 4" << endl;
  cout << "Conversion from: ";
  cin >> conversionFrom;
  cout << "Conversion to: ";
  cin >> conversionTo;
  if (conversionFrom == 1)
    {
      string unit = "Cups";
      cout << "Enter the amount in " << unit << ":" << endl;
      cin >> input;
    }
  else if (conversionFrom == 2)
    {
      string unit = "Ounces";
      cout << "Enter the amount in " << unit << ":" << endl;
      cin >> input;
    }
  else if (conversionFrom == 3)
    {
      string unit = "Tablespoons";
      cout << "Enter the amount in " << unit << ":" << endl;
      cin >> input;
    }
  else if (conversionFrom == 4)
    {
      string unit = "Teaspoons";
      cout << "Enter the amount in " << unit << ":" << endl;
      cin >> input;
    }

  // Error checking user inputs
  while ((conversionFrom < 0) | (conversionFrom > 4) | (conversionTo < 0) | (conversionTo > 4))
    {
      cout << "Error incorrect input."<< endl; 
      cout<< "Cups = 1, Ounces = 2, Tablespoons = 3, Teaspoons = 4" << endl;
      cout << "Conversion from: ";
      cin >> conversionFrom;
      cout << "Conversion to: ";
      cin >> conversionTo;
      string unit;

      if (conversionFrom == 1)
	unit = "Cups";
      else if (conversionFrom == 2)
	unit = "Ounces";
      else if (conversionFrom == 3)
	unit = "Tablespoons";
      else if (conversionFrom == 4)
	unit = "Teaspoons";
      cout << "Enter the amount in " << unit << ":" << endl;
      cin >> input;
    }



  // calculating based on corresponding inputs
  
  double result;
  string outputUnit;
  string inputUnit;

  if (conversionFrom == 1)
    {
      inputUnit =  "Cups";
      // cups to cups
      if (conversionTo == 1)
	{
	  result = input;
	  outputUnit = "Cups";

	}
      // cups to ounces
      else if (conversionTo == 2)
	{
	  result = input * 8;
	  outputUnit = "Ounces";

	}
      // cups to tablespoons
      else if (conversionTo == 3)
	{
	  result = input * 16;
	  outputUnit = "Tablespoons" ;
	}
      // cups to teaspoons
      else if (conversionTo == 4)
	{
	  result = input * 48;
	  outputUnit = "Teaspoons";
	}
    }

  else if (conversionFrom == 2)
    { 
      inputUnit = "Ounces";
      if (conversionTo == 1)
	{
	  result = input / 8.00;
	  outputUnit = "Cups";
	}
      else if (conversionTo == 2)
	{
	  result = input;
	  outputUnit = "Ounces";
	}
      // ounces to tablespoons
      else if (conversionTo == 3)
	{
	  result = input * 2;
	  outputUnit = "Tablespoons";
	}
      // ounces to teaspoons
      else if (conversionTo == 4)
	{
	  result = input * 6;
	  outputUnit = "Teaspoons";
	}
    }
  else if (conversionFrom == 3)
    // tablespoons to cups
    {
      inputUnit = "Tablespoons";
      if (conversionTo == 1)
	{
	  result = input / 16.0;
	  outputUnit = "Cups";
	}
      // tablespoons to ounces
      else if (conversionTo == 2)
	{
	  result = input / 2.0;
	  outputUnit = "Ounces";
	}
      else if (conversionTo == 3)
	{
	  result = input;
	  outputUnit = "Tablespoons";
	}
      // tablespoons to teaspoons
      else if (conversionTo == 4)
	{
	  result = input * 3;
	  outputUnit = "Teaspoons";
	}
    }
  else if (conversionFrom == 4)
    {
      inputUnit = "Teaspoons";
      if (conversionTo == 1)
	{
	  result = input / 48.0;
	  outputUnit = "Cups";
	}
      else if (conversionTo == 2)
	{
	  result = input / 6.00;
	  outputUnit = "Ounces";
	}
      else if (conversionTo == 3)
	{
	  result = input / 3.00;
	  outputUnit = "Tablespoons";
	}
      else if (conversionTo == 4)
	{
	  result = input;
	  outputUnit = "Teaspoons";
	}
    }

  cout << input << " " << inputUnit << " is " << result << " " << outputUnit << "." << endl;

  return 0;
}
