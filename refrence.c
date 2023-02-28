#include<stdio.h>
int great(int *a, int *b, int *c);
int main(){
	int a1,b1,c1;
	printf("Enter your Number: ");
	scanf("%d %d %d",&a1,&b1,&c1);
great(&a1,&b1,&c1);
}
int great(int *a, int *b, int *c){
	if (*a>*b && *a>*c){
		printf("%d",*a);
	}
	else if(*b>*a && *b>*c){
		printf("%d",*b);
	}
	else{
		printf("%d",*c);
	}
}
