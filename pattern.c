#include<stdio.h>
int main()
{
	int number,prints=1;
	scanf("%d",&number);
	for(int i=number;i>=1;i--)
	{
		for(int j=1;j<=i-1;j++){
			printf(" ");
		}
		if(i%2==0)
		{
			for(int k=1;k<=prints;k++)
			{
				printf("&");
			}
		}
		else
		{
			for(int k=1;k<=prints;k++)
			{
				printf("*");
			}
		}
		printf("\n");
		prints++;
	}
	return 0;
}
