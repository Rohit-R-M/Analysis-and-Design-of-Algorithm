/* 7(b) Compute the all pairs shortest path matrix using Floyd’s algorithm. */
#include<stdio.h>

void floyds(int n,int dist[n][n])
{
	int i,j,k;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				if(dist[i][k]+dist[k][j]<dist[i][j])
					dist[i][j]=dist[i][k]+dist[k][j];
}
int main()
{
	int i,j,n;
	printf("Enter the number of vertices:\n");
	scanf("%d",&n);
	
	int dist[n][n];
	
	printf("Enter adjacency matrix\n");
    for (i =0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &dist[i][j]);
        }
    }
    
    printf("Cost matrix:\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%d\t",dist[i][j]);
		}
		printf("\n");
	}
	
	floyds(n,dist);
	
	printf("Shortest distance matrix:\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%d\t",dist[i][j]);
		}
		printf("\n");
	}
	return 0;
}