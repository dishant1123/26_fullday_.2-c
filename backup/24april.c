/*
operator  : 

1. airthematic  operator  : + - * / % 
2. relational  operator   : < > <= >= == !=     ==> ans.   ==> bool value  ==> 0 1 
3. logical  operator  :  &&  ||  ! 
4. assignement  operator  : += -= *= /=  %= 
5. increment  operator  : ++ --
6. tenary operator  :    ? :   ==> it is  short  form of  if else 
*/
/*
#include <stdio.h>
int main()
{
    int  a,b; 
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);

    // printf("logical op : %d\n",(a>b  && a!=b)); 
    printf("logical op : %d\n",(a>b  || a!=b)); 

    return 0; 
}
*/ 

// ex :2  logical not   ==> !
/*
value of a        !a result     meaning 
0                    1          TRUE 
non-zero             0          FALSE

*/
/*
#include <stdio.h>
int  main()
{
    // int a=0;   // 0  ==> false  1  ==> true  
    int a=5; 
    if(!a)  // !0   ==> 1     !1   ==> 0 
    {
        printf("false becomes true\n");
    }
    return 0 ; 
}
*/ 

// assignment operator : 
/*
#include <stdio.h>
int  main()
{
    int a=90 , b=10; 
    // a=a+b;   a=a-b   ==> a-=b   a=a*b  ==> a*=b  a=a/b  ==> a/=b
    a+=b; 
    printf("a=%d\n",a);
    return 0 ;
}
*/ 

// increment operator :
/*
pre inc :   ++a   pre dec : --a
post  inc : a++   post dec : a-- 
*/
/*
#include <stdio.h>
int  main()
{
    int a=90; 
    // printf("a value is  : %d\n",a);  // 90 
    // printf("post inc : %d\n",a++); // 90 
    // printf("after  post inc a  value is  : %d\n",a);  // 91 

    printf("a value is  : %d\n",a);  // 90 
    printf("pre inc : %d\n",++a); // 91 
    printf("after  pre inc a  value is  : %d\n",a);  // 91 

    return 0 ;
}
/*
/*
task  :1 

a=25 
a++  +  --a  +  a--  - ++a    ===> a= ? 
25   +  25   +  25  -  25     === >50     

d     s   v   
100  50   48 
*/

// tenary operator :  condition ? true : false
/*
#include <stdio.h>
int  main()
{
    int  a=9,b=89; 

    (a >b) ? printf("a=%d\n",a) : printf("b=%d\n",b);
    
    return 0; 
}
*/

// conditional  statement  : 

/*
1. if else : 
    syntax : 
        if(con) 
            statement
        else 
            statement

*/

// task :1  ask user to  enter the  number  and check it odd or even.
/*
#include <stdio.h>
int  main()
{
    int n; 
    printf("enter a number\n");
    scanf("%d",&n);

    if(n % 2==0)   // modlus  op  ===> reminder 
    {
        printf("even\n");
    }
    else 
    {
        printf("odd\n");
    }
    return 0 ;
}
*/ 
// task  :2  ask user  to enter the year  and check it is leap year or not.

// nested  if : 
/*
    if(con)
        statement
    else if(con)
        statement
    else 
        statement
*/
/*
#include <stdio.h>
int main()
{
    int a,b; 
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("a is greater than b\n");
    }
    else if(b>a)
    {
        printf("b is greater than a\n");
    }
    else 
    {
        printf("same"); 
    }
    return 0;
}
*/ 
// ladder if : 
/*
if(con)
    if(con)
        statement
    else 
        statement
else if (con)
    if(con)
        statement
    else
        statements 
*/  

// ask user to enter the  three num and check which one is  big . 
/*
#include <stdio.h>
int main()
{
    int a,b,c; 
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);  // a=9  b=7  c=67 

    if(a>b)  // 9 > 7
    {
        if(a>c) // 9 > 67 
        {
            printf("a is the biggest\n");
        }
        else 
        {
            printf("c is the biggest\n");
        }
    }
    else if(b>c)  // 78 >67 
    {
        if(b>a)  // 78 >9 
        {
            printf("b is the biggest\n");
        }
        else 
        {
            printf("c is the biggest\n");
        }
    }
    else 
    {
        printf("equal\n");
    }
    return 0; 
}
*/ 
// nested if : 
/*
#include <stdio.h>
int  main()
{
    int a,b,c; 
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);  // a=9  b=7  c=67

    if(a>b  && a>c)
    {
        printf("a is the biggest\n");
    }
    else if(b>a  && b>c)
    {
        printf("b is the biggest\n");
    }
    else if(c>a  && c>b)
    {
        printf("c is the biggest\n");
    }
    else 
    {
        printf("equal\n");
    }
    return 0;
}
*/

// task : 2 ask user to enter the  number  and check  whether it is  divisible  by 5 or 11 or both .   input  : 55   ==> num is divisible by both 5 and 11 

// grade system :
/*

90 +        A+ 
80-90       A
70-80       B+
60-70       B
50-60       C+
40-50       C
below 40    Fail
*/

#include <stdio.h>
int main()
{
    int phy,che,maths,total =0; 
    float per; 
    printf("enter the  phy marks : ");
    scanf("%d",&phy);
    printf("enter the  maths marks : ");
    scanf("%d",&maths);
    printf("enter the  che marks : ");
    scanf("%d",&che);

    total = phy + maths + che;
    per = total /3;   // per = total *100 /300
    printf("total is %d\n",total);
    printf("per is %f\n",per);
    return 0 ;
}
