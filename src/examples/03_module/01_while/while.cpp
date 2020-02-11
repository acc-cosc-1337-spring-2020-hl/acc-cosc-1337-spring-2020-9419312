
#include "while.h"
//Using a while loop write code for sum_of_squares function that accepts an int and returns  
//the sum of all the squares of that number from 1 to the number. 
//Example: sum_of_squares(4) 
//1*1 + 2 * 2 + 3*3 + 4*4 = 30
int sum_of_square(int num)
{
	int sum = 0;
	int count = 1;

	while (count <= num)
	{
		sum = sum + count * count; 

		count = count + 1;
		
	}

	return sum;
}




//Using a while loop write code for display function that accepts a string and displays 
//each character of the string in a line
//Example: display("Hello")
/*
result:

H
e
l
l
0

*/
