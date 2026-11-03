#include<stdio.h>
int main()
{
    int connection;
    printf(" enter  number from 1 to 3:");
    scanf("%d",&connection);
    if(connection=1)
    {
        printf("220 unit=220*5=1100");
        printf("shop\n");
        printf("\nwelcome");

    }
    if(connection=0)
    {
        printf("200 unit=200*5=1000");
        printf("home\n");
        printf("welcome");
    }
    if(connection=2)
    {
        printf("300 unit=300*5=1500");
        printf("other place\n");
        printf("welcome");
    }
    if(connection=3)
    {
        printf("400 unit=400*5=2000\n");
        printf("no idea\n");
        printf("welcome");

    }
    else
    {
        printf("invalid number");
    }
    return 0;
    

}