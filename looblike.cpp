#include <stdio.h>

int main(){
	int n,i,k,max=0,min,j=0,a=0;
	scanf("%d",&n);
	if(n>=2&&n<=1000){
		int l[1001]={0};
		int t[n];
		for(i=0;i<n;i++){
			scanf("%d",&k);
			if(k>=1&&k<=10000){
				l[k]++;
			}
		}
		for(i=1;i<=1000;i++){
			if(max<l[i]){	
				max=l[i];
			}
		}
		for(i=1;i<=1000;i++)
			if(l[i]==max)
			{
				t[j]=i;
				j++;
			}
		for(i=0;i<j;i++)
			printf("%d ",t[i]);
	}
	
	return 0;
}
