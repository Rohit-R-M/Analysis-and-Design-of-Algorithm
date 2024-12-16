//GCD fo two numbers
#include<stdio.h>
int main(){
	int n,d,r;
	printf("Enter the Numeratot & Denomenator: \n");
	scanf("%d%d",&n,&d);
	
	int count=0;
	
	while(d!=0){
		count++;
		r=n%d;
		n=d;
		d=r;
	}
	
	printf("GCD is %d\n",n);
		printf("Number Of itration : %d",count);

}