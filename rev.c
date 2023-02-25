//#include<stdio.h>
//int main(){
//	printf("%d",reverse());
//	
//}
//int reverse(){
//	int a,d, rev=0;
//	printf("enter a value: ");
//	scanf("%d",&a);
//	while(a!=0){
//		d=a%10;
//		a=a/10;
//		rev=rev*10+d;	
//	}
//return rev;	
//}



#include<stdio.h>
int main(){
	printf(reverse());
	
}
int reverse(){
	int temp,a,d, rev=0,c;
	printf("enter a value: ");
	scanf("%d",&a);
	temp=a;
	while(a!=0){
		d=a%10;
		a=a/10;
		rev=rev*10+d;
	}
	if (rev==temp){
		printf("It is palandrom");
	}
	else{
		printf("Its Not");
	}

}
