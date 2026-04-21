/*
loop  : iteration    ==> repeation 

print 1-100. 

3 type  : 
1. for loop   : entry  control  loop 
2. while loop : entry - exit  control  loop
3. do while loop : exit  control  loop

1. for loop  : 
    for(start; condition; inc/dec)
*/

// ex :1  print  1-100. 
/*
#include <stdio.h>
int  main()
{
    int i; 
    for(i=1;i<=100; i++)  // 101  101<=100  
    {
        printf("%d\t",i); // 1 2 ... 100 
    }

    printf("i value is  : %d\n",i);  
    return 0; 
}
*/ 

// ex :100 -1 print 
#include <stdio.h>
int  main()
{
    int i; 
    for(i=100;i>=1; i--)  // 101  101<=100  
    {
        printf("%d\t",i); // 1 2 ... 100 
    }

    return 0; 
}

// ex : 3 print odd number   between 1-100  .   ==> 1  3  5 7 9 ..99 
