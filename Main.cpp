#include <iostream>
#include <stdlib.h>

int Euclid(int M, int N) {								// Function that performs the euclidean algorithm.

	int remainder = 1;									/* This variable had to be assigned to any value other than 0, cannot be set to NULL.
														 * Setting the variable to either 0 or NULL will not provide the desired results */
	while (remainder != 0) { 

		std::div_t divide;								// Look up std::div / std::div_t for more documentation.

		divide = std::div(M, N);						

		remainder = divide.rem;							

		M = N;

		if (remainder != 0) { N = remainder; }			// If statement will prevent setting N = remainder when remainder = 0. 

	}
	
	return N;											// When remainder=0 , the value of N is the greatest common divisor.
}

int main(int argc, char *argv[]) {						
														// Next few Lines provide outputs and access to user input via console.
	int FirstNum = 0, SecondNum = 0;	

	std::cout << "Enter First Number: " << std::flush;	// No Exception Handling measures made.
		std::cin >> FirstNum;							// (letters will cause fatal errors).
		system("CLS");																	

	std::cout << "Enter Second Number: "<< std::flush;
		std::cin >> SecondNum;
		system("CLS");								
			
	std::cout << "Greatest Common Divisor:\t" << Euclid(FirstNum, SecondNum) <<"\n";	
	

	system("Pause");									// End of program
}
