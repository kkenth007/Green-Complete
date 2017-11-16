#include<stdio.h>
main()
{
	float mid,final,hw,x,mid_a,final_a,hw_a;
	char grade;
	printf("Enter a score Midterm 0-100 : ");
	scanf("%f",&mid);
	printf("Enter a score Final 0-100 : ");
	scanf("%f",&final);
	printf("Enter a score Homework 0-10: ");
	scanf("%",&hw);
	mid_a=(mid*40)/100;
	final_a=(final*50)/100;
	hw_a=(hw*10)/100;
	x=mid_a+final_a+hw_a;
	printf("Score is : %.2f",x);
	if(x>=90 && x<=100)
	printf("\nYou Grade is : A");
	else if(x>=85)
	printf("\nYou Grade is : B+");
	else if(x>=80)
	printf("\nYou Grade is : B");
	else if(x>=70)
	printf("\nYou Grade is : C+");
	else if(x>=60)
	printf("\nYou Grade is : C");
	else if(x>=55)
	printf("\nYou Grade is : D+");
	else if(x>=50)
	printf("\nYou Grade is : D");
	else if(x<50)
	printf("\nYou Grade is : F");
	else
	printf("\nError");
}
