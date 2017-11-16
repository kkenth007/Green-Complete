#include<stdio.h>
main()
{
	float mid,final,hw;
	float mid_a,final_a,hw_a,Total;
	printf("Enter a score Midterm : ");
	scanf("%f",&mid);
	printf("Enter a score Final : ");
	scanf("%f",&final);
	printf("Enter a score Homework : ");
	scanf("%f",&hw);
	mid_a=(mid*40)/100;
	final_a=(final*50)/100;
	hw_a=hw*10/100;
	Total=mid_a+final_a+hw_a;
	printf("Score is : %.2f",Total);
}
