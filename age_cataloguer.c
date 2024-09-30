#include <stdio.h>

int main() {
    char name [50];
    int age;
    char location [100];
    int id;

    // Requesting User input
    printf("Enter your name:  ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your age:  ");
    scanf("%d", &age);
    getchar();

    printf("Enter your location: ");
    fgets(location, sizeof(location), stdin);

    printf("Enter your ID number:  ");
    scanf("%d", &id);


    //categorization based on age
    if (age < 18) {
        printf("You are a minor");
    } else if (age >= 18 && age <= 44) {
        printf("You are and Adult");
    }else {
        printf("You are a senior");
    }

    return 0;
}