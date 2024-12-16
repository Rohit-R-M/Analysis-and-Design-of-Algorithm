//Bubble Sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int  i,j,n;
	float start,end;
	
	printf("Enter the size of an array:\n");
	scanf("%d",&n);
	
	int arr[n];
	
	
	printf("Generating %d random elements (up to 1000):\n", n);
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
        printf("%d ", arr[i]);
    }
    printf("\n");
		
	start = clock();
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	end =clock();
	float cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	
	printf("Elements in Sorted Order\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		
	printf("Time taken for Bubble Sort: %f seconds\n", cpu_time_used);

}