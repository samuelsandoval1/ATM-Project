//Samuel Sandoval Section 17
#include <iostream>
using namespace std;

const int TRIES = 3;
/* This is a functional Bank Simulator where a user can visit their bank through
this and perform functions such as withdraw money, add money, and see all their transactions. */

void Check_Balance(float balance){
  cout << "Your balance is: $"<< balance << endl;
}

float Deposit(float balance){
  float amount;
  float new_amount;
  cout << "Enter an amount to deposit: " << endl;
  cin >> amount;
  if(amount < 0){
    cout << "Please enter a valid amount $ " << endl;
    cin >> amount;
    new_amount = balance + amount;
    cout << "Your account now has a balance of $" << new_amount << endl;
    return new_amount;
  }
  else{
    new_amount = balance + amount;
    cout << "Your account now has a balance of $" << new_amount << endl;
    return new_amount;

  }
return new_amount;
}

float Withdraw(float balance){
  float amount;
  float better_amount = balance - (balance - 1);
  char response;
  float new_amount;

  cout << "Enter an amount to withdraw: ";
  cin >> amount;
  if(amount > balance) {
    cout << "Insufficient funds." << endl;
    cout << "Would you like to withdraw: $" << better_amount << " instead? (y/n)?  ";
    cin >> response;
    do {
      cout << "(y/n) ";
      cin >> response;
    } while(response != 'n' && response != 'y');
    if (response == 'y'){
      new_amount = balance + better_amount;
      cout << "Thank You! Your account has now a balance of $" << new_amount << endl;
      return new_amount;
    }
  }
  else {
      new_amount = balance - amount;
      cout << "Thank You! Your account has now a balance of " << new_amount << endl;
      return new_amount;
    }
    return new_amount;
  }

int main(int argc, char* argv[]) {
  if(argc != 3){
    cout << "Please enter both a pin and your current balance"<<endl;
  }

  int pin = stoi(argv[1]);
  float balance = stof(argv[2]);
  int counter;
  int choice;
  int password;
  cout << "Welome to branch #120 at the CSPC bank!"<< endl;
  do {
    cout << "Please enter your pin: ";
    cin >> password;
    if(counter == TRIES){
      cout << "You tried too many times." << endl;
      return 0;
    }
     if (password != pin){
      cout << "Wrong!" << endl;
      counter++;
    }
  }
  while(password != pin);

  while(choice != 4) {
    cout<< "What would you like to do next?"<< endl;
    cout << "1 - Check Balance" << endl;
    cout << "2 - Deposit Cash" << endl;
    cout << "3 - Withdraw Cash" << endl;
    cout << "4 - Exit" << endl;
    cout << ": ";
    cin >> choice;

    if(choice == 1) {
      Check_Balance(balance);
    }
    else if(choice == 2) {
      balance = Deposit(balance);
    }
    else if(choice == 3) {
      balance = Withdraw(balance);
    }
  }
  cout << "Thank You! Your account has now a balance of $" << balance << endl;

  return 0;
  }
