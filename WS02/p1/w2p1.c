/*
*****************************************************************************
                          Workshop - #2 (P1)

*****************************************************************************
*/

/*Data Type	        Format Specifier
int	                    %d
char	                %c
float	                %f
double	                %lf
short int	            %hd
unsigned int	        %u
long int	            %li
long long int	        %lli
unsigned long int	    %lu
unsigned long long int	%llu
signed char	            %c
unsigned char	        %c
long double	            %Lf
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{
    float sshirt;
    float mshirt;
    float lshirt;
    int number;
    float total;

    const double TAX = 0.13;
    const char patSize = 'S';

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f",&sshirt);
    printf("\nEnter the price for a MEDIUM shirt: $");
    scanf("%f",&mshirt);
    printf("\nEnter the price for a LARGE shirt: $");
    scanf("%f",&lshirt);


    printf("\n\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n",sshirt);
    printf("MEDIUM  : $%.2f\n",mshirt);
    printf("LARGE  : $%.2f\n\n",lshirt);

    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying : ");
    scanf("%d",&number);
    printf("\n\nPatty's shopping cart...\n");

    printf("Contains : %d shirts\n",number);

    total=number*sshirt;

    printf("Sub-total: $%0.2f\n",total);
    printf("Taxes    : $%0.2f\n",(TAX*sshirt)*number);
    total=total+(TAX*sshirt*number);
    printf("Total    : $%0.2f\n",total);

    return 0;
}
