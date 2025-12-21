// number swap using function (call by value)
#include <stdio.h>
int swap(int , int);                       // Declaration of function

int main( )
{
    int a = 10, b = 20 ;                  // call by value
    swap(a,b);                            // a and b are actual parameters
    printf ("\na = %d b = %d", a, b ) ;
    return 0 ;
}

int swap( int x, int y )                 // x and y are formal parameters
{ 
    int t ;
    t = x ;
    x = y ;
    y = t ;
    printf ("\nx = %d y = %d", x, y ) ;
}