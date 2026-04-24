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

// task  :2  ask user  to enter the year  and check it is leap year or not.



