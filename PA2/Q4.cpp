#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  // prompting user
  int userChoice;
  cout << "Choose Rock (0), Paper (1), or Scissors (2): ";
  cin >> userChoice;

  // error checking
  while ((userChoice > 2) | (userChoice < 0))
    {
      cout << "Choose Rock (0), Paper (1), or Scissors (2): "<< endl;
      cin >> userChoice;
    }

  // computer choice based on a random number 
  srand(time(0));
  int computerChoice = rand() % 3 ;

  string result;
  string computer_StringChoice;

  //figuring out who wins
  if ((userChoice == 0) && (computerChoice == 2))
    {
      result = "You win!";
    }
  else if ((computerChoice == 0) && (userChoice == 2))
    {
      result = "You lose!";
    }
  else if (computerChoice > userChoice)
    {
      result = "You lose!";
    }
  else if (userChoice > computerChoice)
    {
      result = "You win!";
    }
  else if (userChoice == computerChoice)
    {
      result = "You tie!";
    }
    

    
  if (computerChoice == 0)
    {
      computer_StringChoice = "Rock";
    }
  else if (computerChoice == 1)
    {
      computer_StringChoice = "Paper";
    }
  else if (computerChoice == 2)
    {
      computer_StringChoice = "Scissors";
    }
  
  // output to user 
  cout << "Computer chooses: " << computer_StringChoice << endl;
  cout << result << endl;
    
}
