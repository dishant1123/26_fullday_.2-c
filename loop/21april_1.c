/*
loop  : iteration    ==> repeation 

print 1-100. 

3 type  : 
1. for loop   : entry  control  loop 
2. while loop : entry - exit  control  loop
3. do while loop : exit  control  loop

1. for loop  : 
    for(start; condition; inc/dec)
*/

// ex :1  print  1-100. 
/*
#include <stdio.h>
int  main()
{
    int i; 
    for(i=1;i<=100; i++)  // 101  101<=100  
    {
        printf("%d\t",i); // 1 2 ... 100 
    }

    printf("i value is  : %d\n",i);  
    return 0; 
}
*/ 

// ex :100 -1 print 
/*
#include <stdio.h>
int  main()
{
    int i; 
    for(i=100;i>=1; i--)  // 101  101<=100  
    {
        printf("%d\t",i); // 1 2 ... 100 
    }

    return 0; 
}
*/

// ex : 3 print odd number   between 1-100  .   ==> 1  3  5 7 9 ..99 
/*
#include <stdio.h>
int  main()
{
    int i; 
    for(i=1; i<=100; i+=2) //     3   3 <=100 i =i +2    i+=2   
    {
        printf("%d\t",i); // 1  3 
    }

    return 0; 
}
*/

// ex :4  print  even number  between 1-100 . 

/*
#include <stdio.h>
int  main()
{
    int i; 
    for(i=2; i<=100; i+=2) //     3   3 <=100 i =i +2    i+=2   
    {
        printf("%d\t",i); // 1  3 
    }

    return 0; 
}
*/ 

// ex :5 ask user to enter the ending  number . 
/*
#include<stdio.h>
int main()
{
    int i,n; 
    printf("enter the ending number : \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\t",i); 
    }
    return 0; 
}
*/ 
// ex :6 ask user to enter the   ending  number  and print  odd even  number. 


// ex :7  ask user  to enter the  number and  print  n natural  number  sum. 
/*
input  : 5 
output  : 1+2+3+4+5 = 15
*/

#include <stdio.h>
int main()
{
    int i,n,sum=0; 
    printf("enter the  num : "); 
    scanf("%d",&n);  // 5 
    
    for(i=1; i<=n;i++) // i =6  6 <=5   // start  con  inc/dec 
    {
        sum =sum +i;   // sum =15
    }

    printf("sum is : %d\n",sum);
    return 0; 
}

// ex :8 ask user to enter the  number  and  print  odd and  even  number  sum. 
/*

input  : 10 
output  : even number  sum  : 2+4+6+8+10 =30 
          odd number  sum  : 1+3+5+7+9  = 25
        evensum =0, oddsum = 0 
        for(i=1; i<=n;i++)
        {
            if()
            {

            }
            else 
            {

            }        
        }
        printf("even sum is : %d\n",evensum);
        printf("odd sum is : %d\n",oddsum);
          */
