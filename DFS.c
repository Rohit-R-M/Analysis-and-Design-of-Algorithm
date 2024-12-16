//Depth First Search
#include<stdio.h>
#define MAX 100

void dfs(int graph[MAX][MAX],int visit[MAX],int v,int n)
{
	int i=0;
	visit[v]=1;
	printf("%d ",v);
	for(i=0;i<n;i++)
	{
		if(graph[v][i]==1 && !visit[i])
			dfs(graph,visit,i,n);
	}
}

int main()
{
	int vertice,edge,i,v,u,graph[MAX][MAX]={0};
	
	printf("Enter the number of vertices:\n");
	scanf("%d",&vertice);
	
	printf("Enter the number of edges:\n");
	scanf("%d",&edge);
	
	printf("Enter the edges of (v) & (u):\n");
	for(i=0;i<edge;i++)
	{
		scanf("%d %d",&u,&v);  
		graph[u][v]=1;
		graph[u][v]=1;
	}
	int visit[MAX]={0};
	dfs(graph,visit,1,vertice+1);
	return 0;
	
}

