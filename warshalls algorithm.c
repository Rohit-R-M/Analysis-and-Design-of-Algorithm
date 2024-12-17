/* 7(a).Compute the transitive closure of a given directed graph using Warshall's algorithm. */
#include<stdio.h>
#include<stdlib.h>

void warshell(int n, int **a) 
{
    for (int k = 0; k < n; k++) 
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                a[i][j] = a[i][j] || (a[i][k] && a[k][j]);         
}

int main() 
{
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);
   
    int **a = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) 
        a[i] = (int *)malloc(n * sizeof(int));

    printf("Enter adjacency matrix\n");
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Initial adjacency matrix:\n");
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    warshell(n, a);

    printf("Updated adjacency matrix after applying Warshall's algorithm:\n");
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) 
	{
        free(a[i]);
    }
    free(a);

    return 0;
}