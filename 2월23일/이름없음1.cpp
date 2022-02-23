#include <stdio.h>

int main(){
	int arr[30];
	int a;
	int i=0;
	
	while(1){
		a=0;
		scanf("%d", &a);
		
		if(a!=0){
			arr[i]=a;
			i++;
		}
		else{
			break;
		}
	}
	
	int j;
	for(j=0;j<i;j++){
		printf("%d\n", arr[j]);
	}
	return 0;
}
