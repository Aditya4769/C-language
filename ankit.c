#include <stdio.h>
#include <string.h>

struct MenuItem {
    char name[50];
    char type[20];
    float price;
    float discount;
};

struct MenuItem menu[50];
int itemCount = 0;

void displayMenu() {
    printf("Menu:\n");
   // for(int i = 0; i < itemCount; i++){
    //    printf("%d. %s (%s) - %.2f\n", i+1, menu[i].name, menu[i].type, menu[i].price);
   // }
}

void addItem() {
    printf("Enter name of item: ");
    scanf("%s", menu[itemCount].name);
    printf("Enter type of item: ");
    scanf("%s", menu[itemCount].type);
    printf("Enter price of item: ");
    scanf("%f", &menu[itemCount].price);
    printf("Enter discount of item: ");
    scanf("%f", &menu[itemCount].discount);
    itemCount++;
}

void deleteItem(int index) {
    for (int i = index; i < itemCount-1; i++) {
        menu[i] = menu[i+1];
    }
    itemCount--;
}

float calculateTotalPrice(struct MenuItem order[], int orderCount) {
    float totalPrice = 0;
    for (int i = 0; i < orderCount; i++) {
        totalPrice += order[i].price;
    }
    float discount = 0;
    for (int i = 0; i < orderCount; i++) {
        discount += order[i].discount;
    }
    totalPrice -= discount;
    return totalPrice;
}

void processPayment(float totalPrice, char paymentMode[]) {
    printf("Total price: %.2f\n", totalPrice);
    printf("Payment mode: %s\n", paymentMode);
}

int main() {
    char paymentMode[20];
    struct MenuItem order[50];
    int orderCount = 0;
    while (1) {
        printf("\n1. Display menu\n");
        printf("2. Add item\n");
        printf("3. Delete item\n");
        printf("4. Calculate total price\n");
        printf("5. Process payment\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayMenu();
                break;
            case 2:
                addItem();
                break;
            case 3:
                printf("Enter index of item to delete: ");
                int index;
                scanf("%d", &index);
                deleteItem(index-1);
                break;
            case 4:
                printf("Enter number of items in order: ");
                scanf("%d", &orderCount);
                printf("Enter indexes of items in order: ");
                for (int i = 0; i < orderCount; i++) {
                    int index;
                    scanf("%d", &index);
                    order[i] = menu[index-1];
                }
                printf("Total price: %.2f\n", calculateTotalPrice(order, orderCount));
                break;
            case 5:
                printf("Enter payment mode: ");
                scanf("%s", paymentMode);
                processPayment(calculateTotalPrice(order, orderCount), paymentMode);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}
