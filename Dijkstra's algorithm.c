//Dijkstras algorithm

#include<stdio.h>

void dijkstras(int n,int s,int cost[n][n],int dist[10])
{
	int i,v,count=0,min,visited[10];
	
	for(i=0;i<n;i++)
	{
		visited[i]=0;
		dist[i]=cost[s][i];
	}
	
	visited[s]=1;
	dist[s]=0;
	
	while(count<= n)
	{
		min=999;
		for(i=0;i<n;i++)
		{
			if(dist[i]<min && visited[i]==0)
			{
				min=dist[i];
				v=i;
			}
		}
		visited[v]=1;
		count++;
		for(i=0;i<n;i++)
			if(dist[v]+cost[v][i]<dist[i])
				dist[i]=dist[v]+cost[v][i];
	}
}

int main()
{
	int i,j,n,s,dist[10];
	
	printf("Enter the no.of vertex:\n");
	scanf("%d",&n);
	
	int cost[n][n];
	
	printf("Enter the matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	
	printf("Enter the source node:\n");
	scanf("%d",&s);
	
	dijkstras(n,s,cost,dist);
	
	printf("Distance from %d node to other node:",s);
	for(i=0;i<n;i++)
		if(s!=i)
			printf("%d-%d\t%d\n",s,i,dist[i]);
				
}
/*
0 4 0 0 0 0 0 8 0  
4 0 8 0 0 0 0 11 0  
0 8 0 7 0 4 0 0 2  
0 0 7 0 9 14 0 0 0  
0 0 0 9 0 10 0 0 0  
0 0 4 14 10 0 2 0 0  
0 0 0 0 0 2 0 1 6  
8 11 0 0 0 0 1 0 7  
0 0 2 0 0 0 6 7 0  


*/