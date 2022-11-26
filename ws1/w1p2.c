#include<stdio.h> 

int main()  

{   int percent_sign =37;
    int duo_quote = 34;
    int tab = 9;
    char first_name[] = "Prenses";
    char last_name[] = "Metin";
    unsigned long int studentID = 2166021001;
    printf("Workshop 1 Part-2\n"
    "====================\n"

"Using tab specifiers...\n" 
"<t>      Tab-1<t>Tab-2<t>Tab-3\n"
"<t>      -----<t>=====<t>-----\n"

"\\ this is a back-slash character!\n" 
"%c this is a percent sign character!\n"
"\%c\""" this is a double-quote character!\n"

"My favourite quotes are:\n"

"1.%c\"Skill is only developed by hours and hours of work.\" \n"
"<6t>-Usain Bolt\n" 
"2.<t> \"It's not about having time. It's about making time.\" \n" 
"%c%c%c%c%c -unknown\n"

"3.\t \"All of us do not have equal talent. But, all of us\"\n"
"<t> have an equal opportunity to develop our talents.\"\n"
"<6t>-A.P.J. Abdul Kalam",tab,tab,tab,percent_sign,duo_quote);

return 0;
}