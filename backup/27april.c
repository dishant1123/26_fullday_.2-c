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