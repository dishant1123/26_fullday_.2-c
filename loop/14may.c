/*
    nested  do while  loop  : 
*/

// dia number ,amg  number  : 

#include<stdio.h>
#include<math.h>
int main()
{
    int start,end,count ,sum ,temp,r; 
    printf("enter start : ");
    scanf("%d %d",&start,&end);  // 5

    int i=start; 
    do 
    {
        temp =i ;
        count =0; 
        do 
        {
            temp = temp /10; 
            count++;
        }while(temp >0);
        temp =i; 
        sum =0 ; 
        do 
        {
            r= temp %10; 
            sum =sum + pow(r,count); 
            count--;
            temp = temp /10; 
        }while (temp > 0);

        if(sum == i)
        {
            printf("%d\t",i);
        }
        i++;

    } while(i<=end); 
    return 0; 
}

/*
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/

