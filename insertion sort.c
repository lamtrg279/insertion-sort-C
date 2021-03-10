#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void insertion(int number[], int count);

int main(int argc, char *argv[]) {	
	int i, count, temp, number[10];
	
	printf("Enter how many values in the array?: ");
	scanf("%d",&count);
	printf("Enter numbers: ", count);
	   
	for(i=0;i<count;i++)
    	scanf("%d",&number[i]);	
    	
    insertion(number, count);
    
    for(i=0;i<count;i++)
    	printf("%d ",number[i]);
	
	return 0;
}

void insertion(int number[], int count) {	//count = length of array
	int i, j;
	int temp;
	for (i = 1; i < count; i++) {			//Start at the second element of the array to the last element
		temp = number[i];					//Keep track of the number we want to sort	
		j = i - 1;							//j = i - 1 so that we can compare i to the previous number
		while (temp < number[j] && j >= 0) {	//If temp is smaller than the previous number then
			number[j + 1] = number[j];					//move that number 1 position to the left and decrement j 
			j = j - 1;							//j goes back to check for more elements
		}
		number[j + 1] = temp;
	}
}
