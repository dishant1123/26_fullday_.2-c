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

// ex : 2 perfect num in range . 