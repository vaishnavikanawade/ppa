//q.find all elements in array which have atleast two max elements//

#include<stdio.h>
#include<stdlib.h>
 void disp(int arr[],int size)
 {
     int i=0,max1=0,max2=0;
     for(i=0;i<size;i++)
     {
         if(max1<arr[i])
         {
             max1=arr[i];
         }
     }
         for(i=0;i<size;i++)
         {
             if((arr[i]!=max1)&&(max2<arr[i]))
             {
                 max2=arr[i];
             }
         }
         for(i=0;i<size;i++)
         {
             if((arr[i]!=max1)&&(arr[i]!=max2))
             {
                 printf("%d\t",arr[i]);
             }
         }
     }



int main()
{
    int n;
    printf("enter the no ");
    scanf("%d",&n);

    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


   disp(arr,n); 
} 

/*output                               ^
vaishnavi@pucsd:~/task$ gcc 1.c
vaishnavi@pucsd:~/task$ ./a.out
enter the no 5
7 8 5 4 2
5       4       2       vaishnavi@pucsd:~/task$ gcc 1.c
vaishnavi@pucsd:~/task$ ./a.out
enter the no 6
9
3
8
3
2
10
3       8       3       2       vaishnavi@pucsd:~/task$ 
*/




