/*
strong  number  : 145  
    each  factorial  : 1   = 1  4 = 24   5 =120 
          sum = 1+120 +24 =145    

*/

#include <stdio.h>
int main()
{
    int num,i,temp,r,fact,sum=0;
    printf("enter the  number  : "); 
    scanf("%d",&num); // 145 
    temp =num;   // temp =145  
    for(;temp >0;)   // 0 > 0 
    {
        r = temp %10;   // r = 1 %10  = 1 
        fact =1 ;  // 1 
        for(i=1; i<=r; i++) // 4  4 <=4  
        {
            fact =fact *i;   // fact = 1  
        }
        sum = sum +fact; // sum = 145 
        temp = temp /10;  //1 /10 = 0 
    }

    if(sum ==num)
    {
        printf("strong number \n");
    }
    return 0; 
}
/*
task :1 ask user  to enter the  number  and  print  table  of this  number.
input  : 5 
ouput  : 5 * 1= 5 
        5 * 2= 10
        5 * 3= 15
        5 *10 =50 

*/