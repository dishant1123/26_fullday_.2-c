/*
strong  number  : 
    145  
    each digit  factorial : 1   4   5 
                            1   24   120
    sum = 1+24+120  = 145 
    for()
    {

        for()
    }
*/
/*
#include <stdio.h>
int  main()
{
    int num, r, temp ,fact,i,sum=0; 
    printf("enter the number : ");
    scanf("%d",&num); //145

    temp = num;   // temp =145 

    for(; temp > 0; ) // 0 > 0 
    {
        r= temp %10;    // r = 1 %10 =1 
        fact =1 ; 
        for(i=1; i<=r; i++) // 1  1 <=1 
        {
            fact = fact * i;  // fact =1
        }
        sum =sum +fact;  // sum = 145
        temp =  temp /10;   // temp =1 /10 =0 
    }
    if(sum == num)
    {
        printf("strong number \n");
    }
    return 0;
}

*/ 

// nested loop  :
/*
    range  :   100  - 10000 
    for ()
    {
        for()
        {
        }
    }
*/

/*
prime  , perfect , twin, reverse , pelindrome , harshard number , strong  number , amg ;
*/

// prime  : 
/*
#include <stdio.h>
int main()
{
    int start,end,i,j,count; 
    printf("enter the start and end number : ");
    scanf("%d %d",&start,&end); // 3  100
    
    for(i=start; i<=end; i++) // i=5  5 <=100 
    {
        count =0;   // 0 
        for(j=1; j<=i; j++) // 4  4<=3 
        {
            if(i % j ==0) // 3 % 3 ==0 
            {
                count ++; // 2
            }
        }// j loop end
        if(count ==2) // 2 ==2
        {
            printf("%d\t",i); // 3 
        }
    }// i loop end
    return 0; 
}

*/ 

// amg : 
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int start ,end,temp ,i,count,r,sum; 
    printf("enter the start and end number : ");
    scanf("%d %d",&start,&end); // 101  10000

    for(i=start; i<=end; i++) // i=102  102 <=10000
    {
        temp = i ;  // temp =102
        count =0; 
        for(;temp >0;) // 0 > 0 
        {
            temp = temp /10;  // temp =1 /10 =0
            count ++;    // 3
        }
        temp =i;  // temp =101; 
        sum =0; 
        for(;temp > 0;) // 0 > 0 
        {
            r =temp %10;  // r =1 %10 = 1 
            sum = sum +pow(r,count);  // sum = 1
            temp =  temp /10;   // temp = 1 /10 = 0 
        }
        if(sum ==i) // 1 == 101
        {
            printf("%d\t",i); // 101
        } 
    }// i loop end 
    return 0;
}
*/

/*
A Disarium number is a number where each digit is raised to the power of its position (starting from 1), and the sum equals the original number.

Example: 
175 :  1*1  7**2  5**3 
175 = 1 + 7**2 + 5**3 = 175

*/

#include <stdio.h>
#include <math.h>
int  main()
{
    int num, temp ,r,count =0,sum =0; 
    printf("enter the number : ");
    scanf("%d",&num);// 175 

    temp =num;  // temp =175 
    for(;temp>0;)  //  // 0 > 0 
    {
        temp = temp /10; // temp = 1 /10 =0 
        count ++;  // 3 
    }
    temp = num; 

    for(; temp > 0;) // 0 > 0
    {
        r= temp %10;  // r =1 %10 =1 
        sum = sum + pow(r,count); // sum = 175
        temp =  temp /10;  // temp =1  /10 =0  
        count --;  // count =0
    }
    if(sum == num)
    {
        printf("Disarium number \n");
    }
    return 0; 
}