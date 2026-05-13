/*
do while  loop  : 

syntax : 

i= intial 
do 
{
    statement; 
    inc /dec ; 

}while(con); 
*/

// ex :1 1 - 100 using do while loop .
/*
#include<stdio.h>
int main()
{
    int i=1;              // i=1 
    do 
    {
        printf("%d\t",i);  // 1 2  3 ... 100  
        i++;         // 3  
    }
    while(i<=100); // 3 <=100 
    return 0 ;
}
*/
// ex :2 100 -1 using do while loop .
/*
#include<stdio.h>
int main()
{
    int i=100;              // i=1 
    do 
    {
        printf("%d\t",i);  // 1 2  3 ... 100  
        i--;         // 3  
    }
    while(i>=1); // 3 <=100 
    return 0 ;
}
*/ 
// ex : 3 print  odd number using do while loop .
/*
#include<stdio.h>
int main()
{
    int i=1;              // i=1 
    do 
    {
        printf("%d\t",i);  // 1 2  3 ... 100  
        i+=2;         // 3  
    }
    while(i<=100); // 3 <=100 
    return 0 ;
}
*/ 
// ex :4 print  even number using do while loop .
/*
#include<stdio.h>
int main()
{
    int i=2;              // i=1 
    do 
    {
        printf("%d\t",i);  // 1 2  3 ... 100  
        i+=2;         // 3  
    }
    while(i<=100); // 3 <=100 
    return 0 ;
}
*/

// ex :5 ask user to enter the  number  and  print the  number  to the range . 
/*
#include<stdio.h>
int main()
{
    int i=1,num;
    printf("enter the number  : "); 
    scanf("%d",&num);              // i=1 
    do 
    {
        printf("%d\t",i);  // 1 2  3 ... 100  
        i++;         // 3  
    }
    while(i<=num); // 3 <=100 
    return 0 ;
}
*/

// prime  twin rev pelindrome  dia harshard amg perfect strong  

// dia :  175   ===> 1 power 1 ==> 1     7 power 2 ==>49   5 power 3 == >125   sum =175  
/*
#include<stdio.h>
#include<math.h>
int  main()
{
    int num, temp ,sum , count,r;
    printf("enter the number : ");
    scanf("%d",&num); 

    temp = num; 
    count =0; 
    do 
    {
        temp = temp /10; 
        count ++; 
    }while(temp > 0);

    temp =num; 
    sum =0; 
    do 
    {
        r = temp %10; 
        sum =sum + pow(r,count); 
        count --; 
        temp = temp /10;
    } while(temp >0); 

    if(sum ==num)
    {
        printf("dia");
    }
    return 0; 
}
*/ 

// fibonacci seris : sum  of  tow preceding  1  and start  with  0 and 1 ; 

/*

0 , 1 , 1 ,  2  , 3  5  8  13  21 
*/

#include<stdio.h>
int main()
{
    int first =0 , second =1 ,next ,num,i; 
    printf("enter the  number  : "); 
    scanf("%d",&num);  // 10 

    printf("fibonacci series :  \n");

    for(i=1; i<=num; i++) // 5 5  <=10 
    {
        printf("%d\t",first);  // 0  1  1  2   3 
        next = first + second; // next = 3    
        first = second; // first = 3
        second = next;  // second =3   
    }
    return 0 ; 

}    

// while   : 