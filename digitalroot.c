/* A digital root is a single digit number obtained by continuous summation of all the digits of number */
/* example - digital root of 29 => 2+9 = 11 => 1+1 = 2 */

#include<stdio.h>
int main()
{
    int number, digit, sum_of_digit, digital_root ;

    printf("Enter the number to find its digital root : ") ;
    scanf("%d",&number) ;

    digital_root = number ;
    while(digital_root/10 != 0)
    {
        sum_of_digit = 0 ;
        while(digital_root != 0)
        {
            digit = digital_root % 10 ;
            sum_of_digit = sum_of_digit + digit ;
            digital_root = digital_root / 10 ;
        }

        digital_root = sum_of_digit ;
    }

    printf("The digital root of %d is %d",number, digital_root) ;

    return 0 ;
}
