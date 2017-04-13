#include <iostream>
#include <string>

//function to display choices 
void displayMessage(){
	std::cout << "Choose the function you wish to use: \n"; 
	std::cout << "1. Deciding if string is a palindrome. \n"; 
	std::cout << "2. Writing a string backwards. \n"; 
	std::cout << "3. Reversing an integer. \n"; 
	std::cout << "4. Calculating a power. \n";
	std::cout << "5. Finding the Greatest Common Divisor \n"; 	
}
//function for finding if palindrome recursively 
bool palindrome(std::string p){
	int size; 
	size = p.length(); 
	//going through the string to see if each opposite letter equals each other 
	if(p[0] != p[size - 1]){ 
		return false; 
	}
	//if the string is just one letter or less it is a palindrome
	else if(p.length() <= 1){
		return true; 
	}
	else{
		//recursive statement using a substring to break the string down after each run through 
		return palindrome(p.substr(1, size - 2)); 
	}
}
//reversing a string 
std::string reverseString(std::string s){
	//in case the string is just one letter 
	if(s.length() == 1){
        return s;
    }
    //recursively calling the function using a substring 
	else{
        return reverseString(s.substr(1, s.length())) + s.at(0);
    }
}
//reversing an integer
void reverseInteger(int i){
	//in case the integer is number less than 10
	if(i < 10){
		std::cout << i; 
	}
	else{
		//% by 10 to print out last digit then recursively calling the reverseInteger function 
		std::cout << i % 10; 
		reverseInteger(i/10); 
	}	
}
//taking the power of a an integer
int power(int x, int y){
	if(y == 0){
		return 1;
	}
	if(y == 1){
		return x; 
	}
	//recursive statement called for when y < 0 
	if(y < 0){
		return (1/(power(x, -y))); 
	}
	//recursive statement called 
	else{
		return x*power(x, y - 1);
	}
}
//GCD
int GCD(int x, int y){
	//return x if the y value is 0
	if(y == 0){
		return x; 
	}
	//recursive statement for the Greatest Common Divisor
	else{
		return GCD(y, x%y); 
	}
	
}

