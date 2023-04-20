#include<stdio.h>
//int main(){
//	FILE *fp;
//	fp = fopen("Zero123.txt","a");			//APPEND A FILE
//	fprintf(fp,"KOCAZ");
//	fprintf(fp,"Computer Programming");
//	fclose(fp);					//CLOSE THE FILE
//}

//int main(){
//	FILE *fp;
//	fp = fopen("Zero123.txt","r");    //READ A FILE
//	char buff[300];
//	while (fscanf(fp,"%s",buff)!=EOF){
//	
//		printf("%s ",buff);};  // PRINTING A 
//	fclose(fp);
//}




//int main(){
//	FILE *f1;
//	char name[50];
//	int regNo;
//	float percentage;
//	f1 = fopen("Student.txt","w");
//	printf("Enter Your Name: ");
//	scanf("%s",&name);
//	printf("Enter Your RegNo: ");
//	scanf("%d",&regNo);
//	printf("Enter Your Percentage Number: ");
//	scanf("%f",&percentage);	
//	fprintf(f1,"Name: %s",name);
//	fprintf(f1,"\nRegistration Number: %d",regNo);
//	fprintf(f1,"\nPercentage: %f",percentage);
//	fclose(f1);					//CLOSE THE FILE
//}





//struct student{
//	char name[20];
//	int regno;
//	float percent;
//}s;
//int main(){
//	FILE *fs;
//	printf("Enter Your Name: ");
//	scanf("%s",&s.name);
//	printf("Enter Your Registration Number: ");
//	scanf("%d",&s.regno);
//	printf("Enter Your Percentage: ");
//	scanf("%f",&s.percent);
//	fs = fopen("Student1.dat1","wb");
//	fwrite(&s,sizeof(s),1,fs);
//	fclose(fs);
//	FILE *fs1;
//	fs1 = fopen("Student1.dat1","rb");
//	if (fs1==NULL){
//		printf("File Not Created.");
//	}
//	else{
//		fread(&s,sizeof(s),1,fs1);
//		printf("%s   %d   %f",s.name,s.regno,s.percent);
//	}
//	
//}








//struct student{
//	char name[20];
//	int regno;
//	float percent;
//}s;
//int main(){
//	FILE *fs;
//	printf("Enter Your Name: ");
//	scanf("%s",&s.name);
//	printf("Enter Your Registration Number: ");
//	scanf("%d",&s.regno);
//	printf("Enter Your Percentage: ");
//	scanf("%f",&s.percent);
//	fs = fopen("Student1.dat1","wb");
//	fwrite(&s,sizeof(s),1,fs);
//	fclose(fs);
//}

struct student{
	char name[50];
	int regNo;
	float percentage;
}s;



int main(){
	FILE *f1;
	int i;
	
	f1 = fopen("Student5.dat2","wb");
	for (i=0;i<2;i++){
	printf("Enter Your Name: ");
	scanf("%s",&s[i].name);
	printf("Enter Your RegNo: ");
	scanf("%d",&s[i].name);
	printf("Enter Your Percentage Number: ");
	scanf("%f",&s[i].name);
	fprintf(f1,"Name: %s",s.name);
	fprintf(f1,"\nRegistration Number: %d",s.regNo);
	fprintf(f1,"\nPercentage: %f\n",s.percentage);
};
	fclose(f1);					//CLOSE THE FILE
}
