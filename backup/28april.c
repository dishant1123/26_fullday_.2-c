/*
switch  ==> if else 
*/
/*
#include <stdio.h>
int  main()
{
    char ch; 
    printf("enter the character\n");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a': 
        case 'u':
        case 'o':
        case 'e':
        case 'i':
            printf("it is vowel\n");
            break; 
        default  : 
            if(ch >'a'  && ch <='z')
            {
                printf("it is consonant\n");
                break;
            }
            else if(ch >='0'  && ch <='9')
            {
                printf("it is digit\n");
                break;
            }
            else 
            {
                printf("it is special character\n");
                break;
            }
    }
    return 0; 

}
*/
/*
loop  : means  iteration    ==> 1-100 

type  : 
1. for  loop  :  entry  control  loop  
2. while  loop  :  entry  control  loop
3. do while  loop  : exit  control  loop

====================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================
for  loop  :  syntax : 
             for(intialization; condition; inc/dec)
*/

// task :1   1-100
/*
#include <stdio.h>
int  main()
{
    int i; 
    for(i=1;i<=100;i++) // i=101 ;  101 <=100 
    {
        printf("%d\t",i);  // 1 2 3 ... 100 
    }
    return 0;
}
*/ 
// task :2  100- 1 
/*
#include <stdio.h>
int  main()
{
    int i; 
    for(i=100;i>=1;i--) // i=99 ;  99>=1 
    {
        printf("%d\t",i);  // 100  99
    }
    return 0;
}
*/

//task :3  odd number   1-100 
/*
#include <stdio.h>
int  main()
{
    int i; 
    for(i=0;i<=100;i+=2) // i=3 ;  3 <=100  
    {
        printf("%d\t",i);  // 1  3 5 7 9  ... 99  
    }
    return 0;
}
*/
// task :4  even 
// task :5  a to z 

// task :6  ask user  to enter the  number  and  print that number. 
/*
#include <stdio.h>
int  main()
{
    int num; 
    printf("enter the number : ");
    scanf("%d",&num);
    for(int i=1; i<=num; i+=2)
    {
        printf("%d\t",i);
    }
    return 0;
}
*/

// two range  : 
/*
#include <stdio.h>
int  main()
{
    int start,end; 
    printf("enter the number : ");
    scanf("%d %d",&start,&end);
    for(int i=start; i<=end; i+=2)
    {
        printf("%d\t",i);
    }
    return 0;
}
*/

// ask user  to enter the  number  and  print  n natural  number  sum. 

// input  : 5   ===> 1+2+3+4+5 =15 
/*
#include <stdio.h>
int  main()
{
    int  num,i,evensum =0,oddsum=0; 
    printf("enter the number : ");
    scanf("%d",&num); // 10 
    for(i=1; i<=num; i++) // i =1  1<=10  
    {
        if(i % 2==0)
        {
            evensum = evensum + i;
        }
        else 
        {
            oddsum = oddsum + i;
        }
    }
    printf("even sum = %d\n",evensum);
    printf("odd sum = %d\n",oddsum);
    return 0; 
}
*/ 
// task :2 ask user  to enter the  number  and  print  odd  even  sum. 
/*
    input  : 10 
        even  : 2+4+6+8+10 = 30 
        odd  : 1+3+5+7+9  =25 
*/

// task  :3 ask user to enter the  number  and  print  factorial  of  this  number.

/*
    input  : 5    ===> 1*2*3*4*5 =120 
    input  : 6   ===> 1*2*3*4*5*6 =720 
*/

// prime number  : 
/*
prime   ==> 2 factors   ==>  1 ,number itself 

6 factors  : 1,2,3,6  ==> not  prime 
7 factors  : 1,7   ==> prime  
33 factors  :1,3,11,33  ==> not  
2  ==> prime
*/

#include <stdio.h>
int main()
{
    int num,i,count =0;
    printf("enter the  number  : ");
    scanf("%d",&num); //5 
    for(i=1; i<=num; i++) // i=6  6<=5 
    {
        if(num % i ==0) // 5 % 5  ==0 
        {
            count ++;  // 2
        }
    } // i  loop end 
    if(count ==2) // 2 == 2 
    {
        printf("prime number \n");
    }
    else 
    {
        printf("not prime number \n");
    }
    return 0 ; 
}

// perfect number  : 
/*
6 factors : 1,2,3,6   ==> sum = 1+2+3 =6  
28 factors  :1,2,4,7,14,28  ==> sum = 1+2+4+7+14 =28 
100 factors  :1,2 ,4,5,10 ,20,25,50 ,100 ==> sum = 1+2+4+5+10+20+25+50 ==> not perfect   
*/
