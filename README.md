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
