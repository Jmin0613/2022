#include <stdio.h>

int main(){
	int num; //��ǥ ���� 
	scanf("%d", &num);
	
	int j=0;
	int cnt=0;
	while(cnt<num){
		j++;
		cnt+=j;
	}
	
	printf("%d\n", j);
	return 0;
}
