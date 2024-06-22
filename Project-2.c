// Student Management System

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

// Variable to keep track of students
int i = 0;

struct sinfo
{
    char fname[100];
    char lname[100];
    int roll;
    float cgpa;
    int cid[10];
} st[55];

// Function to add student
void add_student()
{
    printf("Add the students details\n");
    printf("Enter the first name : ");
    scanf("%s", st[i].fname);

    printf("Enter the last name : ");
    scanf("%s", st[i].lname);

    printf("Enter the roll number : ");
    scanf("%d", &st[i].roll);

    printf("Enter the CGPA : ");
    scanf("%f", &st[i].cgpa);

    printf("Enter the Course-Id : \n");
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &st[i].cid[j]);
    }

    i = i + 1;
}

// Function to find student by roll number
void find_rl()
{
    int x;

    printf("Enter the roll number : ");
    scanf("%d", &x);

    for (int j = 0; j <= i; j++)
    {
        if (x == st[j].roll)
        {
            printf("The students details are\n");
            printf("First name : %s\n", st[j].fname);
            printf("Last name : %s\n", st[j].lname);
            printf("CGPA : %f\n", st[j].cgpa);

            for (int k = 0; k < 5; k++)
            {
                printf("Course Id : %d\n", st[j].cid[k]);
            }
            break;
        }

        // else
        // {
        //     printf("Roll Number not found !");
        // }
    }
}

// Function to find student by first name
void find_fn()
{
    char a[100];

    printf("Enter the student name : ");
    scanf("%s", a);

    int c = 0;

    for (int j = 0; j <= i; j++)
    {
        if (strcmp(st[j].fname, a) == 0)
        {
            printf("First name : %s\n", st[j].fname);
            printf("Last name : %s\n", st[j].lname);
            printf("Roll Number : %d\n", st[j].roll);
            printf("CGPA : %f\n", st[j].cgpa);
            for (int k = 0; k < 5; k++)
            {
                printf("Course-Id : %d\n", st[j].cid[k]);
            }
            c = 1;
            break;
        }

        // else
        // {
        //     printf("First Name not found !");
        // }
    }
}
// Function to find student by Course Id
void find_c()
{
    int id;

    printf("Enter the course-Id\n");
    scanf("%d", &id);

    int c = 0;

    for (int j = 0; j <= i; j++)
    {
        for (int k = 0; k < 5; k++)
        {
            if (id == st[j].cid[k])
            {
                printf("First name : %s\n", st[j].fname);
                printf("Last name : %s\n", st[j].lname);
                printf("Roll Number : %d\n", st[j].roll);
                printf("CGPA : %f\n", st[j].cgpa);
                c = 1;
                break;
            }

            // else
            // {
            //     printf("Not Found !");
            // }
        }
    }
}
// Function to find total students
void tot_s()
{
    printf("The total number of students currently %d\n", i);
    printf("You can have maximum 50 students\n");
    printf("You can have %d more students\n", 50 - i);
}

// Function to delete a student by roll number
void del_s()
{
    int a;
    printf("Enter the Roll Number"
           " which you want to delete\n");
    scanf("%d", &a);

    for (int j = 0; j <= i; j++)
    {
        if (a == st[j].roll)
        {
            for (int k = j; k < 49; k++)
                st[k] = st[k + 1];
            i--;
        }
    }
    printf("The Roll Number is "
           "removed Successfully\n");
}

void up_s()
{
    int x;

    printf("Enter the roll number to be updated : ");
    scanf("%d", &x);
    for (int j = 0; j <= i; j++)
    {
        if (x == st[j].roll)
        {
            printf("1. First Name\n");
            printf("2. Last Name\n");
            printf("3. Roll No\n");
            printf("4. CGPA\n");
            printf("5. Courses\n");

            int z;

            printf("Enter the option number : ");
            scanf("%d", &z);

            switch (z)
            {
            case 1:
                printf("Enter the new first name : ");
                scanf("%s", st[j].fname);
                break;
            case 2:
                printf("Enter the new last name : ");
                scanf("%s", st[j].lname);
                break;
            case 3:
                printf("Enter the new Roll No : ");
                scanf("%d", &st[j].roll);
                break;
            case 4:
                printf("Enter the new CGPA : ");
                scanf("%f", &st[j].cgpa);
                break;
            case 5:
                printf("Enter the new courses : ");
                scanf("%d %d %d %d %d", &st[j].cid[0], &st[j].cid[1], &st[j].cid[2], &st[j].cid[3], &st[j].cid[4]);
                break;

            default:
                printf("Enter appropriate choice !");
                break;
            }

            printf("Updated Successfully !");
        }
    }
}

int main()
{
    int choice, count;

    while (1)
    {
        printf("\nTask You want to perform\n");
        printf("1. Add the student Details\n");
        printf("2. Find the student Details by Roll Number\n");
        printf("3. Find the student Details by First Name\n");
        printf("4. Find the student Details by Course Id\n");
        printf("5. Find the total number of students\n");
        printf("6. Delete the students Details by Roll Number\n");
        printf("7. Update the students Details by Roll Number\n");
        printf("8. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_student();
            break;
        case 2:
            find_rl();
            break;
        case 3:
            find_fn();
            break;
        case 4:
            find_c();
            break;
        case 5:
            tot_s();
            break;
        case 6:
            del_s();
            break;
        case 7:
            up_s();
            break;
        case 8:
            exit(0);
            break;

        default:
            printf("\nEnter appropriate choice !");
            break;
        }
    }

    return 0;
}