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

#include <stdio.h>
int  main()
{
    int  num,i,sum =0; 
    printf("enter the number : ");
    scanf("%d",&num); // 4 
    for(i=1; i<=num; i++) // i =5  5<=4 
    {
        sum =sum +i;   // sum = 10 

    }
    printf("sum = %d\n",sum);
    return 0; 
}

// task :2 ask user  to enter the  number  and  print  odd  even  sum. 
/*
    input  : 10 
        even  : 2+4+6+8+10 = 30 
        odd  : 1+3+5+7+9  =25 
*/
