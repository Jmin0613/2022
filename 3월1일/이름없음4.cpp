#include <stdio.h>

int main(){
	int num; //목표 정수 
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
