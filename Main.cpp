#include <iostream>
#include <stdlib.h>

// Function that performs the euclidean algorithm.
int Euclid(int M, int N) {								
/* This variable had to be assigned to any value other than 0, cannot be set to NULL.
* Setting the variable to either 0 or NULL will not provide the desired results */
	int remainder = 1;	

	while (remainder != 0) { 

// Look up std::div / std::div_t for more documentation.
		std::div_t divide;								

		divide = std::div(M, N);						

		remainder = divide.rem;							

		M = N;

// If statement will prevent setting N = remainder when remainder = 0.
		if (remainder != 0) { N = remainder; }

	}

// When remainder=0 , the value of N is the greatest common divisor.	
	return N;
}

int main(int argc, char *argv[]) {						
// Next few Lines provide outputs and access to user input via console.

	int FirstNum = 0, SecondNum = 0;	

// No Exception Handling measures made.
// (letters will cause fatal errors).	

	std::cout << "Enter First Number: " << std::flush;	
		std::cin >> FirstNum;							
		system("CLS");																	

	std::cout << "Enter Second Number: "<< std::flush;
		std::cin >> SecondNum;
		system("CLS");								
			
	std::cout << "Greatest Common Divisor:\t" << Euclid(FirstNum, SecondNum) <<"\n";	
	

	system("Pause");// End of program									
}
