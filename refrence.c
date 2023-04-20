#include<stdio.h>
//int great(int *a, int *b, int *c);
//int main(){
//	int a1,b1,c1;
//	printf("Enter your Number: ");
//	scanf("%d %d %d",&a1,&b1,&c1);
//great(&a1,&b1,&c1);
//}
//int great(int *a, int *b, int *c){
//	if (*a>*b && *a>*c){
//		printf("%d",*a);
//	}
//	else if(*b>*a && *b>*c){
//		printf("%d",*b);
//	}
//	else{
//		printf("%d",*c);
//	}
//}


//int swap(int *a, int *b);
//int main(){
//	int a1,b1;
//	scanf("%d \n%d",&a1,&b1);
//swap(&a1,&b1);
//}
//int swap(int *a, int *b){
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d",a,b);
//}



//factorial by refrence method.
//#include<stdio.h>
//int fact(int *a);
//int main() { 
//int a1; 
//scanf("%d",&a1); 
//fact(&a1);
//}
//int fact(int *a){
//	int c,fact;
//	for(c=1;c<=*a;c++) { 
//	fact=fact*c; }
//	printf("%d",fact);
//return 0;
//}








//int main(){
//	int m=5;
//	printf("%d",fact(m));
//}
//int fact(int n){
//	if (n==0){
//		return 1;
//	}
//	else{
//		return n* fact(n-1);
//	}
//}




//int main(){
//	int m=10;
//	printf("%d",fact(m));
//}
//int fact(int n){
//	if (n==1){
//		return 1;
//	}
//	else{
//		return n+fact(n-1);
//	}
//}



int rev=0;
int main(){
	int m=456;
	printf("%d",fact(m));
}
int fact(int n){
	int a;
	int b=0.4;
	printf("%d",b);
	if (n==0){
		return rev;
	}
	else{
		
		a=n%10;
		rev = rev*10+a;
		return fact(n/10);
	}
}
