/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n];
	for(int i = 0; i < n; i++){
		test_array[i] = atoi(argv[i + 1]);
	}
	//Your codes here
	int a[n/2], b[n/2];
	
	for(int i = 0; i < n; i++){
		if(i <= n/2 -1) a[i] = test_array[i];
		else b[i - n/2] = test_array[i];
	}

	for(int i = 0; i < n/2; i++){
		for(int j = i; j < n/2; j++){
			if(a[i] > a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(int i = 0; i < n/2; i++){
		for(int j = i; j < n/2; j++){
			if(b[i] < b[j]){
				int t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
	}


	for(int i = 0; i < n; i++){
		if(i <= n/2 - 1) printf("%d ", a[i]);
		else printf("%d ", b[i - n/2]);
	}
	
	return 0;
}
