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

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
