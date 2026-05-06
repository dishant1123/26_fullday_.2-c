/* 
1.            2.            3.            
* * * * *     *             * * * * * 
*       *     * *           *     *
*       *     *   *         *   *
*       *     *     *       * * 
* * * * *     * * * * *     *
*/

// ex :1 
/*
#include <stdio.h>
int main()
{
    int i,j; 
    for(i=1; i<=5; i++) // i =2  2 <=5 
    {
        for(j=1; j<=5; j++) // j =2  2 <=5 
        {
            if(i==1   || i==5 || j==1  || j==5) // 
            {
                printf("* "); // * * * * *  
            }                 // * 
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0; 
}
*/ 
// ex :2 

#include <stdio.h>
int main()
{
    int i,j; 
    for(i=1; i<=5; i++) // i =3  3 <=5 
    {
        for(j=1; j<=i; j++) // j =3  3 <=3  
        {
            if(i==5 || j==1 || i==j) // 
            {
                printf("* "); // *  
            }                 // * *
            else              // *   *
            {
                 printf("  ");
            }
        }
        printf("\n");
    }
    return 0; 
}
