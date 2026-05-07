/*
while  loop  : 

syntax : 

i= intialize
while (condition) : 
    printf() 
    inc /dec 
*/
// ex :1  1-100 
/*
#include <stdio.h>
int  main()
{
    int i; 
    i=1;  // intialize
    while (i<=100)  // con 
    {
        printf("%d\t",i);  // printf 
        i++;  // inc/ dec 
    }
    return 0; 
}
*/ 
// ex :2  100 -1 
/*
#include <stdio.h>
int  main()
{
    int i; 
    i=100;  // intialize
    while (i>=1)  // con 
    {
        printf("%d\t",i);  // printf 
        i--;  // inc/ dec 
    }
    return 0; 
}
*/
// prime , perfect , twin  , amg , harshard, dia ,strong , reverse , pelindrome  

// strong number  : 
/*
    145 :    each  digit factorial :  1  24   ===>4*3*2*1  120 
    sum of facto : 1+120 +24 =145      
*/
/*
#include <stdio.h>
int  main()
{
    int num,sum =0,fact , temp; 
    printf("enter a number : ");
    scanf("%d",&num); //145 

    temp = num;   // temp =145 
    while(temp >0)// 0 >0 
    {
        int r = temp %10;   // r = 1 %10 =1 
        fact =1 ;  // fact =1 
        int i=1 ;  //1  
        while(i <=r) // 1 <=1
        {
            fact = fact *i;  // fact = 1   
            i++;  // 6 
        }
        sum  +=fact;  // sum =sum +fact    sum =145
        temp = temp /10;  // temp = 1 /10 = 0 
    } 
    if(sum == num)
    {
        printf("strong number \n");
    }
    return 0; 

}
*/ 

// dia : 
/*
    175 :   3 digit 
    1 = 1 
    7* 7 =49 
    5*5*5 =125
    sum = 1+49 +125 =175 
*/
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int num , temp , count,sum; 
    printf("enter a number : ");
    scanf("%d",&num); //175
    temp  =num; 
    count =0 ; 
    while(temp > 0) // 0 > 0
    {
        temp = temp /10 ; // temp =1 /10 =0
        count ++;  // 3 
    }
    temp = num; // temp =175 
    sum =0;   // sum = 0 
    while(temp > 0) // 0 > 0 
    {
        int r= temp  % 10 ;  // r = 1 %10 =1  
        sum = sum +pow(r,count);  // sum =175   
        count --;       //  0 
        temp = temp /10;  // temp = 1 /10 =0 
    }
    if(sum == num)
    {
        printf("dia \n");
    }
    return 0 ;
}
*/ 

// amg : 

#include <stdio.h>
#include <math.h>
int main()
{
    int num ,temp , sum ,count; 
    printf("enter a number : ");
    scanf("%d",&num); //153 

    temp = num; 
    sum =0; 
    count =0; 
    while(temp > 0) 
    {
        temp = temp /10 ;
        count ++; 
    }
    temp = num;
    while(temp >0)
    {
        int  r=  temp % 10 ;
        sum = sum + pow(r,count);
        temp = temp /10;
    }
    if(sum == num)
    {
        printf("amg \n");
    }
    return 0 ; 
}