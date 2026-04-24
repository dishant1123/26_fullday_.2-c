/*
amg : any digit number .  

153 :  ==> 3 digit  

    1**3  5**3  3**3   ==> 1  + 125 +27 ==>153 

step : 
1.r= num % 10   //  r = 1 %10 = 1 
2.cube = r*r*r   // cube =1  
3. sum =sum + cube  // sum =153  
4. num = num /10   // num =1 /10 =0 

temp = num ; 
for(;num >0;)
{
}
if(sum ==temp) 

=========================================
1634 : ===> 4 digit 

    1**4  6**4   3**4  4**4 
    1     1296    81    256      == >sum  =1634  ==> amg  

step :1 calculate the  digit. 
    1634   ==>  count =0 
        for(;num>0;)   // 0 > 0 
        {
            num = num /10  // num = 1 /10 ==>0  
            count ++ ;    // 4 
        } 
step : 2 
    1.r= num % 10   //  r = 1 %10 = 1 
    2.cube = r*r*r   // cube =1  
    3. sum =sum + cube  // sum =153  
    4. num = num /10   // num =1 /10 =0 
*/

#include <stdio.h>
#include <math.h>
int  main()
{
    int n, r,temp,count=0,sum =0; 
    printf("enter the num : ");
    scanf("%d",&n); // 1634 
    temp =n;  //  temp=1634
    // digit : 
    for(; temp > 0; )  // 0 > 0
    {
        temp = temp /10;  // temp = 0
        count ++;  // 4
    }
    temp =n;  // temp =1634 

    for(; temp >0;) // 0 > 0 
    {
        r= temp %10;  // r =  1 %10 = 1 
        sum =sum + pow(r,count); // sum =1634
        temp = temp /10;   // temp = 1  /10 =0 
    }

    if(n ==sum)
    {
        printf("amg number \n");
    }
    else 
    {
        printf("not amg number \n");
    }
    return 0; 
}

// task :1 
/*
ask user to enter the  number  and  print  the  sum  of  first  digit  and last  digit. 

input : 1345 
ouput : sum  of first  digit and last  digit is  : 1+5 =6

hint  : 

last :  num %10 
first  : num /10   ==>  num >10 

*/