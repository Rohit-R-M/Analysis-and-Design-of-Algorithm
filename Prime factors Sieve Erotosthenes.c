//Sieve Erotosthenes Prime factor

#include<stdio.h>
#include<math.h>

int main(){
	int n,m,i,j;
	int arr[100],l[100];
	printf("Enter the 2 numbers: \n");
	scanf("%d%d",&n,&m);
	
	for(i=2;i<m;i++){
		arr[i]=i;
	}
	
	for(i=n;i<sqrt(m);i++){
		if(arr[i]){
			for(j=i*i;j<m;j++){
				arr[j]=0;
			}
		}
	}
	
	printf("Prime numbers up to %d:\n", m);
    for (i = n; i <= m; i++) {
        if (arr[i]) {
            printf("%d ", i);  
        }
    }
		
}