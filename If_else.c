//#include<stdio.h>
//void main(){
//	int a;
//	printf("Enter Your Number: ");
//	scanf("%d",&a);
//	if (a>0){
//		printf("%d is Positive Number",a);}
//	else if(a==0){
//		printf("Value is Zero");
//		}
//	
//	else{
//		printf("%d is negative Number",a);
//	}

//a>0?printf("+ve"):printf("-ve");
//}





//SWITCH CASE:
#include <stdio.h>
void main(){
	char ch;
	scanf("%c",&ch);
	switch(ch){
		case 'm':
			printf("Monday");
			break;
		case 't':
			printf("Tuesday");
			break;
		case 'w':
			printf("Wednesday");
			break;
		case 'T':
			printf("Thursday");
			break;
		default:
			printf("Invalid");
	}
	
}
