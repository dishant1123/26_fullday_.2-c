/*
reverse number  : 
    user  = 123 
    output  : 321 

step  :  rev =0 

1. r= num % 10   // r =0 %10 =1  
2. rev =  rev *10 +r  // rev =321  
3. num = num /10     // num =1 /10 ==> 0   

*/
/*
#include <stdio.h>
int  main()
{
    int num, r,rev =0; 
    printf("enter the num : ");
    scanf("%d",&num); // 456 

    for(; num >0; )  // 0 > 0 
    {
        r= num %10 ;  // r =4  % 10 =4  //   
        rev =rev *10 +r;  // rev = 654 
        num = num /10 ;   // num =4 / 10 ==> 0 
    }
    printf("reverse number is : %d\n",rev);
    return 0 ; 
}
*/ 
/*
pelindrome  number  : 121 131 141 
*/
/*
#include <stdio.h>
int  main()
{
    int num, r,temp, rev =0; 
    printf("enter the num : ");
    scanf("%d",&num); // 456 
    temp =num; 
    for(; num >0; )  // 0 > 0 
    {
        r= num %10 ;  // r =4  % 10 =4  //   
        rev =rev *10 +r;  // rev = 654 
        num = num /10 ;   // num =4 / 10 ==> 0 
    }
    if(rev ==temp) 
    {
        printf("pelindrome number \n");
    }
    else 
    {
        printf("not pelindrome number \n");
    }
    return 0 ; 
}
*/ 

/*
A harshad number is a number that is divisible by the sum of its digits. E.g., the number 18 is a harshad number, because 
the sum of the digits 1 and 8 is 9 (1 + 8 = 9), and 18 is divisible by 9. 
*/
/*
#include <stdio.h>
int  main()
{
    int num, r, temp , sum =0 ; 
    printf("enter the num : ");
    scanf("%d",&num); // 18 
    temp = num;  // temp =18 

    for(; temp > 0; ) // 0  > 0 
    {
        r =  temp %10;  // r = 1 %10 =1 
        sum =sum +r ;   // sum = 9 
        temp = temp /10;  // temp =0   
    }
    if(num % sum ==0) // 18 % 9 ==0 
    {
        printf("harshad number \n");
    }
    else 
    {
        printf("not harshad number \n");
    }
    return 0; 
}
*/ 
/*
twin number  : 
    user =123 
    each digit = 1+2+3 = 6 
    each  multiply = 1*2*3 = 6 

    sum == mul   ===> twin  number 

*/

/*
QUIZ : 

1. which  loop  is  not included in  c. 
    a. for  loop  b. while  loop  c. do while loop  d. for each  

2. find error in this  code. 
#include<stdio.h>
void main()
{
    int i; 
    for(i=1; i<=100; i+=2)
    {
        printf("%f\n",i); 
    }
    return 0;
}

3. 
#include<stdio.h>
int main()
{
    int a=67,b=90;
    
    (a>b) ? a++ : --a; 
    printf("a=%d\n",a);
    return 0 ; 
}
options : a. 67   b. 90  c. 68  d.91  e.none  

*/
