//Binary Search

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
	
	int count=0,result=-1;

	
	int low=0;
	int high=n-1;
	int mid=0;
	
	while(low<=high)
	{
		count++;
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			result=mid+1;
			break;
		}
		if(arr[mid]<key)
			low=mid+1;
		else
			high=mid-1;	
	}
	
	(result!=-1)?printf("Element found at %d position\n",result):printf("Not found\n");
	printf("Number Of itration : %d",count);
		
	return 0;
}