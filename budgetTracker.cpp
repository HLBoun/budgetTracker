/*
 * budgetTracker.cpp
 * budgetTracker takes your entire budget and subtracts all your expenses. 
 * Huthsady Legend Boun
 * Professor Edwards
 * 14 Sept. 2024
 * Program 2
 *
 * Params:
 *  Accept input separate times for money amount and expenses
 *  output total money left
 *
 * Flowchart:
 *  begin-> welcome message-> input money amount-> subtract expenses-> output money left after subtracting all expenses-> end/loop from beginning.
 *
 *
 */ 


#include <iostream>
#include <string>

void budgetTracker()
{ 
  bool        keepRunning = true; // used to keep the while loop running.

  long double initialBalance;  // <-
  long double runningBalance;  //   |
  double      rentBill;        //   |
  double      insuranceBill;   //   |------ variables used for storing what is inputed.
  double      phoneBill;       //   |
  double      groceryExpenses; //   |
  std::string pause;           // <-


  while (keepRunning == true) // Beginning of loop. Breakable by internal if statement.
  {
    std::cout << "Welcome to the college budget tracker!\n" << "Please enter your initial balance. (E.G. 837290927234328)\n$"; // Greeting message, balance request, and example (for preventing improper inputs)
    std::cin >> initialBalance;
  
    runningBalance = initialBalance;

    std::cout << "Now, please enter your monthly rent cost\n$";
    std::cin >> rentBill;
  
    runningBalance -= rentBill;

    std::cout << "Now enter your monthly insurance cost\n$";
    std::cin >> insuranceBill;

    runningBalance -= rentBill;                                                                                                // Lines 36 - 60 are the cycle of subtracting from the runningBalance
                                                                                                                               // Also, the '$' sign after the endlines should prevent improper inputs.
    std::cout << "Enter your phone bill please\n$";
    std::cin >> phoneBill;

    runningBalance -= phoneBill;

    std::cout << "Enter your monthly grocery expenses please\n$";
    std::cin >> groceryExpenses;
    std::cout << "Calculating your budget after all monthly expenses...\n";

    runningBalance -= groceryExpenses;

    std::cout << std::fixed << "Your spare change is... $" << runningBalance << "\n Please enter [y] to do another budget, or [n] to exit the program.\n";
    std::cin >> pause;
    if (pause == "n") // Pragmatic operator. Allows for ONLY the character 'n' to close the program. 
    {
      keepRunning = false;
    }
  }
}





int main() // Main function. Every c++ program needs this
{
  budgetTracker(); // Calling the budgetTracker() function we made
}
