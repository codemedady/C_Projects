// Library Management System
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Track of total books
int i = 0;

struct libinfo
{
    char bkname[100], autname[100];
    int pages;
    float price;
} lib[100];

// Function to add book details
void add_bk()
{
    printf("Enter the Book Name : ");
    scanf("%s", lib[i].bkname);

    printf("Enter the Author Name : ");
    scanf("%s", lib[i].autname);

    printf("Enter the no of pages : ");
    scanf("%d", &lib[i].pages);

    printf("Enter the price of Book : ");
    scanf("%f", &lib[i].price);

    i = i + 1;
}
// Function to book details based on price
void bk_det()
{
    int cost;

    printf("Enter the price of Book : ");
    scanf("%d", &cost);

    for (int i = 0; i <= i; i++)
    {
        if (cost == lib[i].price)
        {
            printf("Book : %s\n", lib[i].bkname);
            printf("Author Name : %s\n", lib[i].autname);
            printf("Pages : %d\n", lib[i].pages);
            printf("Price : %frs\n", lib[i].price);
        }
    }
}

// Function to list all books by an Author
void auth()
{
    char author[100];

    printf("Enter the author name : ");
    scanf("%s", author);

    for (int j = 0; j <= i; j++)
    {
        if (strcmp(author, lib[j].autname) == 0)
        {
            printf("Book : %s\n", lib[j].bkname);
            printf("Pages : %d\n", lib[j].pages);
            printf("Price : %frs\n", lib[j].price);
        }
    }
}

// Function to get total books
void tot_bk()
{
    printf("Total Books are %d\n", i);
    printf("The library can have a maximum of 100 books\n");
    printf("It can have %d more books", 100 - i);
}

int main()
{
    int option;

    while (1)
    {
        printf("\n\nWelcome to the Library !\n");
        printf("1. Add the Book Details\n");
        printf("2. Get the Book Details by Price\n");
        printf("3. List all Books by an Author\n");
        printf("4. Total Count of Books\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            add_bk();
            break;
        case 2:
            bk_det();
            break;
        case 3:
            auth();
            break;
        case 4:
            tot_bk();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Enter proper choice !");
            break;
        }
    }

    return 0;
}