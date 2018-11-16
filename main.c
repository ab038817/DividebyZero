#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    printf("Enter value for A:\n ");
    float a;
    scanf("%f", &a);

    printf("Enter value for B:\n ");
    float b;
    scanf("%f", &b);

    if (b == 0 || isdigit(b) == -1 )
    {
        printf("Error: division by zero.");
    }
    else
    {
        float c = a / b;
        // Show value of c to the console.


        c = a/ b;
        printf("Value of C %f \n ", c);


    }






    // show c out to the console.

    return 0;
}
