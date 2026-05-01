/*
pattern  : 
1.          2.          3.          4.         

* * * * *   1 2 3 4 5   *          * * * * *
* * * * *   1 2 3 4 5   * *        * * * * 
* * * * *   1 2 3 4 5   * * *      * * * 
* * * * *   1 2 3 4 5   * * * *    * * 
* * * * *   1 2 3 4 5   * * * * *  *

row : 5  
col : 5
*/

// ex :1 
/*
#include <stdio.h>
int  main()
{
    int i ,j; 
    for(i=1; i<=5; i++)  // rows : i=1  1<=5 
    {
        for(j=1; j<=5; j++) // col  // 6 6<=5 
        {
            printf("* "); // * 
        }// j loop  end
        printf("\n"); 
    }  // i  loop  end 
    return 0; 
}
*/
// ex :2 
/*
#include <stdio.h>
int  main()
{
    int i ,j; 
    for(i=1; i<=5; i++)  // rows : i=1  1<=5 
    {
        for(j=1; j<=5; j++) // col  // 2 2<=5 
        {
            printf("%d ",j); // 1 
        }// j loop  end
        printf("\n"); 
    }  // i  loop  end 
    return 0; 
}
*/

// ex :3
/*
#include <stdio.h>
int  main()
{
    int i ,j; 
    for(i=1; i<=5; i++)  // rows : i=4  4<=5 
    {
        for(j=1; j<=i; j++) // col  // 1 1<=4 
        {
            printf("* "); // *  
        }// j loop  end
        
        printf("\n"); 
    
    }  // i  loop  end 
    return 0; 
}
*/
// ex :4 
/*
#include <stdio.h>
int  main()
{
    int i ,j; 
    for(i=1; i<=5; i++)  // rows : i=2  2<=5 
    {
        for(j=5; j>=i; j--) // col  // 1   1>=2 
        {
            printf("* "); // *  
        }// j loop  end
        
        printf("\n"); 
    
    }  // i  loop  end 
    return 0; 
}
*/
/*
5.          6.            7.          8.
1           5 4 3 2 1     1           5 5 5 5 5
1 2         5 4 3 2       2 2         4 4 4 4
1 2 3       5 4 3         3 3 3       3 3 3
1 2 3 4     5 4           4 4 4 4     2 2  
1 2 3 4 5   5             5 5 5 5 5   1 

*/
// ex :8
/*
#include <stdio.h>
int  main()
{
    int i ,j; 
    for(i=5; i>=1; i--)  // rows : i=3  3>=1 
    {
        for(j=1; j<=i; j++) // col  // 4  4<=3 
        {
            printf("%d ",i); // *  // 5 5 5 5 5 
        }                          // 4 4 4 4  
        printf("\n");             //  3 3 3 
    }   
    return 0; 
}
*/
/*
9.           10.           11.              12. 
1            25 16 9 4 1   1                 a
1 4          25 16 9 4     4 4               a b 
1 4 9        25 16 9       9 9 9             a b c
1 4 9 16     25 16         16 16 16 16       a b c d
1 4 9 16 25  25            25 25 25 25 25    a b c d e

*/

#include <stdio.h>
int  main()
{
    int i ,j; 
    for(i=1; i<=5; i++)  // rows : i=1  1<=5 
    {
        for(j=1; j<=i; j++) // col  // 2 2<=5 
        {
            printf("%d ",j*j); // 1 
        }// j loop  end
        printf("\n"); 
    }  // i  loop  end 
    return 0; 
}