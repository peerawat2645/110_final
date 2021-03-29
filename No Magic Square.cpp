#include <stdio.h>
int magic(int n){
	int i,j,s,e=0,k=0,t=0;
	int a[n][n];
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
				s+=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			e+=a[i][j];
		}
		if(s==e)
			k=1;
		else{
			k=0;
			break;
		}
		
		e=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			t+=a[j][i];
		}
		if(s==t)
			k=1;
		else{
			k=0;
			break;
		}
		t=0;
	}
	return k;
}
int main(){
	int n,m,g,k[3],i;
		scanf("%d %d %d",&n,&m,&g);
	k[0]=magic(n);
	k[1]=magic(m);
	k[2]=magic(g);
		
	for(i=0;i<3;i++){
		if(k[i]==1)
			printf("no");
		else
			printf("yes");
		printf("\n");
	}
		
	return 0;
}
