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