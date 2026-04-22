/*
for loop  : 

syntax : 

    for(start; condition; inc/dec)
*/

// ex :1  1-100 ;
/*
#include <stdio.h>
int  main()
{
    int i; 
    for(i=100; i>=1;i-- )
    {
        printf("%d\n",i);
    }
    return 0; 
}
*/ 

// ex :8 ask user to enter the  number  and  print  odd and  even  number  sum. 
/*
#include <stdio.h>
int main()
{
    int i,n,oddsum =0,evensum=0; 
    printf("enter the  num : ");
    scanf("%d",&n);  //10 

    for(i=1; i<=n; i++) // 4  4 <=10 
    {
        if(i % 2==0) // if(4 % 2==0)
        {
            evensum =evensum +i;  // evensum = 6
        }
        else 
        {
            oddsum =oddsum +i; // oddsum =4
        }
    } // end  of  loop 
    printf("even sum is : %d\n",evensum);
    printf("odd sum is : %d\n",oddsum);
    return 0; 
}
*/ 

// factorial  : 

/*
5! =1*2*3*4*5 =120 
*/
#include <stdio.h>
int  main()
{
    int n ,i,fact =1; 
    printf("enter the num : ");
    scanf("%d",&n);   // 5

    for(i=1; i<=n; i++) // 6  6 <=5 
    {
        fact =fact * i;  /// fact =120 
    }
    printf("factorial  is : %d\n",fact);
    return 0;
}

// task :1 ask user to enter the  number  and  print  n natural  number  sum  and  factorial. 
/*
input  : 5 
sum = 15 
factorial = 120
*/