/*
reverse number :  

input  : 123 
output  : 321 

step : rev = 0  
r = num %10    ===> r = 1 %10 =1 
rev = rev *10 +r   ===> rev =321
num = num /10      ===> num = 1 /10 =0
*/
/*
#include <stdio.h>
int main()
{
    int num, r,rev =0;
    printf("enter the number : ");
    scanf("%d",&num); //123

    for(;num >0;)  // 0 > 0 
    {
        r= num %10 ;  // r =1 
        rev = rev *10 +r ;  // rev =321 
        num = num /10;    // num =0 
    }
    printf("reverse number is  : %d",rev);
    return 0;
}
*/

// pelindrome  number  : 
/*
input  : 121 131  141 151 111 
output  :121   ==> pelindrome number
*/
/*
#include <stdio.h>
int main()
{
    int num, r,temp,rev =0;
    printf("enter the number : ");
    scanf("%d",&num); //123
    temp = num;   // temp =121 
    for(;num >0;)  // 121 > 0 
    {
        r= num %10 ;  // r =1 
        rev = rev *10 +r ;  // rev =121 
        num = num /10;    // num =0 
    }
    if(rev ==temp) //321 == 0  
    {
        printf("pelindrome number \n");
    }
    return 0;
} 
*/ 
// twin number : 
/*
    input  : 123  
    each digit sum : 1+2+3 = 6 
    each digit multiply : 1*2*3 = 6

    sum == mul  ===> twin number  
*/
/*
#include <stdio.h>
int  main()
{
    int num, r, sum =0, mul=1 ; 
    printf("enter the number : ");
    scanf("%d",&num); //123

    for(; num > 0;) //0 > 0 
    {
        r = num %10;  // r =1 %10 =1 
        sum =sum +r;  // sum = 6
        mul = mul *r; // mul =6
        num = num /10;  // num =1/10=0
    }
    if(sum == mul)
    {
        printf("twin number \n");
    }
    return 0; 
}
*/
// armstrong number :

/*
input  :153   ==> digit :3 
each digit cube : 1**3 5**3 3**3
                1    125   27
sum = 1+125+27 = 153

1634 : 4 digit 
each digit power : 1**4 6**4 3**4 4**4
                 1    1296   81     256
sum = 1+1296+81+256 = 1634
*/

#include<stdio.h>
#include<math.h>
int  main()
{
    int num,r,temp,sum=0,count=0; 
    printf("enter the number : ");
    scanf("%d",&num); //1634

    temp = num;   // temp =1634 
     // how  many digit of  number  : 
    for(;temp > 0; )  // 0 > 0 
    {
        temp = temp /10;  // temp =1 /10 =0 
        count ++;  // count =4 
    }
    temp = num;  // temp =1634 

    for(;temp >0;) // 0 > 0 
    {
        r= temp % 10;  // r =1 %10 =1 
        sum = sum + pow(r,count); // sum = 1634  
        temp = temp /10 ;   // temp = 1 /10 =0 
    }
    if(sum == num)
    {
        printf("armstrong number \n");
    }
    return 0 ;
}