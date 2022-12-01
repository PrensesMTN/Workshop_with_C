#include<stdio.h> 

void main()  

{   int percent_sign =37;
    int duo_quote = 34;
    int tab = 9;
    char first_name[] = "Prenses";
    char last_name[] = "Metin";
    unsigned long int studentID = 2166021001;
    printf("Workshop 1 Part-2\n");
    printf("====================\n\n");
    printf("Using tab specifiers...\n");
    printf("%cTab-1<t>Tab-2<t>Tab-3\n",tab);
    printf("%c-----<t>=====<t>-----\n\n",tab);
    printf("\\ this is a back-slash character!\n");
    printf("%c this is a percent sign character!\n",percent_sign);
    printf("\""" this is a double-quote character!\n\n");
    printf("My favourite quotes are:\n");
    printf("1.%c\"Skill is only developed by hours and hours of work.\" \n",tab);
    printf("%c%c%c%c%c%c-Usain Bolt\n",tab,tab,tab,tab,tab,tab);
    printf("2.%c\"It's not about having time. It's about making time.\" \n" );
    printf("%c%c%c%c%c%c-unknown\n",tab,tab,tab,tab,tab,tab);
    printf("3.%c\"All of us do not have equal talent. But, all of us\"\n");
    printf("%chave an equal opportunity to develop our talents.\"\n");
    printf("%c%c%c%c%c%c-A.P.J. Abdul Kalam",tab,tab,tab,tab,tab,tab);

}


// PS D:\belgeler\Workshop_with_C\ws1> gcc w1p2.c -o prog_w1p2
// PS D:\belgeler\Workshop_with_C\ws1> gcc w1p2.c -o prog_w1p2 -Wall
//PS D:\belgeler\Workshop_with_C\ws1> .\prog_w1p2.exe  