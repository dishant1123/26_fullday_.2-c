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
    int num, temp ,r ,count =0 ,sum=0; 
    printf("enter the number : ");
    scanf("%d",&num); //1306

    temp = num;    // temp =1306 

    for(;temp >0;)   // 0 > 0 
    {
        temp = temp /10;  // temp = 1 /10 =0
        count ++;     //4
    }
    temp = num;  // temp =1306 

    for(;temp > 0; ) // 0 > 0 
    {
        r = temp %10;   // r = 1 %10  =  1 
        sum =sum + pow(r,count); // sum = 1306    
        temp = temp /10;  // temp = 1 /10 =0  
        count --; // count =0 
    }
    if(sum ==num) // 1306  == 1306
    {
        printf("Disarium number \n");
    }
    return 0; 
}

// task  : 1 ask user  to enter the  start  and end number  print disarium number between start and end range.