/*
reverse number  : 
input  : 123 
output  : 321

logic :   rev = 0 
r = num %10   ===> r = 1 % 10 = 1  
rev = rev *10 +r   ==> rev =321
num = num /10      ===> num = 0  

*/
/*
#include <stdio.h>
int  main()
{
    int num, r,rev =0; 
    printf("enter the number : ");
    scanf("%d",&num); //123
    for(;num >0;)   // 0 > 0 
    {
        r= num %10;  // r =1 %10 =1  
        rev =rev *10 +r; // rev = 321
        num = num /10;   // num = 1 /10 =0
    }
    printf("reverse number is  : %d",rev);
    return 0 ;
}
*/
// pelindrome  number  : 
/*
121    ==> reverse number  : 121  131 141  111 
*/

/*
#include <stdio.h>
int  main()
{
    int num, r,temp,rev =0; 
    printf("enter the number : ");
    scanf("%d",&num); //123
    temp = num; // temp =123  
    for(;num >0;)   // 0 > 0 
    {
        r= num %10;  // r =1 %10 =1  
        rev =rev *10 +r; // rev = 321
        num = num /10;   // num = 1 /10 =0
    }

    if(rev ==temp) // 321 == 0
    {
        printf("pelindrome number \n");
    }
    return 0 ;
}
*/
/*
twin number :
    123 
    each digit sum: 1+2+3 =6 
    each  digit multiply : 1*2*3 =6 
    sum ==mul  ===> 
    
logic : 123  sum = 0 , mul =1 
    r = num % 10   ===>1 %10 =1
    sum =sum +r    ===> sum = 6
    mul = mul *r   ===> mul = 6 
    num  num /10   ===> num =0

    if(sum ==mul)
*/

/*
armstrong number  :
    153 :  3 digit  
    each  digit  cube  :  1**3   5**3   3**3    
                            1     125    27  
                    sum = 1+125 +27  = 153 
    370  : 3 digit 
    each  digit   cube  : 3**3   7**3  0**0 
                            27    343    0  =370 

    1634 : 4 digit 
    each  digit power : 1**4   6**4   3**4    4**4 
                         1     1296    81      256  ==> 1634 

logic :1634 
 count =0  con num >0    0 > 0 
         num = num /10    // 1 / 10 =0 
         count ++        // 4

amg : 
    r = num %10 ;   // r =1 % 10 =1 
    sum = sum + pow(r,count) ;   sum = 1634
    num = num /10 ; ==> 16 /10 =0 

*/

#include <stdio.h>
#include <math.h>
int  main()
{
    int num,r,temp,sum=0,count =0;

    printf("enter the number : ");
    scanf("%d",&num); //1634

    temp = num;   // temp =1634 
    for(;temp >0; )
    {
        temp = temp /10 ; 
        count ++;    // 4    temp = 0 
    }

    temp = num;  // temp =1634 
    for(; temp >0; )  // 0 > 0 
    {
        r= temp %10 ; // r = 1 %10 =1 
        sum =sum + pow(r,count) ; // sum = 1634 
        temp = temp /10 ; // temp = 0
    }
    if(sum ==num)
    {
        printf("armstrong number \n");
    }
    return 0; 
}