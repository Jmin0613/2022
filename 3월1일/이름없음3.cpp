#include <stdio.h>

int main(){
	int i=0;
	char n;
	char arr[10];
	
	while(1){
		scanf("%c", &n);
		
		if(n!=' '){
			arr[i]=n;
			i++;
			
			if(n=='q')
			    break;
		}
	}
	
	int j;
	for(j=0;j<i;j++){
		printf("%c\n", arr[j]);
	}
	return 0;
}
