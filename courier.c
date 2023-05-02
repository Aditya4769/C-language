#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COURIERS 100
#define MAX_USERS 10
#define FILE_NAME "courier_data.txt"
#define USER_FILE_NAME "user_data.txt"
typedef struct courier {
char name[50];
char address[100];
char phone[20];
int weight; 
} Courier;
typedef struct user {
char username[20];
char password[20];
} User;
int insertCourier(Courier c[], int *n) {
FILE *fp;
fp = fopen(FILE_NAME, "a");
if (fp == NULL) {
printf("Error opening file.\n");
return 0; }
printf("Enter name: ");
scanf("%s", c[*n].name);
printf("Enter address: ");
scanf("%s", c[*n].address);
printf("Enter phone number: ");
scanf("%s", c[*n].phone);
printf("Enter weight (in kg): ");
scanf("%d", &c[*n].weight);
fprintf(fp, "%s %s %s %d\n", c[*n].name, c[*n].address, c[*n].phone, c[*n].weight);
fclose(fp);
(*n)++;
printf("Courier added successfully.\n");
return 1; }
int displayCouriers() {
FILE *fp;
fp = fopen(FILE_NAME, "r");
if (fp == NULL) {
printf("Error opening file.\n");
return 0; }
printf("Name\t\tAddress\t\tPhone\t\tWeight(kg)\n");
printf(" \n");
Courier courier;
while (fscanf(fp, "%s %s %s %d", courier.name, courier.address, courier.phone, &courier.weight) != EOF) {
printf("%s\t\t%s\t\t%s\t\t%d\n", courier.name, courier.address, courier.phone, courier.weight);
}
fclose(fp);
return 1; }
int searchCourier() {
FILE *fp;
fp = fopen(FILE_NAME, "r");
if (fp == NULL) {
printf("Error opening file.\n");
return 0; }
char search_name[50];
int found = 0;
printf("Enter name to search: ");
scanf("%s", search_name);
Courier courier;
while (fscanf(fp, "%s %s %s %d", courier.name, courier.address, courier.phone, &courier.weight) != EOF) {
if (strcmp(search_name, courier.name) == 0) {
printf("Name\tAddress\t\tPhone\t\tWeight (kg)\n");
printf(" \n");
printf("%s\t%s\t%s\t%d\n", courier.name, courier.address, courier.phone, courier.weight);
found = 1; } }
if (!found) {
printf("Courier not found.\n");
}
fclose(fp);
return 1; }
int deleteCourier() {
FILE *fp, *fp_temp;
fp = fopen(FILE_NAME, "r");
fp_temp = fopen("temp.txt", "w");
if (fp == NULL || fp_temp == NULL) {
printf("Error opening file.\n");
return 0; }
char delete_name[50];
int found = 0;
printf("Enter name to delete: ");
scanf("%s", &delete_name);
Courier courier;
while (fscanf(fp, "%s %s %s %d", courier.name, courier.address, courier.phone, &courier.weight) != EOF) {
if (strcmp(delete_name, courier.name) == 0) {
found = 1;
continue; }
fprintf(fp_temp, "%s %s %s %d\n", courier.name, courier.address, courier.phone, courier.weight);
}
fclose(fp);
fclose(fp_temp);
remove(FILE_NAME);
rename("temp.txt", FILE_NAME);
if (found) {
printf("Courier deleted successfully.\n");
} else {
printf("Courier not found.\n");
}
return 1; }
int registerUser(User u[], int *n) {
FILE *fp;
fp = fopen(USER_FILE_NAME, "a");
if (fp == NULL) {
printf("Error opening file.\n");
return 0; }
printf("Enter username: ");
scanf("%s", u[*n].username);
printf("Enter password: ");
scanf("%s", u[*n].password);
fprintf(fp, "%s %s\n", u[*n].username, u[*n].password);
fclose(fp);
(*n)++;
printf("User registered successfully.\n");
return 1; }
int loginUser(User u[], int n) {
int i;
char username[20], password[20];
printf("Enter username: ");
scanf("%s", username);
printf("Enter password: ");
scanf("%s", password);
for(i = 0; i<n; i++){
if (strcmp(username, u[i].username) == 0 && strcmp(password, u[i].password) == 0) {
printf("Login successful.\n");
return 1; } }
printf("Incorrect username or password.\n");
return 0; }
int main() {
Courier couriers[MAX_COURIERS];
User users[MAX_USERS];
int num_couriers = 0;
int num_users = 0;
int choice;
while (1) {
printf("\nWelcome to the Courier Management System!\n");
printf("1. Insert Courier\n");
printf("2. Display Couriers\n");
printf("3. Search Courier\n");
printf("4. Delete Courier\n");
printf("5. Register User\n");
printf("6. Login\n");
printf("7. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
insertCourier(couriers, &num_couriers);
break;
case 2:
displayCouriers();
break;
case 3:
searchCourier();
break;
case 4:
deleteCourier();
break;
case 5:
registerUser(users, &num_users);
break;
case 6:
loginUser(users, num_users);
break;
case 7:
printf("Exiting the program.\n");
exit(0);
default:
printf("Invalid choice. Please try again.\n");
} }
return 0; }
