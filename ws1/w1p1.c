#include<stdio.h> 
void main()  
{  
    char first_name[] = "Prenses";
    char last_name[] = "Metin";
    unsigned long int studentID = 2166021001;
    printf("Workshop 1 Part-1\n");
    printf("=================\n\n");
    printf("I'm displaying this using the 'printf' stdio\n");
    printf("(standard input output) library function!\n\n");
    printf("Dear teacher,\n\n");
    printf("\tI promise I will work hard from this day onward.\n");
    printf("\tI acknowledge that practice is extremely important, \n");
    printf("\tso I will do all workshops, quizzes, and assignments.\n\n");
    printf("Sincerely,\n\n");
    printf("%s  %s \n", first_name,last_name);
    printf("Student ID# %lu",studentID);   
}  