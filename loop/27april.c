/*
strong  number  : 145  
    each  factorial  : 1   = 1  4 = 24   5 =120 
          sum = 1+120 +24 =145    

*/
/*
#include <stdio.h>
int main()
{
    int num,i,temp,r,fact,sum=0;
    printf("enter the  number  : "); 
    scanf("%d",&num); // 145 
    temp =num;   // temp =145  
    for(;temp >0;)   // 0 > 0 
    {
        r = temp %10;   // r = 1 %10  = 1 
        fact =1 ;  // 1 
        for(i=1; i<=r; i++) // 4  4 <=4  
        {
            fact =fact *i;   // fact = 1  
        }
        sum = sum +fact; // sum = 145 
        temp = temp /10;  //1 /10 = 0 
    }

    if(sum ==num)
    {
        printf("strong number \n");
    }
    return 0; 
}
*/
/*
task :1 ask user  to enter the  number  and  print  table  of this  number.
input  : 5 
ouput  : 5 * 1= 5 
        5 * 2= 10
        5 * 3= 15
        5 *10 =50 

*/
/*
#include <stdio.h>
int main()
{
    int num,i; 
    printf("enter the  number  : ");
    scanf("%d",&num); 

    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",num,i,(num *i));                 // 5 * 1 = 5  
    }
    return 0; 
}
*/
// nested loop  : 
/*
for()
{
    for() 
}    
*/
/*
task  :2  ask user to enter the  start  and  ending  number  and  print  prime  number  between two range. 

input  start  : 20 
input   end   : 100    23 ,29 .. 97 
*/
#include <stdio.h>
int main()
{
    int start ,end, i,j,count,temp =0; 
    printf("enter the start number : ");
    scanf("%d",&start); // 5 
    printf("enter the end number : ");
    scanf("%d",&end); // 100 
    for(i=start; i<=end; i++) // i =7  7 <=100  
    {
        count =0 ; // 0 
        for(j=1; j<=i; j++) // j=1  1 <= 7  
        {
            if(i % j==0 )  // 5 % 5 ==0 
            {
                count ++;  // 4 
            }
        }
        if(count ==2) // 4 ==2
        {
            printf("%d\t",i);//5 
            temp ++; 
        }
    }
        printf("\ntotal prime  number  between range  : %d\n",temp);
    return 0 ;
}

/*
perfect number  in range : 
amg number in range  
twin  number  in range  
pelindrome  number  in range
strong  number  in range
harshard  number  in range
reverse  number  in range
*/