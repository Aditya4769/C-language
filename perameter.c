//#include<stdio.h>
//int sum(int a,int b);
//int main(){
//	int a1,b1;
//	printf("Enter wo Number: ");
//	scanf("%d %d",&a1,&b1);
//	int c=sum(a1,b1);
//	printf("%d",c);
//}
//int sum(int a, int b){
//	return a+b;
//}




//#include<stdio.h>
//int sum(int a);
//int main(){
//	int a1;
//	printf("Enter wo Number: ");
//	scanf("%d",&a1);
//	int c=sum(a1);
//	printf("%d",c);
//}
//int sum(int a){
//	int i,m=1;
//	for (i=1,i<=a;i++){
//
//		m*=i;
//}
//return m;
//}




#include<stdio.h>
int num(int a);
int main(){
	int a1;
	printf("Enter Your Number: ");
	scanf("%d",&a1);
num(a1);
}
int num(int a){
	if (a==1){
		printf("One");
	}
	else if (a==2){
	printf("Two");
}

	else if (a==3){
		printf("Three");
	}
	else if (a==4){
		printf("Four");
	}
	else if (a==5){
		printf("Five");
	}
	else if (a==6){
		printf("Six");
	}
	

return ;	
}
