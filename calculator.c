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


//#include<stdio.h>
//void main(){
//	int a;
//	printf("Enter Your First Number: \n");
//	scanf("%d",&a);
//	int b;
//	printf("Enter Your Second Number: \n");
//	scanf("%d",&b);
//	int c;
//	printf("Enter Your Third Number: \n");
//	scanf("%d",&c);
//	if (a>b && a>c){
//		printf("%d",a);
//	}
//	else if(b>a && b>c){
//		printf("%d",b);
//	}
//	else{
//		printf("%d",c);
//	}
//}






//1.Even or Odd
//2.take the input from user and check ,the number is divisible by 2 and 4
//3.Find the greates number among the three input
//4.aritmetic opration take two input for no and in the case
//5.write a program to get 2 largedt number among the three numbers



//1.
//#include <stdio.h>
//void main(){
//	int a;
//	scanf("%d",&a);
//	a%2==0?printf("Even"):printf("Odd");
//}



//2.
//#include<stdio.h>
//void main(){
//	int a;
//	printf("Enter Your Number: ");
//	scanf("%d",&a);
//	if (a%2==0 && a%4==0){
//		printf("Yes %d is divisible by 2 and 4",a);
//	
//	}
//	else{
//		printf("It is Not Possible");
//	}
//}



//3.
//#include<stdio.h>
//void main(){
//	int a;
//	printf("Enter Your First Number: \n");
//	scanf("%d",&a);
//	int b;
//	printf("Enter Your Second Number: \n");
//	scanf("%d",&b);
//	int c;
//	printf("Enter Your Third Number: \n");
//	scanf("%d",&c);
//	if (a>b && a>c){
//		printf("%d",a);
//	}
//	else if(b>a && b>c){
//		printf("%d",b);
//	}
//	else{
//		printf("%d",c);
//	}
//}





//4.
//#include<stdio.h>
//void main(){
//	int a;
//	printf("Enter Your First Number: \n");
//	scanf("%d",&a);
//	int b;
//	printf("Enter Your Second Number: \n");
//	scanf("%d",&b);
//	int c;
//	printf("Enter Your Third Number: \n");
//	scanf("%d",&c);
//	if (a>b && a>c){
//		if (b>c){
//			printf("%d",b);
//		}
//		else{
//			printf("%d",c);
//		}
//	}
//	else if (b>a && b>c){
//		if (a>c){
//			printf("%d",a);
//		}
//		else{
//			printf("%d",c);
//		}
//	}
//	else if (c>a && c>b){
//		if (a>c){
//			printf("%d",a);
//		}
//		else{
//			printf("%d",b);
//		}
//	}
//	else{
//		printf("Invalid");
//	}
//}


//5.
//#include<stdio.h>
//void main(){
//	char op;
//	printf("Enter Your oprators(+,-,*,/,%)");
//	scanf("%c",&op);
//	int a;
//	printf("Enter Your Number: ");
//	scanf("%d",&a);
//	int b;
//	printf("Enter Your Number: ");
//	scanf("%d",&b);
//	
//	switch(op){
//		case '+':
//			printf("%d",a+b);
//			break;
//		case '-':
//			printf("%d",a-b);
//			break;
//		case '*':
//			printf("%d",a*b);
//			break;
//		case '/':
//			printf("%d",a/b);
//			break;
//
//		default:
//			printf("Invalid");
//	}
//}



//#include<stdio.h>
//void main(){
//	int a = 2;
//	int b = 1;
//	while (b<11){
//		
//		printf("%d X %d = %d\n",a,b,a*b);
//		b = b+1;
//	}
//}

//#include<stdio.h>
//void main(){
//	int n;
//	for (n=1;n<=20;n=n+2){
//		printf("%d\n",n);
//	}
//}

//#include<stdio.h>
//int main(){
//	int n=10;
//	do{
//		printf("%d",n);
//		n=n-1;
//	}while(n<0);
//}

//1. write a c program to find factorial of a number

//#include <stdio.h>
//int main()
//{
//    int n,i,f;
//    f=1;
//    i=1;
//    scanf("%d",&n);
//    while(i<=n)
//    {
//        f=f*i;
//        i=i+1;
//    }
//    printf("%d",f);
//}




//#include<stdio.h>
//void main(){
//	int n,i,add;
//	scanf("%d",&n);
//	add = 0;
//	for (i=1;i<=n;i=i+1){
//	add+=i;
//	}
//	printf("%d",add);
//	
//}


//#include<stdio.h>
//void main(){
//	int n,i,add;
//	scanf("%d",&n);
//	add = 0;
//	for (i=2;i<=n;i=i+2){
//	add+=i;
//	}
//	printf("%d",add);
//	
//}


#include <stdio.h>
 
int main()
{
    int number, rem, sum = 0, i;
 
    printf("Enter a Number: ");
    scanf("%d", &number);
    for (i = 1; i <number; i++)
    {
        rem = number % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("%d is perfect number", number);
    else
        printf("%d is not a perfect number", number);
    return 0;
}



