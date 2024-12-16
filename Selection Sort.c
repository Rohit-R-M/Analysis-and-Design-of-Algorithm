//Selection sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int  i,j,min,n;
	float start,end,total_time;
	
	printf("Enter the size of an array:\n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%1000;
		printf("%d ",arr[i]);
	}
	
	start = clock();
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	end =clock();
	total_time= (end-start)/CLOCKS_PER_SEC;
	
	printf("\nElements in Sorted Order\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		
	printf("\nTime taken for Selection Sort: %f seconds\n", total_time);

}