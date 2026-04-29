/*
pelindrome   number in  range  : 121 
*/
/*
#include <stdio.h>
int  main()
{
    int  start ,end ,temp,r,rev;
    printf("enter the start number : ");
    scanf("%d",&start); // 100
    printf("enter the end number : ");
    scanf("%d",&end); // 500
    
    for(int i =start;  i<=end; i++)  // i=102  101 <=500 
    {
            temp =i ;  // temp =102
            rev =0;    // rev = 0
            for(;temp > 0;) // 0 > 0 
            {
                r= temp %10;  // r = 1 %10 =1 
                rev = rev *10 +r ; // rev = 101
                temp =temp /10 ;   // temp = 1 /10 = 0   
            }// temp  loop  
            if( i== rev) //101  == 101  
            {
                printf("%d\t",i); // 101
            }
    }// i loop 
    return 0;
}
*/
/*
    r = num %10;   1 % 10 =1 
    rev =rev *10 +r rev =  321
    num = num /10 ; 123 /10 =0 

    if(num ==rev)
*/
// reverse number  : 
/*
#include <stdio.h>
int  main()
{
    int  start ,end ,temp,r,rev;
    printf("enter the start number : ");
    scanf("%d",&start); // 100
    printf("enter the end number : ");
    scanf("%d",&end); // 500
    
    for(int i =start;  i<=end; i++)  // i=102  101 <=500 
    {
            temp =i ;  // temp =102
            rev =0;    // rev = 0
            for(;temp > 0;) // 0 > 0 
            {
                r= temp %10;  // r = 1 %10 =1 
                rev = rev *10 +r ; // rev = 101
                temp =temp /10 ;   // temp = 1 /10 = 0   
            }// temp  loop  
            
            printf("%d\t",rev); // 101
    }// i loop 
    return 0;
}
*/ 

// strong number  : 
/*
145 : each digit  :   ==> 1  24   120  ==> sum = 1+24+120  =145 
*/
#include <stdio.h>
int  main()
{
    int  start ,end , fact,sum;
    printf("enter the start number : ");
    scanf("%d",&start); // 100
    printf("enter the end number : ");
    scanf("%d",&end); // 500

    for(int i =start;  i<=end; i++)  // i=145  123 <=500
    {
        int temp =i ;  // temp =145
        sum =0; 
        for(; temp > 0; ) // 1 > 0 
        {
            int r= temp %10;  // r= 1
        
            fact =1 ; 
            for(int  j=1; j<=r; j++ ) // 1  1 <=1  
            {
                fact =fact *j;   // fact = 1
            }
            sum =sum +fact;  // sum = 145 
            temp = temp / 10 ; // temp= 0
        }
        if(sum ==i)
        {
                printf("%d\t",i); // 145
        }
    }
    return 0; 

}
/*
A number is said to be a Disarium number when the sum of its digit raised to the power of their respective positions 
becomes equal to the number itself.
For example, 175 is a Disarium number as follows:
1^1+ 7^2 + 5^3 = 1+ 49 + 125 = 175
*/
