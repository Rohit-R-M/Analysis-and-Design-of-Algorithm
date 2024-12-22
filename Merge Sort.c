//Merge Sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int arr[],int low,int mid,int high)
{
	int i=low,j=mid+1,k=0;
	int temp[high-low+1];
	
	while(i<=mid && j<= high)
	{
		if(arr[i]<arr[j])
			temp[k++]=arr[i++];
		else
			temp[k++]=arr[j++];
	}
	
	while(i<=mid)
		temp[k++]=arr[i++];
		
	while(j<=high)
		temp[k++]=arr[j++];
		
	for(i=low,k=0;i<=high;i++,k++)
		arr[i]=temp[k];		
	
}

void mergesort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}	
}

int main()
{
	int n,i;
	
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Generating %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%1000;
		printf("%d ",arr[i]);
	}
	
	float start = clock();
	
	mergesort(arr,0,n-1);
	
	float end = clock();
	
	float tt=end-start/CLOCKS_PER_SEC;
	
	printf("\nSorted Elements are:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		
	printf("\nTotal Time Taken %f",tt);

}
