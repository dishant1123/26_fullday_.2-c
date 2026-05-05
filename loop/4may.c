/*
    vishwa  dev  backup session  : 10.30-1 pm  pattern  

1
1 0 
1 0 1
1 0 1 0 
1 0 1 0 1 

row = 5
col = 5 
*/
/*
#include <stdio.h>
// #include <conio.h>
int  main()  // void main 
{
    int i,j;
     // clrscr(); 
    for(i=1; i<=5; i++)  // rows print   i =  <
    {
        for(j=1; j<=i; j++) // j=   <= 
        {
            if(j % 2 ==0)
            {
                printf("0 ");
            } 
            else 
            {
                printf("1 ");
            }           // 1 
        }                     // 1 2   
        printf("\n");         // 1 2 3 
    }                        //  1 2 3 4  
    return 0;    // getch();              //  1 2 3 4 5 
}
*/ 
/*                 
1.                2.            3. 
0                 1 1 1 1 1     1 2 3 4 5
0 1               0 0 0 0       2 3 4 5
0 1 0             1 1 1         3 4 5 
0 1 0 1           0 0           4 5 
0 1 0 1 0         1             5 
*/
/*
#include <stdio.h>
// #include <conio.h>
int  main()  // void main 
{
    int i,j;
    for(i=5; i>=1; i--)   // 5   4 >=1 
    {
        for(j=1; j<=i; j++)  // j=2   2 <=4  
        {
            if(i % 2==0)     // 4 %2 ==0 
            {
                printf("0 ");  
            }
            else 
            {
                printf("1 ");   // 1 1 1 1 1 
            }                  //  0 0 
        }                        
        printf("\n");          
    }                          
    return 0;    
}

*/
/*

1 2 3 4 5      5 4 3 2 1    a b c d e 
2 3 4 5        4 3 2 1      f g h i 
3 4 5          3 2 1        j k l 
4 5            2 1          m n 
5              1            o
*/

#include<stdio.h>
int main()
{
    int i,j; 
    for(i=1; i<=5; i++)  // i =3  3 <=5 
    {
        for(j=i; j<=5; j++) // j=5   5<=5 
        {
            printf("%d ",j); // 1 2 3 4 5  
        }                   //  2 3 4 5 
        printf("\n");       //  3 4 5 
    }
    return 0; 
}