#include<stdio.h>
//int main(){
//	int a[100],size,position,value,i;
//	printf("Enter Your size:");
//	scanf("%d",&size);
//	for (i=0;i<size;i++){
//		scanf("%d",&a[i]);
//		
//	}
//	printf("Enter Your Number Postion : ");
//	scanf("%d",&position);
//	printf("Enter The value: ");
//	scanf("%d",&value);
//	for (i=size-1;i>=position-1;i--){
//		a[i+1]=a[i];
//		
//	}
//	a[position-1]=value;
//	for(i=0;i<size+1;i++){
//		printf("%d\n",a[i]);
//	}
//	
//}





//int main(){
//	int a[100],size,position,value,i;
//	printf("Enter Your size:");
//	scanf("%d",&size);
//	for (i=0;i<size;i++){
//		scanf("%d",&a[i]);
//		
//	}
//	printf("Enter Your Number Postion : ");
//	scanf("%d",&position);
//	for (i=position-1;i<size;i++){
//		a[i]=a[i+1];
//		
//	}
//	for(i=0;i<size-1;i++){
//		printf("%d\n",a[i]);
//	}
//	
//}






//int main(){
//	int a[3][3],i,j;
//	for(i=0;i<3;i++){
//	
//	for(j=0;j<3;j++){
//		printf("a[%d][%d]->",i,j);
//		scanf("%d",&a[i][j]);
//	}
//}
//	for (i=0;i<3;i++){
//		for (j=0;j<3;j++){
//			printf("%d \t",a[i][j]);
//		}
//		printf("\n");
//	}
//	
//}




//int main(){
//	int a[3][3],i,j;
//	for(i=0;i<3;i++){
//	
//	for(j=0;j<3;j++){
//		printf("a[%d][%d]->",i,j);
//		scanf("%d",&a[i][j]);
//	}
//}
////	for (i=0;i<3;i++){
////		for (j=0;j<3;j++){
////			if(i==j){
////				printf("%d \t",a[i][j]);
////			
////			}
////		}




//for (i=0;i<3;i++){
//		for (j=0;j<3;j++){
//			if(i+j==3-1){
//			
//		printf("%d \t",a[i][j]);		
//	}
//		}
//		
//		printf("\n");
//	}
//	
//}




int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){	
	for(j=0;j<3;j++){
		printf("a[%d][%d]->",i,j);
		scanf("%d",&a[i][j]);
	}
}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
				printf("%d \t",a[i][j]);
			
		}
		printf("\n");
	}
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
				
				printf("%d \t",a[j][i]);
			
		}
			printf("\n");
		}
	}

	

//SEARCHING METHOD

//int main(){
//	int key;
//	printf("Enter Your Which You have to Search: ");
//	scanf("%d",&key);
//	int a[10]={2,6,4,8,10,12,14,16,18,20};
//	int i,loc=-1;
//	for (i=0;i<10;i++){
//		if(a[i]==key){
//			loc=i+1;
//			break;
//		}
//		
//	}
//	if (i!=-1){
//		printf("The Position of your number is: %d",loc);
//	}
//	else{
//		printf("Error");
//	}
//}





//int main(){
//	int a[15]={1,2,5,1,5,7,10,12,13,1,1};
//	int key;
//	int count=0;
//	int i,loc=0;
//	printf("Enter Your Key: ");
//	scanf("%d",&key);
//	for(i=0;i<12;i++){
//		if(a[i]==key){
//			count++;
//		}
//		
//	}
//
//		printf("The key is repeating it self by: %d",count);
//	}




//SORT METHOD
//int main(){
//	int a[10]={12,14,15,16,17,19,21,20,51,60};
//	int i,temp,j;
//	
//	for(j=1;j<10-1;j++){
//	
//	for(i=0;i<10-1;i++){
//		if(a[i]>a[i+1]){
//			int temp=a[i];
//			a[i]=a[i+1];
//			a[i+1]=temp;
//		}
//	}
//	}
//	for(i=0;i<10;i++){
//		printf("%d ",a[i]);
//	}
//}
