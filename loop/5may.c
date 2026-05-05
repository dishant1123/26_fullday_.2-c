// space in pattern  : 

/*
1.          2.          3.          4.
* * * * *   * * * * *          *        * 
  * * * *    * * * *         * *       * * 
    * * *     * * *        * * *      * * * 
      * *      * *       * * * *     * * * * 
        *       *      * * * * *    * * * * * 

*/
// ex :1 
/*
#include <stdio.h>
int main()
{
    int i,j,k; 
    for(i=1; i<=5; i++) // 3  3 <=5 
    {
        for(k=1; k<i; k++) // k=2  2 < 3 
        {
            printf("  ");
        }
        for(j=5; j>=i; j--) //  j=5  5 >=3 
        {
            printf("* "); // * * * * * 
        }                //    * * * *
        printf("\n");    //      * * * 
    }
    return 0; 
}
    */
// ex :2 
/*
#include <stdio.h>
int main()
{
    int i,j,k; 
    for(i=1; i<=5; i++) // 3  3 <=5 
    {
        for(k=1; k<i; k++) // k=2  2 < 3 
        {
            printf(" ");
        }
        for(j=5; j>=i; j--) //  j=5  5 >=3 
        {
            printf("* "); // * * * * * 
        }                //    * * * *
        printf("\n");    //      * * * 
    }
    return 0; 
}
*/ 

// ex :3 
/*
#include <stdio.h>
int main()
{
    int i, j,k; 

    for(i=1; i<=5; i++) // 1  1 <=5 
    {
        for(k=5; k>i; k--) // 5  5 >1 
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/ 
// ex: 4
/*
#include <stdio.h>
int main()
{
    int i, j,k; 

    for(i=1; i<=5; i++) // 1  1 <=5 
    {
        for(k=5; k>i; k--) // 5  5 >1 
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/ 
/*
        * 
       * * 
      * * *
     * * * *
    * * * * * 
     * * * *
      * * *
       * *
        *        
*/

#include <stdio.h>
int main()
{
    int i, j,k; 

    for(i=1; i<=5; i++) // 1  1 <=5 
    {
        for(k=5; k>i; k--) // 5  5 >1 
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1; i<=5; i++) // 3  3 <=5 
    {
        for(k=1; k<i; k++) // k=2  2 < 3 
        {
            printf(" ");
        }
        for(j=5; j>=i; j--) //  j=5  5 >=3 
        {
            printf("* "); // * * * * * 
        }                //    * * * *
        printf("\n");    //      * * * 
    }
    return 0;
}

/*                                     
1 2 3 4 5    5 4 3 2 1         1        1
  1 2 3 4     5 4 3 2        1 2       1 2
    1 2 3      5 4 3       1 2 3      1 2 3 
      1 2       5 4      1 2 3 4     1 2 3 4 
        1        5     1 2 3 4 5    1 2 3 4 5 

        1              * 
       1 2            * * 
      1 2 3          *   *
     1 2 3 4        *     *
    1 2 3 4 5      *       *
     1 2 3 4        *     *
      1 2 3          *   *
       1 2            * * 
        1              *

*/