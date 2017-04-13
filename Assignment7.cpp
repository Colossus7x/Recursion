//Written by Zachary Pilkenton
//Programming Assignment 7 EX. 6, 7, 8, 9, 10 
#include <iostream>
#include <string>
#include "recursiveFunctions.h"
using namespace std; 

int main(){
		//declaring variables 
	int userChoice; 
	string p; 
	
	//calling function to show menu
	displayMessage(); 
		//taking in the users decision
		cin >> userChoice; 
	//if user wants to use the palindrome function 
	if(userChoice == 1){
		cout << "Enter a word to test: \n";
			cin >> p;  
		palindrome(p);
		//if palindrome returns true 
		if(palindrome(p) == true){
			cout << p << " is a palindrome\n";
		}
		//if palindrome returns false 
		else{
			cout << p << " is NOT a palindrome\n"; 
		}
	}
	//if user wants to reverse a string	
	if(userChoice == 2){
		cout << "Enter a word to reverse: \n";
			cin >> p; 
		
		cout << "Reversed string is: " << reverseString(p) << endl;  
	}
	//if user wants to reverse the digits on an integer
	if(userChoice == 3){
		int i; 
		cout << "Enter an integer to be reversed:\n";
			cin >> i; 
		cout << "The reversed integer is: ";
		reverseInteger(i);
	 
	}
	//if the user wants to raise an integer by a power 
	if(userChoice == 4){
		int x, y; 

		cout << "Enter an integer to be raised: \n";
			cin >> x;
		cout << "Enter the power to raise: \n";
			cin >> y; 
		cout << "The value of " << x << " raised by " << y << " is: " << power(x, y);
		
	}	
	//if the user wants to find the Greatest Common Denominator
	if(userChoice == 5){
		int a, b; 
		cout << "Enter the first integer: \n"; 
			cin >> a; 
		cout << "Enter the second integer \n"; 
			cin >> b;
		cout << "The Greatest Common Divisor of " << a << " and " << b << " is: " << GCD(a, b); 
	}
	
	return 0; 
}
