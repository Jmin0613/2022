#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int *nPtr1;
	
	scanf("%d", &n);
	nPtr1=&n;
	
	int *nPtr2;
	nPtr2 = malloc(sizeof(int));
	
	int i=0;
	int a;
	for(;i<n;i++){
		scanf("%d", &a);
		nPtr2[i]=a;
	}
	
	for(i=0;i<n;i++){
		printf("%d\n", nPtr2[i]);
	}
	free(nPtr1);
	free(nPtr2); 
	return 0;
}
