# C_Projects
Collection of my journey in C


Project-1 (ROCK,PAPER AND SCISSORS GAME): 
Rock, Paper, Scissors is a classic hand game played between two people. Here are the basic rules:

1.Rock beats scissors
2.Scissors beat paper
3.Paper beats rock

In this game, the user will be asked to make choice and according to the choice of user and computer and then the result will be displayed along with the choices of both computer and user.
srand(time(NULL) and rand()%100 which are included in stdlib.h and time.h header files are used to generate random numbers between 0 to 99.
The 100 numbers are divided into 3 options i.e stone,paper and scissors, where the probability of each is equal i.e 33% (~33.33%)


Project-2 (STUDENT DATA MANAGEMENT SYSTEM):
Program to build a simple Software for Student Information Management System which can perform the following operations:

Store the First name of the student.
Store the Last name of the student.
Store the unique Roll number for every student.
Store the CGPA of every student.
Store the courses registered by the student.
Approach: The idea is to form an individual functions for every operation. All the functions are unified together to form software.

Add Student Details: Get data from user and add a student to the list of students. While adding the students into the list, check for the uniqueness of the roll number.
Find the student by the given roll number: This function is to find the student record for the given roll number and print the details.
Find the student by the given first name: This function is to find all the students with the given first name and print their details.
Find the students registered in a course: This function is to find all the students who have registered for a given course.
Count of Students: This function is to print the total number of students in the system
Delete a student: This function is to delete the student record for the given roll number.
Update Student: This function is to update the student records. This function does not ask for new details for all fields but the user should be able to pick and choose what he wants to update.


Project-3 (LIBRARY MANAGEMENT SYSTEM)
The library is the place where we find a collection of books organized in a particular order. In the library,  we can collect book read them, and then return it. But, Managing a particular library is not an easy task. So, we can create a C language-based application using if-else statements, arrays, strings, switch cases, etc. Using this application we can easily manage the books in the library, we can get information about books, etc.

The functionality of the Library Management System is mentioned below:

Add book information.
Display book information.
To list all books of a given author.
To list the count of books in the library

Functionalities Required:
If the user tries to add a book then the user must have to provide the below specific Information about the book:
Enter Book Name:
Enter Author Name:
Enter Pages:
Enter Price:
When the user tries to display all books of a particular author then the user must have to enter the name of the author:
Enter the author’s name:
The E-Library Management System must be also capable of counting all the books available in the library.
