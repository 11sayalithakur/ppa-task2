#include<stdio.h>

void main()
{
	int a[50],b[50],size,i,j,n,m,count=0;

	printf("Enter number of elements\n");
	scanf("%d",&size);
	printf("Enter elements in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Prime numbers are \n");
	for(i=0;i<size;i++)
	{
		n=0;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				n++;
				break;
			}
		}
	
		if(n==0)
		{
			//printf("%d \n",a[i]);
			b[i]=a[i];
			//printf("\n\n");
			
		}
		if(n==0)
		{ 
		printf("%d \n",b[i]);
		i++;
		}
		
	}
	
}
