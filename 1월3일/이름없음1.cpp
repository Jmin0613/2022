#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
typedef int Element;

Element data[MAX_STACK_SIZE];
int top;

void error(const char str[]){
	printf("%s\n",str);
	exit(1);
}

void init_stack(){top==-1;}
int is_empty(){return top==-1;}
int is_full(){return top==MAX_STACK_SIZE-1;}
int size(){return top+1;}

void push(Element e){
	if(is_full())
		error("포화 상태 에러");
	data[++top]=e;
}

Element pop(){
	if(is_empty())
		error("공백 상태 에러");
	return data[top--];
}

Element peek(){
	if(is_empty())
		error("공백 상태 에러");
	return data[top];
}

int check_matching(char expr[]){ //문자열 expr에 대한 괄호검사 함수  
	int i=0, prev;
	char ch;
	
	init_stack(); //스택 초기화 
	while(expr[i]!='\0'){ //문자열 끝 나올떄까지 반복  
		ch = expr[i++];
		if(ch == '[' || ch == '(' || ch == '{') //열리는 괄호면 무조건 스택에 저장  
			push(ch);
		else if(ch == ']' || ch ==')' || ch == '}'){ //닫히는 괄호면 
			if(is_empty()) //스택 비어있는지 검사 
			 	return 2; //스택이 비어있다? -> 조건 2 위배 
			prev =pop(); //비어있는게 아니라면, 스택에서 하나 꺼내서 반환  
			if((ch==']' && prev!='[')
			|| (ch==')' && prev!='(')
			|| (ch=='}' && prev!='{')){
				return 3; //쌍을 맺지 못한다 ? -> 조건 3 위배 
			}
		}
	}
	if(is_empty()==0) return 1; //오류는 없는데, 스택에 괄호가 남았다? -> 조건 1 위배  
	return 0; //괄호 정상  
}

int main(){
	char expr[4][80] = {"{A[(i+1)]=0;}", "if((i=0) && (j==0)", "A[(i+1])=0;", "A[i]=f)(;"}; //테스트 문자열  
	int errCode, i;
	
	for(i=0;i<4;i++){
		errCode=check_matching(expr[i]);
		if(errCode==0)
			printf(" 정상: %s\n",expr[i]);
		else
			printf(" 오류: %s (조건%d 위반)\n", expr[i],errCode);
	}
}
