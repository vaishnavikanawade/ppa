Q.GIVEN AN ARRAY OF INTEGERS PRINT ALL ALTERNATE PRIME NO FROM THE LIST.

#include<stdio.h>
int isPrime(int num){
	for(int j=2;j<num;j++)
	{
		if(num%j==0 )
		{
			return 0;
		}
	}
	return 1;
}

void prime(int arr[],int size){
int i,flag=0;
for( i=0;i<=size-1;i++)
{
	if (isPrime(arr[i]))
	{
		if (flag ==0){
			printf("%d\t",arr[i]);
			flag =1;
		}
		else{
			flag--;
		}
	}
}
}
int main()

{
    int n;
    printf("enter the no :");
    scanf("%d",&n);

    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	
   prime(arr,n);
}


/*output/
	vaishnavi@pucsd:~/plc$ gcc prime_alter.c 
vaishnavi@pucsd:~/plc$ ./a.out
enter the no :8
2
3
4
5
6
7
8
9
2	5	vaishnavi@pucsd:~/plc$ 
*/
