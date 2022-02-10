#include <stdio.h>

int main(){
	char data[20];
	
	int i;
	for(i=0;data[i]!='\0';i++){
		scanf("%c", &data[i]);
	}
	
	for(i=0;data[i]!='\0';i++){
		printf("\'%c\'\n", data[i]);
	}
	return 0;
}
