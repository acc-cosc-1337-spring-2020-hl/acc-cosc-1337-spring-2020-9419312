#include<string>
#include"vectors.h"
#include<iostream>

using std::cout; using std::cin; using std::string;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main()
{
	int choice = 1;
	while (choice == 1 || choice == 2) {
		cout << " Prss 1 for Get Max from vector or press 2 for primes\n";
		cin >> choice;
		if (choice == 1) {
			vector<int> vec;
			int i = 1;
			while (i <= 5) {
				int num;
				cout << "Num" << i << ":\n";
				vec.push_back(num);
				++i;
			}
			int max = get_get_max_from_vector(vec);
			cout << "Max number from vectors is : " << max << "\n";


		}
		else {
			int num;
			cout << "Enter a number \n";

			cin >> num;
			vector<int>primes = vector_of_primes(num);
			cout << " list of primes: \n \n";

			for (int prime : primes) {
				cout << prime << "\n";
			}
			cout << "\n";
		}

	}
	return 0;
}
