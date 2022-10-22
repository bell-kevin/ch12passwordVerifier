# ch12passwordVerifier

Create a project that checks the user's password to ensure it meets our specifications for secure passwords. Those specifications are:

it must be 6 characters long
it must have at least one digit
it must have both uppercase and lowercase letters
Ask the user for a password. Check for each of the specifications, and list all problems with the password on the screen. If it passes the tests, then write "congratulations".

NOTE: Please refer to Table 4-12 for character testing functions that you might need to use in this project. 

Examples testing possible errors:

Good: has lowercase letters
Bad: incorrect length, no digits, no uppercase letters,

![Password 1](https://github.com/bell-kevin/ch12passwordVerifier/blob/main/password.PNG)

Good: correct length, has digits
Bad: no uppercase letters, no lowercase letters

Password 2

Good: correct length, has lowercase letters
Bad: doesn't have digits, doesn't have uppercase letters

Password 3

Good: correct length, has digits, has lowercase letters
Bad: doesn't have uppercase letters

Password 4

Good: long enough, has digits, has uppercase letters, has lowercase letters
Bad: nothing -- this one is valid

![Password 5](https://github.com/bell-kevin/ch12passwordVerifier/blob/main/password6.PNG)

Create a test table with at least 8 different passwords to test all the possibilities for incorrect passwords. Run the project and test all 8 passwords, taking screenshots of each result.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots, the table of test cases  AND the root folder for the project.
