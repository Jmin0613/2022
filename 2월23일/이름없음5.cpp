#include <stdio.h>

int main(){
	int n;
	while(1){
		scanf("%d", &n);
		if(n==0)
			break;
		else
			printf("%d\n", n);
	}
	return 0;
}
