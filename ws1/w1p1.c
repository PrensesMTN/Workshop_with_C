#include<stdio.h> 
void main()  
{  
    char first_name[] = "Prenses";
    char last_name[] = "Metin";
    unsigned long int studentID = 2166021001;
    printf("Workshop 1 Part-1\n");
    printf("=================");
    printf("I'm displaying this using the 'printf' stdio\n");
    printf("(standard input output) library function!\n");
    printf("Dear teacher,\n");
    printf("I promise I will work hard from this day onward.\n");
    printf("I acknowledge that practice is extremely important, \n");
    printf("so I will do all workshops, quizzes, and assignments.\n");
    printf("Sincerely,\n\n");
    printf("%s  %s \n", first_name,last_name);
    printf("Student ID# %lu",studentID);   
}  