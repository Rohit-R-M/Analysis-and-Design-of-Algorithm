/*5 b. Implement the following algorithms to 
    Check whether a given graph is connected or not using DFS method. */
#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

int adjMatrix[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];
int numVertices;

void dfs(int vertex) 
{
    visited[vertex] = true;
    
    printf("%c ", 'A' + vertex);

    for (int i = 0; i < numVertices; i++) 
	{
        if (adjMatrix[vertex][i] == 1 && !visited[i])
		{
            dfs(i);
        }
    }
}
int isconnected()
{
	int i;
	for(i=0;i<numVertices;i++)
	{
		if(!visited[i])
			return 0;
	}
	return 1;
}
int main() 
{
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    printf("Enter the adjacency matrix (0 or 1):\n");
    for (int i = 0; i < numVertices; i++) 
	{
        for (int j = 0; j < numVertices; j++) 
		{
            scanf("%d", &adjMatrix[i][j]);
        }
    }

    // Initialize all vertices as not visited
    for (int i = 0; i < numVertices; i++) 
	{
        visited[i] = false;
    }

    // Start DFS traversal from vertex 0 (or any vertex you choose)
    printf("DFS Traversal starting from vertex A:\n");
    dfs(0);
    
    if(isconnected())
    	printf("\nGraph is connected");
    else
    	printf("\nGraph is not connected");
    return 0;
}
/*
0 0 1 1 0 1
0 0 0 0 1 1
1 0 0 1 0 1
1 0 1 0 0 0
1 1 0 0 0 1
0 1 1 0 1 0
*/
