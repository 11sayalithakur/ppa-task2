#include<stdio.h>
void bubble(int a[],int n)
{
	int i,j,temp;
	for(i=0,j=i+1;i<n,j<n-1;i++,j++)
	{
		//for(j=i+1;j<n;j++)
		//{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		//}
	}
}


int main()
{
	int n,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	bubble(a,n);
	
	printf("All elements\n");
	for(i=0;i<n-2;i++)
	{
		printf("%d\t",a[i]);
	}

return 0;
}

