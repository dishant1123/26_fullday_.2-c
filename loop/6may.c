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
/*
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
*/ 
/*
4.            5.            6.         7. 
* * * * *     * * * * *           *          * 
  *     *      *     *         *  *         * * 
    *   *       *   *        *    *        *   *
     *  *        * *        *     *       *     *
        *         *       * * * * *      * * * * *
*/

//ex :4 
/*
#include <stdio.h>
int main()
{
    int i , j ,k; 

    for(i=1; i<=5; i++)
    {
        for(k=1; k<i; k++)
        {
            printf("  ");
        }
        for(j=5; j>=i; j--)
        {
            if(i==1 || j==5 ||  i==j)
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
    return 0; 
}
*/
 // ex :5 
/*
#include <stdio.h>
int main()
{
    int i , j ,k; 

    for(i=1; i<=5; i++)
    {
        for(k=1; k<i; k++)
        {
            printf(" ");
        }
        for(j=5; j>=i; j--)
        {
            if(i==1 || j==5 ||  i==j)
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
    return 0; 
}
*/

// ex :6 
/*
#include <stdio.h>
int main()
{
    int i,j,k ; 

    for(i=1; i<=5; i++)  // 2  2 <=5 
    {
        for(k=5; k>i; k--) // 5  5 >2 
        {
            printf("  ");   //
        }
        for(j=1; j<=i; j++) // 2   2< =2 
        {
            if(j==5  || i==j || i==5  || j==1)
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
*/ 
// ex :7 
/*
#include <stdio.h>
int main()
{
    int i,j,k ; 

    for(i=1; i<=5; i++)  // 2  2 <=5 
    {
        for(k=5; k>i; k--) // 5  5 >2 
        {
            printf(" ");   //
        }
        for(j=1; j<=i; j++) // 2   2< =2 
        {
            if(j==5  || i==j || i==5  || j==1)
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
*/ 
// ex :8  diamond : 

#include <stdio.h>
int main()
{
    int i,j,k ; 

    for(i=1; i<=5; i++)  // 2  2 <=5 
    {
        for(k=5; k>i; k--) // 5  5 >2 
        {
            printf(" ");   //
        }
        for(j=1; j<=i; j++) // 2   2< =2 
        {
            if(j==5  || i==j || i==5  || j==1)
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

    for(i=1; i<=5; i++)
    {
        for(k=1; k<i; k++)
        {
            printf(" ");
        }
        for(j=5; j>=i; j--)
        {
            if(i==1 || j==5 ||  i==j)
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
    return 0; 
}

/*
        1 
       1 2
      1   3
     1     4
    1       5
     1     4
      1   3
       1 2
        1
*/