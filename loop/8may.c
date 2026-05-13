/*
nested  while  loop  : 

i =start 
while (con)
{
    intia 
    while (con)
    {
        stat ; 
        inc /dec 
    }
    inc /dec     
}

*/

// ex :1 prime  in range using nested while loop  . 
/*
#include <stdio.h>
int main()
{
    int start ,end, i,j,count;
    printf("enter start : ");
    scanf("%d",&start); // 5 
    printf("enter end : ");
    scanf("%d",&end); // 100 

    i=start;  //   i=5 
    while(i<=end) // 7 <=100 
    {
        count = 0 ;  // 0 
        j=1;    // 1 
        while(j <=i)  // 7 <= 6 
        {
            if (i % j ==0)   // 6 %6 ==0 
            {
                count ++;  // 4
            }
            j++; 
        }
        if(count ==2) // 4 ==2 
        {
            printf("%d\t",i); // 5 
        }
        i++; 
    }
    return 0;
}
*/ 
// ex : 2 perfect num in range .  
/*

int i = 0, j = 0;
for (; i < 3; j++)    3  3 <3 

{
    printf("%d %d\n", i, j); // 0 0  0 1  0 2  1 0  1 1  1 2  2 0  2 1  2 2 
    if (j == 2) 
    { 
        i++; // 3
        j = -1; // -1
    }
}
================================= 
int i = 0, j = 5;
while (i < j)  3 < 2 

 {
    printf("%d ", i++);  // 0  1  2 
    j--;  // 2
}
================================= 
for(int i=1; i<=3; i++)  //  4   4<=3 
{
    printf("%d", i);  // 1** 2** 3** 

    for(int j=1; j<=2; j++)  // 2  2 <=2 
    {
        printf("*"); // ******

    }
}

=================================
int i;
for (i = 0; i < 3; i++)   3 3   <3 
{
    printf("%d ", i);   // 0 1 2  
}
printf("%d", i); // 3 

a. 0 1 2 3 3 
b. 0 1 2 3 
c. 1 2 3
d .errrrrrrrrrrooooorrrr


*/ 
/*
#include<stdio.h>
int main()
{
    int i = 5;

    while(i = i - 1)
    {
        printf("%d ", i);
    }

    return 0;
}
*/ 

/*
Practical  : any  one. 

que :1 
Write a c program that prompts the user to enter numbers and stops only when the use enter -1 . After this print sum  and average of the numbers, minimum and maximum number from given numbers entered by user.

For Example:  Input:  4,1,5,-1
Output:
Sum=10
Average=3.333
Minimum number=1
Maximum number=5

que :2 
Write a program that enters a single digit integer number and produces all possible 6-digit numbers for which the product 
of their digits is equal to the entered number.
Example: "number" → 2
 •111112 → 1 * 1 * 1 * 1 * 1 * 2 = 2
 •111121 → 1 * 1 * 1 * 1 * 2 * 1 = 2
 •111211 → 1 * 1 * 1 * 2 * 1 * 1 = 2
 •112111 → 1 * 1 * 2 * 1 * 1 * 1 = 2
 •121111 → 1 * 2 * 1 * 1 * 1 * 1 = 2
 •211111 → 2 * 1 * 1 * 1 * 1 * 1 = 2

que :3 print  this  pattern  using nested  loop  for or while. 

*                 *
* *             * * 
* * *         * * * 
* * * *     * * * *
* * * * * * * * * * 

*/

/*
Write a c program that prompts the user to enter numbers and stops only when the use enter -1 . After this print sum  and average of the numbers, minimum and maximum number from given numbers entered by user.

For Example:  Input:  4,1,5,-1   ===> 3 4 5 7 1 4 9 45 -1  ===> min 1  max = 45 avg  =9.9
Output:
Sum=10
Average=3.333
Minimum number=1
Maximum number=5

*/

/*
#include<stdio.h>
int main()
{
    int num; 
    int  sum =0 ; 
    int  count =0 ; 
    int  min , max; 
    float  avg;


    while(1)
    {
        printf("enter the number  : "); 
        scanf("%d",&num);  // 2

        if(num == -1) // 2 ==-1 
        {
            break; 
        }
        if(count ==0) //  1 == 0 
        {
            min = num;  //    min =1 
            max =num;   //  max =1 
        }
        if(num < min) // 2 < 1  
        {
            min =num; 
        }
        if(num > max)  // 12> 1 
        {
            max =num; // max =2 
        }
        sum =sum  + num;  // sum = 3 
        count ++;  // 1 
    }
    avg = sum /count; 
    printf("sum = %d\n", sum);
    printf("average = %f\n", avg);
    printf("minimum number = %d\n", min);
    printf("maximum number = %d\n", max);
    return 0; 
}
*/
/*

1. what is  output  of this code ?? 
#include<stdio.h>
int main()
{
    int i =5 ; 
    int a=i++;
    int b=--i; 

    printf("%d %d\n", a, b);
    return 0;
}
2. what is  output  of this code ??
#include<stdio.h>
int main()
{
    int i=10; 
    while(i++ >0)   
    {
        printf("%d ", i);     
        --i; //8 
    }
    return 0;
}
3. 
#include<stdio.h>
int main()
{
    int  i=12; 
    while (i > 0)
    {
        if( i ==5)
        {
            continue;
        }
        printf("%d ", i);// 12 11 10 9 8 7 6  4 3 2 1     
        i--;
    }
    return 0 ; 
}



dhurvi  : 1. a=5  b=5 , 2. 9 7 5 3 1  
shaurya : 1. a=5  b=5 , 
neer    : 1. a=5  b=5 ,  2. 9 7 5 3 1
nishi   : 1. a=5  b=5 ,  2. 9 7 5 3 1
raj     : 1. a=5  b=5 ,  2. 9 7 5 3 1
dev     : 1. a=5  b=5 ,  2. 9 7 5 3 1
purv    : 1. a=5  b=5 ,  2. 9 7 5 3 1
kashissshhhhhh  : 1. a=5  b=4 ,  2. 9 7 5 3 1
ananya  : 1. a=5  b=4 ,  2. 9 7 5 3 1
Tir     : 
nayan   : 1. a=5  b=4 ,  2. 9 7 5 3 1
vishva  : 1. a=5  b=5 ,  2. 9 7 5 3 1
palash  : 1. a=5  b=4 ,  2. 9 7 5 3 1
jaydev  : 1. a=5  b=4 ,  2. 9 7 5 3 1
varun   : 1. a=5  b=5 ,  2. 9 7 5 3 1
*/

