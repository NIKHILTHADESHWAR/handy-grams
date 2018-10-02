/* A palindrome is a number whose reverse is equal to the original number */
#include<stdio.h>

int palindrome(int number) ;

int main()
{
    int number, is_palindrome ;

    printf("Enter the number : ") ;
    scanf("%d", &number) ;

        if(number <= 0)
    {
        printf("Invalid Entry\n") ;
        exit(1) ;
    }

    is_palindrome = palindrome(number) ;

    if(is_palindrome)
        printf("\n%d is Palindrome\n",number) ;
    else
        printf("\n%d is not Palindrome\n",number) ;

    return 0 ;
}

int palindrome(int number)
{
    int reverse=0, remainder, temp_num ;

    temp_num = number ;

    while(temp_num != 0)
    {
        remainder = temp_num % 10 ;
        reverse = 10 * reverse + remainder ;
        temp_num = temp_num / 10 ;
    }

    if(reverse == number)
        return 1 ;
    else
        return 0 ;
}
