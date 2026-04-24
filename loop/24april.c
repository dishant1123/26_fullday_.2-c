/*
reverse number  : 
    user  = 123 
    output  : 321 

step  :  rev =0 

1. r= num % 10   // r =0 %10 =1  
2. rev =  rev *10 +r  // rev =321  
3. num = num /10     // num =1 /10 ==> 0   

*/

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

/*
pelindrome  number  : 121 131 141 
*/
