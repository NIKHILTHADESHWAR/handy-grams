/* The following program gives fibonacci series upto N elements using iterative loop(in this case - for loop) */
#include<stdio.h>

int main()
{
    int i_th_element, first_fib=0, second_fib=1, no_of_elements ;

    printf("Enter the number of elements for fibonacci series : ") ;
    scanf("%d",&no_of_elements) ;

    if(no_of_elements <= 0)
    {
        printf("\nInvalid Entry\n") ;
        exit(1) ;
    }

    printf("\nThe fibonacci series is :\n") ;
    for(i_th_element=0 ; i_th_element<no_of_elements ; i_th_element++)
    {
        printf("Fib(%d) = %d\n",(i_th_element+1), first_fib) ;
        first_fib = second_fib ;
        second_fib = first_fib + second_fib ;
    }

    return 0 ;
}
