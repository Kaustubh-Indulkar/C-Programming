// Structures using Functions

#include <stdio.h>
#include <string.h>

// Define the structure
struct Person {
    char name[50];
    int age;
    float height;
};

// Function prototypes
void inputPerson(struct Person *p);
void displayPerson(struct Person p);

int main() {
    struct Person p;

    // Input person details
    inputPerson(&p);

    // Display person details
    displayPerson(p);

    return 0;
}

void inputPerson(struct Person *p){
    // struct Person p;
    printf("Enter name: ");
    scanf("%s",(*p).name);

    printf("Enter age: ");
    scanf("%d",&(*p).age);

    printf("Enter height(in meters): ");
    scanf("%f",&(*p).height);
}

void displayPerson(struct Person p){
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f meters\n", p.height);
}
