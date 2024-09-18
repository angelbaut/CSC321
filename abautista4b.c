// Angel Bautista
// csc-321


#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int x= 0;
	double y= 0.0;
	char c = 'a';
	float z = 0.0;

	printf("enter an integer ");
	scanf("%d",&x);
	
	if(x<10)
	{ 
		printf("your number is less than 10\n");
	}
	else if(x==10)
	{
		printf("your number is 10 \n");
	}	
	else 
	{
		printf("your number is grater than 10\n");
	}
	printf("Enter a double:");
	scanf("%lf",&y);

	if(y>2)
	{
		printf("your number is larger than 2 \n");
	}
	else if (y==2)
	{
		printf("Your Number is 2 you win \n");
	}
	else
	{
		printf("your Number is less than 2 \n");
	}

	printf("Enter a character");
	scanf(" %c",&c);

	if (c== 122)
	{
		printf("You chose z the final letter \n");
	}
	else 
	{
		printf("You chose a letter from A-Y\n");
	}


	printf("Enter a float");
	scanf("%f",&z);

	if(z<100)
	{
		printf("You chosse a number less than 100\n");
	}
	else if (z==100)
	{
		printf("You chosse 100\n");
	}
	else
	{
		printf("you chose a number larger than 100 \n");
	}

	return EXIT_SUCCESS;

}
