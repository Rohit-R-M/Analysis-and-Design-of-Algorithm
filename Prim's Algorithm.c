/* 9. Find Minimum Cost Spanning Tree of a given undirected graph using Prim’s algorithm. */

#include<stdio.h>
#include<stdbool.h>
#define MAX 100

int min_cost(int key[],bool mst[],int v)
{
	int min=999;
	int min_index,i;
	
	for(i=0;i<v;i++)
	{
		if(mst[i]==false && key[i]<min)
		{
			min=key[i];
			min_index=i;
		}
	}
	return min_index;
}

void print_mst(int parent[],int graph[MAX][MAX],int v)
{
	int i;
	
	printf("Edge\tWeight\n");
	for(i=1;i<v;i++)
	{
		printf("[%d-%d]\t%d\n",parent[i],i,graph[i][parent[i]]);
	}
}

int prims(int v,int graph[MAX][MAX])
{
	int key[MAX],parent[MAX];
	bool mst[MAX];
	int i,j,k;
	
	for(i=0;i<v;i++)
	{
		key[i]=999;
		mst[i]=false;
	}
	
	key[0]=0;
	parent[0]=-1;
	
	for(i=0;i<v-1;i++)
	{
		k=min_cost(key,mst,v);
		mst[k]=true;
		
		for(j=0;j<v;j++)
		{
			if(graph[k][j] && mst[j]==false && graph[k][j]<key[j])
			{
				key[j]=graph[k][j];
				parent[j]=k;
			}
		}
	}
	print_mst(parent,graph,v);
}

int main()
{
	int v,i,j;
	
	printf("Enter the number of vertices:\n");
	scanf("%d",&v);
	
	int graph[MAX][MAX];
	
	printf("Enter the vetex and edge:\n");
	for(i=0;i<v;i++)
		for(j=0;j<v;j++)
			scanf("%d",&graph[i][j]);
			
	prims(v,graph);
	return 0;
}
/*
0 2 0 1 4 0 0
2 0 5 0 0 0 0
0 5 0 2 0 4 0
1 0 2 0 0 0 0 
4 0 0 0 0 3 6
0 0 4 0 3 0 2
0 0 0 0 6 2 0

0 2 0 6
2 0 3 8
0 3 0 0
6 8 0 0
*/