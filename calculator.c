//#include<stdio.h>
//int main(){
//	int a;
//	int b;
//	int c;
//	printf("Enter Your First Number: \n");
//	scanf("%d",&a);
//	printf("Enter Your Second Number: \n");
//	scanf("%d",&b);
//	printf("Enter Operators: \n");
//	scanf("%d",&c);
//	if (c== '+'){
//		printf("Addition Of Your Number is: %d \n",a+b);
//	}
//	else if (c=='-'){
//		printf("Subtraction Of Your Number is: %d \n",a-b);
//	}
//	else{
//		printf("Invalid Number");
//	}
//}




//#include<stdio.h>
//void main(){
//	int a;
//	scanf("%d",&a);
//	if (a%5==0 && a%3==0){
//		printf("Yes %d is divisible by 5 and 3",a);
//	
//	}
//	else{
//		printf("It is Not Possible");
//	}
//}


#include<stdio.h>
void main(){
	int a;
	printf("Enter Your First Number: \n");
	scanf("%d",&a);
	int b;
	printf("Enter Your Second Number: \n");
	scanf("%d",&b);
	int c;
	printf("Enter Your Third Number: \n");
	scanf("%d",&c);
	if (a>b && a>c){
		printf("%d",a);
	}
	else if(b>a && b>c){
		printf("%d",b);
	}
	else{
		printf("%d",c);
	}
}





