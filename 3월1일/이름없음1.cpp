#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int i;
	int cnt=0;
	for(i=1;i<=n;i++){
		if(i%2==0)
			cnt+=i;
	}
	printf("%d\n", cnt);
	return 0;
}
