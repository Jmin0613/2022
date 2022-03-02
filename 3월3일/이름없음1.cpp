#include <stdio.h>

int main(){
	int a;
	scanf("%X", &a);
	
	int i;
	for(i=1;i<=15;i++){
		printf("%X * %X = %X \n", a, i, a*i);
	}
	return 0;
}
