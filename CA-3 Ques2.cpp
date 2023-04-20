#include<stdio.h>
int main(){
	printf("%d",reverse());
}
int reverse(){
	int a;
	printf("Enter Your Number: ");
	scanf("%d",&a);
	int rev=0,c;
	while(a!=0){
		c = a%10;
		a = a/10;
		rev = rev*10+c;
	}	
	return rev;
}

