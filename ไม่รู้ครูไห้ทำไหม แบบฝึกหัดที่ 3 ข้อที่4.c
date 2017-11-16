#include<stdio.h>
main()
{
	int x, y,max;
	printf("Enter number 1: ");
	scanf("%d",&x);
	printf("Enter number 2: ");
	scanf("%d",&y);
	if(x> y){
		max=x;
	}else
	 max= y;
	if(x==y){
		max=x;
	}else
	max= y;
	printf("Maximum is %d",max);	
}
