/*
array :  1d array  2d array  3d array 

why use array ?
1. store  data  in  contiguous  memory  location. 
2. store  multiple  value same data type in one memory location.

syntax : 

int a[5]   ==> int data type   a variable  size =5 

int a[5] ={1,     2,    3,    4,     5}
           a[0]  a[1]  a[2]  a[3]  a[4]
access  : index number    ===> index start with 0. 

int a[5] = {1 ,2 ,3}  ===> remaining element value is 0; 


*/

// ex :1 
/*
#include <stdio.h>
int  main()
{
    int a[5] ={12,45,67,89,90}; 
    int i; 
    // printf("1 element of array is  : %d\n",a[0]); 
    // printf("2 element of array is  : %d\n",a[1]); 
    // printf("3 element of array is  : %d\n",a[2]); 
    // printf("4 element of array is  : %d\n",a[3]); 
    // printf("5 element of array is  : %d\n",a[4]); 

    for(i=0; i<=4; i++)
    {
        printf("%d element is  : %d\n",i,a[i]);    
    }

    return 0;
}
*/ 
// ex :2 

/*
#include <stdio.h>
int main()
{
    char ch[4] ={'e','p','k','v'};
    
    for(int i=0; i<=3; i++)
    {
        printf("%d element is = %c \n",i,ch[i]);
    }
    return 0 ;
}
*/

/* task :1 take a one  int  type  array and separate  odd and even element  and print  them .
    input  : int  a[5] = {1,45,67,80,90}

    odd element is  : 1,45,67 
    even element is : 80,90

*/

// ex :3 scan the array element   and  print them. 

#include <stdio.h>
int  main()
{
        int a[5]; 
        for(int i=0; i<=4; i++)
        {
            printf("enter the  element  :"); 
            scanf("%d",&a[i]);
        }
        printf("array element is  :  \n");
        for(int i=0; i<=4; i++)
        {
            printf("%d element is  : %d \n",i,a[i]);
        }
        return 0; 
}

/*
task  :2 ask user to enter the  array element  is  print  sum  of them and also  print oddsum and evensum array  element . 
input : int a[5] ={1,2,3,4,5}
output  : sum  of  array  element  is  : 15
oddsum  : 9 
evensum : 6

*/