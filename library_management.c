#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

struct Book b[100];
int count = 0;

void addBook() {

    printf("Enter Book ID: ");
    scanf("%d", &b[count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b[count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[count].author);

    count++;

    printf("\nBook Added Successfully!\n");
}

void displayBooks() {

    int i;

    if(count == 0) {
        printf("\nNo Books Available!\n");
        return;
    }

    for(i = 0; i < count; i++) {

        printf("\nBook ID: %d", b[i].id);
        printf("\nBook Name: %s", b[i].name);
        printf("\nAuthor Name: %s\n", b[i].author);
    }
}

int main() {

    int choice;

    while(1) {

        printf("\n===== Library Management System =====\n");

        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
