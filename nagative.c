#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a>=1)
        printf("Given number is positive");
    else if(a==0)
        printf("Given number is zero");
    else
        printf("Given number is nagative");
    getch();
}
