#include <stdio.h>
int magic(int n){
	int i,j,s,e=0,k=0,t=0,u=0,c=0;;
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
			if((i+j)==2){
				u+=a[i][j];
			}			
		}
	}
	if(s==u){
		c++;
	}
	else
		return 0;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			e+=a[i][j];
		}
		printf("%d",e);
		if(s==e)
		{
			c++;
		}
		else{
			return 0;
		}
		e=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			t+=a[j][i];
		}
		printf("%d",t);
		if(s==t)
		{
			c++;
		}
		else{
			return 0;
		}
		t=0;
	}
	if(c==((n*2)+1))
		return 1;
}
int main(){
	int n[3],m,g,k[3],i;
	for(i-0;i<3;i++)
		scanf("%d",&n[i]);	
	for(i=0;i<3;i++){
		if(n[i]<=20){
			k[i]=magic(n[i]);
		}
	}
	/*for(i=0;i<3;i++){
			if(k[i]==1)
				printf("no");
			else
				printf("yes");
			printf("\n");
	}*/
	return 0;
}

