/*
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/
/*
#include<stdio.h>
int  main()
{
    int i,j,k; 
    for(i=1; i<=4; i++)   // 2  2<=4 
    {
        
        for(j=1; j<=i; j++) // 3  3<=2 
        {
            printf("* ");  // *     
        }
        for(k=5; k>i; k--) // k=5  5 > 2
        {
            printf("    ");
        }
        for(j=1; j<=i; j++) // 2  2 <=2 
        {
            printf("* ");   //  
        }
        printf("\n");
    }
    for(i=1; i<=5; i++)
    {
        
        for(j=5; j>=i; j--)
        {
            printf("* "); 
        }
        for(k=1; k<i; k++)
        {
            printf("    ");
        }
        for(j=5; j>=i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0; 
}
*/

/*
*                 *
  *             * 
    *         * 
       *    *  
         * 
       *    * 
    *         * 
  *             * 
*                 *

*/
#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=4; i++)
    {
        for(k=1; k<i; k++)
        {
            printf(" ");
        }
        for(j=5; j>=i; j--)
        {
            if(i==j || j==5)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=1; i<=5; i++)  // 2  2 <=5 
    {
        for(k=5; k>i; k--) // 5  5 >2 
        {
            printf(" ");   //
        }
        for(j=1; j<=i; j++) // 2   2< =2 
        {
            if(j==5  || i==j  || j==1)
            {
                printf("* ");  //           * 
            }                 //          * *    
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
*       * 
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     * 
*       *    
*/