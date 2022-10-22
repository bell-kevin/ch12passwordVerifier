// ch12passwordVerifier.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Chapter 12 Password Verifier by Kevin Bell\n\n";
	cout << "This program checks a password to ensure it meets our specifications for secure passwords.\n";
	cout << "Enter a password to check: ";
	string password;
	cin >> password;
	int minPasswordLength = 6;
	int length = password.length();
	int upper = 0, lower = 0, digit = 0;
	for (int i = 0; i < length; i++)
	{
		if (isupper(password[i]))
		{
			upper++;
		}
		else if (islower(password[i]))
		{
			lower++;
		}
		else if (isdigit(password[i]))
		{
			digit++;
		}
	} // end for loop
	if (length < minPasswordLength)
	{
		cout << "The password must be at least 6 characters long.\n";
	}
	if (upper == 0)
	{
		cout << "The password must contain at least one uppercase letter.\n";
	}
	if (lower == 0)
	{
		cout << "The password must contain at least one lowercase letter.\n";
	}
	if (digit == 0)
	{
		cout << "The password must contain at least one digit.\n";
	}
	if (length >= minPasswordLength && upper > 0 && lower > 0 && digit > 0)
	{
		cout << "The password is valid. Congratulations!\n";
	} // end if
	system("pause");
	return 0;
} // end main
