#include <stdio.h>

int main(){
	int n,i,k,max=0,j=0;
	scanf("%d",&n);
	int l[1001]={0};
	int t[n];
	for(i=0;i<n;i++){
		scanf("%d",&k);
		l[k]++;
	}
	for(i=1;i<=1000;i++){
		if(max<l[i]){
			t[j]=i;
			max=i;
			j++;
		}
		
	}
	for(i=0;i<j;i++)
		printf("%d ",t[i]);
	return 0;
}
