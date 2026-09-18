#include <stdio.h>

int main(){
    int x;
    printf("Enter x: ");
    scanf("%i", &x);

    if (x>0)
    {
        if (x<=5)
        {
            x=x*x*x-5*(x*x);
            printf("Answer: %i\n", x);    
        }else
        {
            if (x>10)
            {
                x=x*x-3;
                printf("Answer: %i\n", x);
            }else
            {
                printf("Number is not correct, please try again.");
            }
        }
    } else 
    {
        if (x>=-32)
        {
            if (x<-20)
            {
                x=x*x-3;
                printf("Answer: %i\n", x);
            }else
            {
                printf("Number is not correct, please try again.");
            }
        }else
        {
            printf("Number is not correct, please try again.");
        }
    }
    return 0;
}