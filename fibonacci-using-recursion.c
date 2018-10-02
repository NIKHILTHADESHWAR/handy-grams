/* The following program gives fibonacciseries using recursion */

#include<stdio.h>

int fibonacci(int i_th_element) ;

int main()
{
    int no_of_elements, fibonacci_i, i_th_element ;

    printf("Enter the number of elements for fiboncci series\n") ;
    scanf("%d", %no_of_elements) ;

    if(no_of_element <= 0)
    {
        printf("Invalid Entry\n") ;
        exit(1) ;
    }

    printf("\nThe fibonacci series is :\n") ;
    for(i_th_element = 0; i_th_element < no_of_elements; i_th_element++)
    {
        fib_i = fibonacci(i_th_element) ;
        printf("Fib(%d) = %d",(i_th_element+1), fib_i) ;
    }

    return 0 ;
}

int fibonacci(int i_th_element)
{
    if(i_th_element == 0)
        return 0 ;

    else if(i_th_element == 1)
        return 1 ;
    else
        return fibonacci(i_th_element-1) + fibonacci(i_th_element-2) ;
}
