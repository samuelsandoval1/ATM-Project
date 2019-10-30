# Project 2 - Bank ATM Simulator

<b> Due Tuesday November 5, 2019 11:59pm</b>

Implement a basic command-line Automated Teller Machine (ATM, https://www.youtube.com/watch?v=cYWHqha2wfk) simulator that allows the user to perform a variety of actions, such as
* Enter their PIN (Personal Identification Number, to prevent theft)
* Withdraw money
* Deposit money
* Check their account balance
* Exit when they're done

# Objectives
* Design and implement a larger program from scratch
* Demonstrate fluency in C++ fundamentals thus far, including
  * Types, variables, and assignment
  * Conditionals, such as `if` `else if` `else`
  * Comparison operators, such as `==`, `!=`, `>=`, `<=`, `>`, `<`
  * Logical operators, such as `&&`, `||`, `!`
  * Iteration using `while`, `do while`, and/or `for`
  * User input and output using `cout`, `cin`
  * Command line arguments using `argc` and `argv`
* Learn to break a large and difficult problem down into smaller easier problems
* Demonstrate the ability to write clean code in accordance with a style guide

# Guidelines
There are a variety of approaches that can be taken in this project. This is your chance to be creative and showcase what you've learned so far, and putting it all together and make something the way you want it!

You are expected to write a `.cpp` file from scratch. You may use any past lab material for reference.

## Minimum Requirements
* The expected PIN number and starting balance in the account should be read via `argv` upon launching the program. For example,
```
$ ./bank_simulator 7890 1000
```
would set the expected PIN number to 7890 and $1000.00 starting balance.

* The user should be prompted for their PIN upon launch (avoid starting with 0 for simplicity). Only allow the user to proceed with the correct pin, and kick them out for too many wrong attempts, the number is up to you. You may use what you wrote in lab-06 as a starting point.
```
$ ./bank_simulator 7890 1000
Welcome to branch #120 at CPSC bank!
Please enter your PIN:
```

* The user should be prompted about what action they would like to take on their account (menu-driven interface)
  * The user must be able to check the balance on their account
  * The user must be able to make withdrawals
  * The user must be able to make deposits
```
./bank_simulator 7890 1000
Welcome to branch #120 at CPSC bank!
Please enter your PIN: 7890
What would you like to do today?
1 - Check Balance
2 - Deposit Cash
3 - Withdraw Cash
4 - Exit
:
```
* Your code must be able to check for overdrafts, and act accordingly! A few examples:
  * Disallow the withdrawal and print why
  * Offer to allow the user to withdraw the balance
```
What would you like to do today?
1 - Check Balance
2 - Deposit Cash
3 - Withdraw Cash
4 - Exit
: 3
Enter amount to withdraw: 1001
Insufficient funds.
Would you like to withdraw $1000 instead? (y/n): n
```
* Users can deposit or withdraw any combination of dollars/cents
```
What would you like to do today?
1 - Check Balance
2 - Deposit Cash
3 - Withdraw Cash
4 - Exit
: 2
Enter amount to deposit: 0.01
Thank you! Your account now has a balance of $1000.01
```

* Users can make multiple transactions per session
```
What would you like to do today?
1 - Check Balance
2 - Deposit Cash
3 - Withdraw Cash
4 - Exit
: 2
Enter amount to deposit: 0.01
Thank you! Your account now has a balance of $1000.01
What would you like to do next?
1 - Check Balance
2 - Deposit Cash
3 - Withdraw Cash
4 - Exit
: 3
Enter amount to withdraw: 400
Your account now has a balance of $600.01
What would you like to do next?
...
```
* Users can exit at any time
```
What would you like to do next?
1 - Check Balance
2 - Deposit Cash
3 - Withdraw Cash
4 - Exit
: 4
kthxbai
```

Any output statements above are purely for example purposes, you may write any custom messages you wish as long as they are PG-13 and easy to understand.

## Optional Challenges
While the minimum requirements above are all that are expected, feel free to go above and beyond and showcase your ability to code using C++. Examples of features you may consider implementing include:
* Print a summary of all transactions made in the session upon exiting
* Support separate savings/checking "accounts"
* Calculate theoretical monthly interest that would accrue on the account at the end of the month based on the balance. You can even make it tiered: The more money in the account, the higher the interest rate.
* Allow the user to take out or repay a loan
* Organize your code into <b>functions/methods</b> for readability and maintainability
* Secret option easter egg into your rock paper scissors game
* The sky is the limit!

# Submissions
Only what is committed in GitHub can be graded. Commits made after the deadline of November 5, 2019 will be considered late. Submissions that are missing your full name, lab section, or fails to compile will receive a score of 0.

# Grading
* (1 point): User experience matters! Your code has clear, meaningful prompt messages at each step so the user never has to guess what is going on.
* (1 point): Your code follows the C++ style guide you worked so hard to follow in project 1
* (1 point): Your ATM correctly prints the account balance when requested
* (1 point): Your ATM correctly computes withdrawals and deposits down to the cent.
* (1 point): The ATM has overdraft detection (attempting to take out more money than is available) in a way that is clear to the user.
* (1 point): Your ATM handles invalid inputs and alerts the user as such. For example, the user enters an option that is not supported or tries to deposit a negative amount. However other invalid inputs such as strings when the prompt asks for a number can be ignored.
* (1 point): Your code makes use of any combination of concepts covered in class thus far. Concepts so far include, but are not limited to:
  * Input/output: `cin`, `cout`, `argc`, `argv`
  * Types: `int`, `float`, `string`, `char`, `long`, `double`
  * Conditionals: `if` `else if` `else`
  * Iteration: `for`, `while`, or `do-while`
  * Logical operators: `&&`, `||`, `!`
  * Comparison operators: `==`, `!=`, `>`, `<`, `>=`, `<=`
* (1 point): Your code makes <i>efficient</i> use of any of the coding concepts above. Efficient means reasonably concise code that accomplishes the task and is readable. For example, checking if a number is not equal to 5, use `if (number != 5)` rather than `if (number < 5 || number > 5)`. To declare and initialize an `int` to `10`, use `int number = 10` rather than `int number = 1; number = 10;` Come by office hours for an over-the-shoulder code review and let's make your code super clean!
* (2 points): Your code submission takes place over 2 or more non-trivial commits. A non-trivial commit can be one of:
  * Adds a feature that wasn't previously supported
  * Fixes a bug
  * Refactors existing code, either to conform to the style guide or to improve readability and/or maintainability
