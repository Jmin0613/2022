#include <stdio.h>

int main(){
	int r, g, b;
	scanf("%d %d %d", &r, &g, &b);
	
	int i,j,k;
	int cnt=0;
	for(i=0;i<r;i++){
		for(j=0;j<g;j++){
			for(k=0;k<b;k++){
				printf("%d %d %d \n",i,j,k);
				cnt++;
			}
		}
	}
	printf("%d \n",cnt);
	return 0;
}
