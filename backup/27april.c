/*
task :1 ask user to enter the  character and  check it is  vowel  or consonant or  digit or  special character
*/
/*
#include <stdio.h>   // #include<conio.h>
int  main()  // void  main()
{
    char ch;  // clrscr(); 
    printf("enter the character\n");
    scanf("%c", &ch); // r 

    if(ch =='a' || ch =='u' ||ch =='o' ||ch =='i' ||ch =='e' )
    {
        printf("it is vowel\n");
    }
    else  if(ch >'a'  && ch <='z') // 'r' > 'a'  &&  'r' <=  'z'
    {
        printf("it is consonant\n");
    }
    else if(ch >='0'  && ch <='9')
    {
        printf("it is digit\n");
    }
    else 
    {
        printf("it is special character\n");
    }
    return 0; 
}   
*/
/*
Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill

units          rate 

0-50           0.50
51-150         0.75 
151 -250       1.20
251 above      1.50 

surcharge      20%
================================================== 
if units <=50 
user =25 
bill = units * 0.50   ==> 25 * 0.50  = 12.50 
surcharge = bill * 0.2==> 12.50 * 0.2 = 2.50
total_bill = bill + surcharge = 12.50 + 2.50 = 15.00

else if (units >=51 && units <=150 )
user  =125 
bill = 25 +(units - 50) *0.75   ==> 81.25 
surcharge = bill * 0.2 ==> 81.25 * 0.2 = 16.50
total_bill = bill + surcharge = 81.25 + 16.50 = 98.75

else if(units >=151 && units <=250 )
user =175
bill = 25 + 75 + (units -150) *1.20   ==> 125 

else 
user =275 
    25 +75 +120 (units -250) *1.50  ==>225 


*/

/*
switch  :  menu driven  program 

syntax : 
    switch(expression)
    {
        case  value :
            statement(s);
            break;
        default :
            statement(s);
            break;
    }
    
*/

// ex :1 
/*
#include <stdio.h>
int  main()
{
    int a,b,choice; 
    printf("enter the value of a\n");
    scanf("%d", &a);
    printf("enter the value of b\n");
    scanf("%d", &b);

    printf("CALCULATOR\n");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.modulas\n");
    printf("enter your choice\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1 : 
            printf("addition = %d\n", a+b);
            break;
        case 2 :
            printf("subtraction = %d\n", a-b);
            break;
        case 3 :
            printf("multiplication = %d\n", a*b);
            break;
        case 4 :
            printf("division = %d\n", a/b);
            break;
        case 5 : 
            printf("modulas = %d\n", a%b);
        default :
            printf("invalid choice\n");
            break;
    }
    return 0; 
}
*/
/*
task :2  ask user to enter the  number and  print  month name  and  its days. but  if user enter a number 2 then  ask user to enter the  year and check if  it is leap year then print 29 days  not  then 28 days. 

input  : 1   ==> jan   ==>31 days 
         2   ==> enter the year   ==> 2024  ==> LP  ==> 29 days 
         12  ==> dec   ==>31 days 

         hint  : 
            case 2 : 
                printf()   scanf()   if  ()   else   


leap  year :   every  year   : 
                 if((year % 4==0  && year % 100 !=0 ) || (year % 400 ==0)) 
                {
                     1920  ===> leap yr  ??? 
                     1920 % 4==0  && 1920 % 100 !=0 
                     1864   ===> 
                } 


*/
/*
nested switch : 

*/

#include <stdio.h>
int main()
{
    int choice, subchoice,qty,price,total;
    printf("1.FRUITS\n");
    printf("2.VEGETABLES\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1 : 
            printf("you have selected fruits\n");
            printf("1.APPLE     : rs 100\n");
            printf("2.BANANA    : rs 20\n");
            printf("3.ORANGE    : rs 90\n");
            printf("enter the subhoice : "); 
            scanf("%d", &subchoice);
            switch(subchoice)
            {
                case 1 : 
                    printf("you have selected apple\n");
                    printf("price = 100\n");
                    printf("enter the  quantity : ");
                    scanf("%d", &qty);
                    total  = qty * 100;
                    printf("total =  %d\n", total);
                    break;
                case 2 : 
                    printf("you have selected banana\n");
                    printf("price = 20\n");
                    printf("enter the  quantity : ");
                    scanf("%d", &qty);
                    total  = qty * 20;
                    printf("total =  %d\n", total);
                    break;
                case 3 :
                    printf("you have selected orange\n");
                    printf("price = 90\n");
                    printf("enter the  quantity : ");
                    scanf("%d", &qty);
                    total  = qty * 90;
                    printf("total =  %d\n", total);
                    break;
            }
            break;
        case 2 :
            printf("you have selected vegetables\n");
            printf("1.CARROT    : rs 50\n");
            printf("2.POTATO    : rs 30\n");
            printf("3.Tomato    : rs 80\n");
            printf("enter the subchoice : ");
            scanf("%d", &subchoice);
            switch(subchoice)
            {
                case 1: 
                    printf("you have selected carrot\n");
                    printf("price = 50\n");
                    printf("enter the  quantity : ");
                    scanf("%d", &qty);
                    total  = qty * 50;
                    printf("total =  %d\n", total);
                    break;
                case 2: 
                    printf("you have selected potato\n");
                    printf("price = 30\n");
                    printf("enter the  quantity : ");
                    scanf("%d", &qty);
                    total  = qty * 30;
                    printf("total =  %d\n", total);
                    break;
                case 3: 
                    printf("you have selected tomato\n");
                    printf("price = 80\n");
                    printf("enter the  quantity : ");
                    scanf("%d", &qty);
                    total  = qty * 80;
                    printf("total =  %d\n", total);
                    break;
            }
        break;
            default : 
                printf("invalid choice\n");
                break;
    } // outer switch  end 
    return 0; 
}