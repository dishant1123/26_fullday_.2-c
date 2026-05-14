// task :1  ask user to enter the character  and  check it is vowel  or consonant  or digit or special character.

/*
#include<stdio.h>   // #include<conio.h>
int main()      // void  main 
{
    char ch;  
    // clrscr();
    printf("enter the character : ");
    scanf("%c",&ch); // d 

    switch(ch)
    {
        case 'a' : 
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            printf("vowel\n");
            break;
        default : 
            if(ch >'a' && ch <='z') // d > a  && d <=z 
            {
                printf("consonant\n");
            }
            else if(ch >'0' && ch <='9') //
            {
                printf("digit\n");
            }
            else 
            {
                printf("special character\n");
            }
    }
    return 0;   // getch(); 
}
*/ 
// nested  switch  : 

#include<stdio.h>
int  main()
{
    int  choice , subchoice,qty,price,total=0;
    printf("WELCOME TO MY SHOP\n");
    printf("1.FRUITS\n");
    printf("2.VEGETABLES\n");

    printf("ENTER YOUR CHOICE : ");
    scanf("%d",&choice); 
    switch(choice)
    {
        case 1 : 
            printf("you selected fruits\n");
            printf("1.APPLE     : 100\n");
            printf("2.BANANA    : 50\n");
            printf("3.ORANGE    : 200\n");
            printf("enter the subchoice : ");
            scanf("%d",&subchoice);

            switch(subchoice)
            {
                case 1 : 
                printf("you selected apple\n");
                printf("price : 100\n");
                printf("enter the quantity : ");
                scanf("%d",&qty);
                total = qty *100; 
                printf("total : %d\n",total);
                break;

                case 2 : 
                printf("you selected banana\n");
                printf("price : 50\n");
                printf("enter the quantity : ");
                scanf("%d",&qty);
                total = qty *50; 
                printf("total : %d\n",total);
                break;

                case 3 : 
                printf("you selected orange\n");
                printf("price : 200\n");
                printf("enter the quantity : ");
                scanf("%d",&qty);
                total = qty *200; 
                printf("total : %d\n",total);
                break;
            }
            break; 
        case 2 :
            printf("you selected vegetables\n");
            printf("1.CARROT    : 30\n");
            printf("2.POTATO    : 40\n");
            printf("3.ONION     : 50\n");
            printf("enter the subchoice : ");
            scanf("%d",&subchoice);

            switch(subchoice)
            {
                case 1 : 
                printf("you selected carrot\n");
                printf("price : 30\n");
                printf("enter the quantity : ");
                scanf("%d",&qty);
                total = qty *30;
                printf("total : %d\n",total);
                break;

                case 2 : 
                printf("you selected potato\n");
                printf("price : 40\n");
                printf("enter the quantity : ");
                scanf("%d",&qty);
                total = qty *40;
                printf("total : %d\n",total);
                break;

                case 3 : 
                printf("you selected onion\n");
                printf("price : 50\n");
                printf("enter the quantity : ");
                scanf("%d",&qty);
                total = qty *50;
                printf("total : %d\n",total);
                break;
            }
            break;
        default  : 
            printf("invalid choice\n");
            break;
    } 
    return 0; 
}