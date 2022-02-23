#include <stdio.h>

int main(){
	char c;
	int n=97;
	
	scanf("%c", &c);
	
	while(1){
		printf("%c\n", n);
		
		if(n == (int)c)
			break;
			
		n++;
	}
	return 0;
}
