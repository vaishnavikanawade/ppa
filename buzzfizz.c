#include<stdio.h>
void buzzfizzprint()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf(" Fuzz Buzz,");
        }
        else if(i%3==0)
        {
            printf(" Fizz,");
        }
        else if(i%5==0)
        {
            printf(" Buzz,");
        }
        else
        {
            printf("  %d,",i);
        }
    }
}
int main()
{ 
    buzzfizzprint();   
}

