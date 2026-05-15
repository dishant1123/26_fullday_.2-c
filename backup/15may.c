/*
loop  : iteration    ===> repeation 

1. for   : entry  control  loop  
2. while : entry  control  loop
2. do while   : exit  control  loop 

for   ===> syntax 

for(intialization; condition; inc/dec)
{
    state .
}

*/

// ex :1 1-100 
/*
#include <stdio.h>
int main()
{
    int i; 
    for(i=1; i<=100; i++) // 101  101 <=100 
    {
        printf("%d\t",i); // 1 2  ... 100  
    }
    return 0; 
}
*/ 
// ex 2 :100-1 
/*
#include <stdio.h>
int main()
{
    int i; 
    for(i=100; i>=1; i--) // 101  101 <=100 
    {
        printf("%d\t",i); // 1 2  ... 100  
    }
    return 0; 
}
*/ 

// ex :3 print odd number  between  1-100 
/*
#include <stdio.h>
int main()
{
    int i; 
    for(i=1; i<=100; i+=2) // 5  1 <=100 
    {
        printf("%d\t",i); // 1 3 5   ... 100  
    }
    return 0; 
}
*/ 
// ex :4 print even number  between  1-100
/*
#include <stdio.h>
int main()
{
    int i; 
    for(i=2; i<=100; i+=2) // 101  101 <=100 
    {
        printf("%d\t",i); // 1 2  ... 100  
    }
    return 0; 
}
*/
// ex :5 print  a to z using for loop  
/*
#include <stdio.h>
int main()
{
    char ch; 
    for(ch='a'; ch<='z'; ch++) // 101  101 <=100 
    {
        printf("%c\t",ch); // 1 2  ... 100  
    }
    return 0; 
}
*/ 

// ex :6 user input 
/*
#include <stdio.h>
int  main()
{
    int i,n; 
    printf("enter the number  : \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d\t",i);
    }
    return 0;
}
*/

// ex :7 ask user to  enter the number  and  print n natural number  sum. 
/*
#include <stdio.h>
int  main()
{
    int i,n,sum=0; 
    printf("enter the number  : \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
            sum =sum +i; 
    }
    // printf("sum is : %d\n",sum);
    return 0;
}
*/ 
// ex :8 ask user to  enter the number  and  print n natural number  of  odd sum  and even number sum. 

/*
    input  : 10 
    odd number  sum  : 1 3 5 7 9  ===> 25 
    even number  sum  : 2 4 6 8 10  ===> 30
*/

// ex : 9 prime number  : 
/*
2 factors  : 1 , number it self 

ex :4  ===>1,2,4 ===> not  
    5  ===> 1,5  
*/

#include <stdio.h>
int  main()
{
    int num, i,count=0; 
    printf("enter the number  : \n");
    scanf("%d",&num); // 3 

    for(i=1; i<=num; i++) // 4  4<=3 
    {
        if(num % i ==0) // 3  % 3 ==0 
        {
            count ++; // 2
        }
    }
    if(count ==2)  //  2==2 
    {
        printf("prime");
    }
    else 
    {
        printf("not prime");
    }
    return 0 ;
}

//ex :10 perfect number  
/*
    6 factors  : 1,2,3,6  
    sum = 1+2+3 =6    ===> perfect 

    28 factors  : 1,2,4,7,14,28 
    sum = 1+2+4+7+14  = 28  ===> perfect

    10 factors  : 1,2,5,10 
    sum = 1+2+5 = 8  not perfect 
    
*/
