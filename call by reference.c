#include <stdio.h>
#include <stdlib.h>

int main(){

	int num1, num2, result;


	/*Accept the numbers from the user*/
	printf("\nEnter the two number: ");
	scanf("%d %d", &num1, &num2);

	/* Pass the value of num1 and num2 as parameter to function add.
	    The value returned is stored in the variable result
	 */

	result = add(&num1, &num2);

	printf("\nAddition of %d and %d is %d", num1, num2, result);

}

/*Defining the function add()*/
int add(int *no1, int *no2)
{
	int res;
	res = *no1 + *no2;
	return res;
}
