#include <stdio.h>

int main(){
	char data[20];
	
	scanf("%s", data);
	int i;
	for(i=0;data[i]!='\0';i++){
		printf("\'%c\'\n", data[i]);
	}
	return 0;
}
