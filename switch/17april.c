// conio.h ,clrscr ,getch   ==> no written in vs code 
// task  :1 
/*
ask  user to enter the character and check it  it is  vowel  consonant  or  digit or special character using  switch case. 
*/
/*
#include <stdio.h>
int  main()
{
    char ch; 
    printf("enter the character\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("it is a vowel\n");
            break;
        default :
            if(ch >'a' && ch <='z')    
            {
                printf("it is a consonant\n");
                break;
            }
            else if(ch >='0' && ch <='9') //  
            {
                printf("it is a digit\n");
                break;
            }
            else 
            {
                printf("it is a special character\n");
                break;
            }
    }
    return 0; 
}
*/
/*
======= calculation or  grade ===== 
1.calculation 
2. grade or character 
case 1.
    a. calculation  of area of circle 
    b. calculation of area of triangle

case 2. 
    a. enter the 3 subject marks and  print grade 
    b. enter the character and check ==> vowel consonant digit special character 
*/

// if else : 

/*
    if (condition)
{   
    // code
    }
else 
{
    code 
}
*/

// task :1  check  odd  or even 
/*
#include <stdio.h>
int main()
{
    int num; 
    printf("enter the  number  : \n"); 
    scanf("%d",&num);

    if(num % 2==0)
    {
        printf("it is even\n");
    }
    else 
    {
        printf("it is odd\n");
    }
    return 0 ;
}
    */
// ask user to enter the age  and check whether its is eligible  for vote or not. 
/*
#include <stdio.h>
int main()
{
    int age; 
    printf("enter the  age : \n"); 
    scanf("%d",&age);

    if(age >18) 
    {
        printf("eligible  for voting  \n");
    }
    else 
    {
        printf("not eligible for voting\n");
    }
    return 0 ;
}
*/ 

// ask user enter the year  and check it  is  leap yr or not. 

// nested if : 
/*
#include <stdio.h>
int main()
{
    int a,b; 
    printf("enter the number  1 : \n");
    scanf("%d",&a);
    printf("enter the number  2 : \n");
    scanf("%d",&b);

    if(a>b)
    {
        printf("a is big"); 
    }
    else if(b>a)
    {
        printf("b is  big"); 
    }
    else 
    {
        printf("same");
    }
    return 0; 
}
*/ 

// grade calculation  : 

#include <stdio.h>
int main()
{
    int phy,maths,che; 
    float per,total; 

    printf("enter the  phy marks : \n");
    scanf("%d",&phy);
    printf("enter the  maths marks : \n");
    scanf("%d",&maths);
    printf("enter the  che marks : \n");
    scanf("%d",&che);
    total = phy + maths + che;
    per = total /3;
    printf("your per is  : %f\n",per);

    if(per >=90)
    {
        printf("A+");
    }
    else if(per >=80  && per <90)
    {
        printf("A");
    }
    else if(per >=70  && per <80)
    {
        printf("B+");
    }
    else if(per >=60  && per <70)
    {
        printf("B");
    }
    else if(per >=50  && per <60)
    {
        printf("C+");
    }
    else if(per >=40  && per <50)
    {
        printf("C");
    }
    else 
    {
        printf("fail");
    }

    return 0;
}
