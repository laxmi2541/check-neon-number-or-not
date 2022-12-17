#include<stdio.h>
int main()
{
	int a,sum=0,n;
	printf("Enter a number");
	scanf("%d",&a);
	n=a*a;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	if(a==sum)
	{
		printf("%d is a neon number",a);
	}
	else
	printf("%d is not a neon number",a);
	return 0;
}
	
