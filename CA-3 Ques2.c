#include<stdio.h>
int main(){
	printf("%d",reverse());
	
}
int reverse(){
	int a,c, rev=0;
	printf("enter a value: ");
	scanf("%d",&a);
	while(a!=0){
		c=a%10;
		a=a/10;
		rev=rev*10+c;	
	}
return rev;	
}
