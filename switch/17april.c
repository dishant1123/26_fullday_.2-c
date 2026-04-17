// conio.h ,clrscr ,getch   ==> no written in vs code 
// task  :1 
/*
ask  user to enter the character and check it  it is  vowel  consonant  or  digit or special character using  switch case. 
*/

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