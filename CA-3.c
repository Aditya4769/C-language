#include<stdio.h>
int main(){
	int size;
	printf("Enter Your Number: ");
	scanf("%d",&size);
	int a[size],i,b[size],count = 0;
	for (i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<size-1;i++){
		if (a[i]%2==0){
			printf("%d\n",a[i]);
			count+=1;
		}
	}
	if (count==0){
		printf("No OutPut");
	}
	
}
