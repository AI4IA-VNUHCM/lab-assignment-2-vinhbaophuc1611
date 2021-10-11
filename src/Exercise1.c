/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result = 0;
	//Your codes here

	//vary extra cost
	int e_c = 0;
	if(distance > 30){
		e_c = (distance - 30.0) * 5000;
		distance -= distance - 30.0;//distance = 30;
	}

	distance -= 2;

	while(distance > 0){
		distance -= 0.25;
		result += 2000;
	}

	printf("%d", result + 15000 + e_c);
	return 0;
}
