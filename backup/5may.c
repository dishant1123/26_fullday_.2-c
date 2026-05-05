/*
pattern  : 

1.          2.          3. 
* * * * *   1 2 3 4 5   1 1 1 1 1
* * * * *   1 2 3 4 5   2 2 2 2 2
* * * * *   1 2 3 4 5   3 3 3 3 3
* * * * *   1 2 3 4 5   4 4 4 4 4
* * * * *   1 2 3 4 5   5 5 5 5 5

row = 5 
col = 5 
*/
// ex :1 
/*
#include <stdio.h>
int  main()
{
    int i,j; 
    for(i=1; i<=5; i++) 
    {
        for(j=1;j<=5; j++)
        {
            printf("* ");
        } // j loop end 
        printf("\n");
    }// i loop  end 
    return 0 ;
}
*/ 
// ex :2 
/*
#include <stdio.h>
int  main()
{
    int i,j; 
    for(i=1; i<=5; i++) 
    {
        for(j=1;j<=5; j++)
        {
            printf("%d ",j);
        } // j loop end 
        printf("\n");
    }// i loop  end 
    return 0 ;
}
*/ 


/*
4.            5.             6.           7.             8. 
*              * * * * *     1            5 4 3 2 1      1 2 3 4 5
* *            * * * *       1 2          5 4 3 2        1 2 3 4
* * *          * * *         1 2 3        5 4 3          1 2 3
* * * *        * *           1 2 3 4      5 4            1 2 
* * * * *      *             1 2 3 4 5    5              1
*/
//4 .
/*
#include <stdio.h>
int  main()
{
    int i,j; 
    for(i=1; i<=5; i++)  // i=2  2 <=5 
    {
        for(j=1; j<=i; j++) // j=3  3 <=2 
        {
            printf("* "); // * 
        }                 // * * 
        printf("\n");    //  
    }
    return 0; 
}
*/ 

#include <stdio.h>
int  main()
{
    int i,j; 
    for(i=5; i>=1; i--)  // i=2  2 <=5 
    {
        for(j=1; j<=i; j++) // j=3  3 <=2 
        {
            printf("* "); // * 
        }                 // * * 
        printf("\n");    //  
    }
    return 0; 
}