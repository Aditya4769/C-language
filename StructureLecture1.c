#include<stdio.h>
//struct number{
//	char *name;
//	int x;
//	float y;
//		
//};
//int main(){
//	struct number n;
//	n.name="Aditya";
//	n.x=23;
//	n.y=2.1;
//	printf("%s\n%d \n%.1f",n.name,n.x,n.y);	
//}

//struct car{
//	char name[20];
//	int a;
//	int a1;
//	
//	char *name2;
//	int b;
//	int b1;
//	
//};
//int main(){
//	struct car n;
//	printf("Enter Your Car Name: ");
//	scanf("%s",&n.name); 
//	printf("Enter Your Car Year: ");
//	scanf("%d",&n.a);
//	printf("Enter Your Car Price: ");
//	scanf("%d",&n.a1);
//	n.name2 = "BMW";
//	n.b = 2023;
//	n.b1 = 5000000;
//	printf("Car 1 = %s\nCar 1 = %d\nCar 1 = %d\nCar 2 = %s\nCar 2 = %d\nCar 2 = %d",n.name,n.a,n.a1,n.name2,n.b,n.b1);
//}



//struct student{
//	char name[20];
//	int a;
//	int a1;
//	int a2;
//	int a3;
//};
//int main(){
//	struct student n;
//	printf("Enter Your Name: ");
//	scanf("%s",&n.name); 
//	printf("Enter Your Registration Number: ");
//	scanf("%d",&n.a);
//	printf("Enter Your Marks for Subject 1: ");
//	scanf("%d",&n.a1);
//	printf("Enter Your Marks for Subject 2: ");
//	scanf("%d",&n.a2);
//	printf("Enter Your Marks for Subject 3: ");
//	scanf("%d",&n.a3);
//	printf("Name: %s\nRegistration Number: %d\nSubject 1: %d\nSubject 2:%d\nSubject 3:%d",n.name,n.a,n.a1,n.a2,n.a3);
//
//}





//struct student{
//	char name[20];
//	int a;
//	int a1[3];
//}s[3];
//int main(){
//	int j,i;
//	for(j=0;j<3;j++){
//	
//	printf("Enter Your Name: ");
//	scanf("%s",&s[j].name); 
//	printf("Enter Your Registration Number: ");
//	scanf("%d",&s[j].a);
//	for (i=0;i<3;i++){
//	printf("Enter Your Marks for Subject 1: ");
//	scanf("%d",&s[j].a1[i]);}
//	
//}
//	for (j=0;j<3;j++){
//		printf("%s %d ",s[j].name,s[j].a);
//	for (i=0;i<3;i++){
//		printf("%d ",s[j].a1[i]);
//}
//printf("\n");
//}
//}





//NESTED STRUCTURE
//struct person{
//	char name[20];
//	int age;
//	struct student{
//		int regno;
//		char section[3];
//	}s;
//};
//int main(){
//	struct person p;
//	//struct student s;
//	scanf("%s",&p.name);
//	scanf("%d",&p.s.regno);
//	printf("%d",p.s.regno);	
//	scanf("%s",p.s.section);
//	printf("%s",p.s.section);
//}






//CALLING FUNCTION IN STRUCTURE
//struct person{
//	char name[20];
//	int age;
//	
//};
//void emp1(){
//	struct emp{
//		int empid;
//		float salary;
//		
//	}e={123,564.567};
//	printf("%d %f",e.empid,e.salary);
//}
//int main(){
//	struct person p;
//	scanf("%s",&p.name);
//	printf("%s\n",p.name);
//		emp1();
//}






//struct emp{
//	char name[10];
//	int empid;
//	float salary;
//};
//void display(struct emp e){
//	printf("%s %d %f",e.name,e.empid,e.salary);
//}
//int main(){
//	struct emp e1;
//	scanf("%s",&e1.name);
//	scanf("%d",&e1.empid);
//	scanf("%f",&e1.salary);
//	display(e1);
//}





//struct number{
//	int a;
//	int b;
//	int c;
//	float salary;
//};
//void display(struct number e){
//	e.c=(e.b+e.a);
//	printf("%d %f",e.c,e.salary);
//}
//int main(){
//	struct number e1;
//	scanf("%d",&e1.a);
//	scanf("%d",&e1.b);
//	scanf("%f",&e1.salary);
//	display(e1);
//}





struct car{
	char name[20];
	int year;
	float price;
	
}c1,*c2;
int main(){
	c2=&c1;
	printf("Enter the value: ");
	scanf("%s",&c2->name);
	scanf("%d",&c2->year);
	scanf("%f",&c2->price);	
	printf("%s %d %f\n",c2->name,c2->year,c2->price);
}
