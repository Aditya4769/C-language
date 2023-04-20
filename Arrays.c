#include<stdio.h>
//int main(){
//	int i=0;
//	int A[5]={1,2,3,4,5};
//	do{
//	
//		printf("%d \n",A[i]);
//		i++;
//	}	while (i<5);
//}




//int main(){
//	int a[5];
//	int i;
//	for (i=0;i<=5;i++){
//		printf("Enter Your Value %d :",i);
//		scanf("%d",&a[i]);
//	}
//	do{
//	
//		printf("%d \n",a[i]);
//		i++;
//	}	while (i<5);
//
//	
//}



//int main(){
//	int size;
//	printf("Enter Your Array Size : ");
//	scanf("%d",&size);
//	int a[size];
//	int i;
//	int c=0;
//	for (i=0;i<5;i++){
//		printf("Enter Your Value %d :",i);
//		scanf("%d",&a[i]);
//	}
//	for (i=0;i<5;i++){
//		c+=a[i];
//	}
//	printf("%d",c);
//	
//
//	
//}




//
//int main(){
//	int i;
//	int a[5];
//	for(i=0;i<5;i++){
//		printf("Enter Your Values %d:",i);
//		scanf("%d",&a[i]);
//	}
//	int b[5];
//	for(i=0;i<5;i++){
//		scanf("%d",&b[i]);
//	}
//	int c[5];
//	for (i=0;i<5;i++){
//		c[i]=(a[i]+b[i]);
//	}
//	for (i=0;i<5;i++){
//	
//		printf("%d\n",c[i]);
//	}
//}





int main(){
	int size;
	printf("Enter Your Array Size : ");
	scanf("%d",&size);
	int a[size],i;
	scanf("%d",&a[size]);
	modify(a,size);
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
}
void modify(int b[],int size){
	int i;
	for (i=0;i<5;i++){
		b[i]*=2;
	}
}
