//COnsecative two number
#include<stdio.h>
int main()
{
	int n,m,t,gcd;
	printf("Enter the Numeratot & Denomenator: \n");
	scanf("%d%d",&m,&n);
	
	int count=0;
    t=(m<n)?m:n;
    
    while(t>0)
    {
    	count++;
    	if(m%t==0 && n%t==0)
    	{
    		gcd=t;
    		break;
		}
		t--;
	}
	
	printf("GCD: %d\n",gcd);
	printf("No.of iterations:%d",count);
	

}