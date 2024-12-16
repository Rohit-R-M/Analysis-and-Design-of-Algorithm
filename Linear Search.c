//Linear Search

#include<stdio.h>

int main()
{
	int i,j,n,key;
	
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("Enter the element to search:\n");
	scanf("%d",&key);
	
	int count=0,flag=0,result=0;
	
		for(i=0;i<n;i++)
		{
			count++;
			if(arr[i]==key)
			{
				result=i+1;
				flag=1;
				break;
			}
		}
		
	(flag==1)?printf("Element found at %d position\n",result):printf("Not found\n");
	printf("Nuumber Of itration : %d",count);
	
	return 0;
}