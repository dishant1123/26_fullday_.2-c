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

#include <stdio.h>
int  main()
{
    int i,j;
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
    return 0;                //  1 2 3 4 5 
}

/*                 
0                 1 1 1 1 1 
0 1               0 0 0 0 
0 1 0             1 1 1
0 1 0 1           0 0
0 1 0 1 0         1
*/