#include <stdio.h>

int main(){
	int n,c,k,a,b=0,i,y=1,z;
	int p[32750]={0};
	scanf("%d %d",&n,&c);
	a=n;
	while(a!=0){
		p[b]=a%10;
		a/=10;
		b++;
	}
	while(y){
		n++;
		b=0;
		a=n;
		while(a!=0){
			p[b]=a%10;
			a/=10;
			if(c==p[b]){
				z=n;
				y=0;
				break;
			}
				
			b++;
		}	
	}
	printf("%d",z);
	return 0;
}
	
