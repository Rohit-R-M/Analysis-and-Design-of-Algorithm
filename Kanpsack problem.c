//kanpsack problem using dynamic programming approach
#include<stdio.h>
 
int max(int a,int b)
{  
	return a>b?a:b;  
}  

void knapSack(int w, int wt[], int val[], int n)
{  
	int k[n+1][w+1];  
	for(int i=0;i<=n;i++)
	{    
  	    for(int j=0;j<=w;j++)
		{    
			if(i==0 || j==0)  
        		k[i][j]=0;  
      		else if(wt[i-1]<=j)  
        		k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]], k[i-1][j]);  
      		else  
        		k[i][j]=k[i-1][j];  
    		}  
 	}
	printf("\nKnapsack matrix:\n");  
	for(int i=0;i<=n;i++)
	{  
    		for(int j=0;j<=w;j++)
		{  
    			printf("%d\t",k[i][j]);  
    		}  
    		printf("\n");  
	}
 	printf("\nMaximum profit:%d",k[n][w]);  
} 
int main()
{  
	int w;  
	
	printf("Enter the max size of sack:");  
	scanf("%d",&w);  
	
	int n;
	printf("Enter the number of items:");  
	scanf("%d",&n);  
	int val[n],wt[n];  
	
	printf("Enter the Weight:\n");  
	for(int i=0;i<n;i++)
	{    
		printf("Iteam %d Weight= ",i+1);  
	    scanf("%d",&wt[i]);  
	}  
	
	printf("\nEnter the Profit:\n");  
	for(int i=0;i<n;i++)
	{  
		printf("Iteam %d Profit= ",i+1);  
	    scanf("%d",&val[i]);  
	}  
	knapSack(w,wt,val,n);  
	
	return 0; 
}
