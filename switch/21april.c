/*
QUE  :1 

Hotel Stay Price Calculator
    Problem Statement

A hotel offers two types of rooms:
    1.Studio
    2.Apartment

Write a program that calculates the total cost of stay based on:

    1.Type of room
    2.Month of stay
    3.Number of nights

| Month                | Studio Price | Apartment Price |
| -------------------- | ------------ | --------------- |
| January – April      | $50          | $60             |
| May – August         | $70          | $80             |
| September – December | $80          | $90             |

==>Discounts
1.Studio Discounts
a.January – April
    More than 3 nights → 20% discount
    More than 7 nights → 30% discount
b.May – August
    More than 3 nights → 10% discount
    More than 7 nights → 20% discount
c.September – December
    More than 3 nights → 5% discount
    More than 7 nights → 10% discount
2.Apartment Discounts
    For any month:
    More than 7 nights → 10% discount
Input:
The program should read:

Month of stay (string)
Number of nights (integer, up to 30 days)
Output:
Display:

    Total cost for Studio (after discount)
    Total cost for Apartment (after discount)
🧾 Example
Input:
    Month: May
    Nights: 5
Output:
    Studio Rent for 5 nights: $315
    Apartment Rent for 5 nights: $400
    
*/
/*
#include <stdio.h>
int main()
{
    int month,nights,category;
    float studioprice =0,apartmentprice =0;
    float studio_total , apartment_total;
    

    printf("enter the month of stay : \n");
    scanf("%d",&month);

    printf("enter the  number nights : \n"); 
    scanf("%d",&nights);

    switch(month)
    {
        case 1 :case 2: case 3: case 4 :
        category =1; 
        studioprice =50; 
        apartmentprice =60;
        break;

        case 5 :case 6 :case 7 :case 8 :
        category =2;
        studioprice =70;
        apartmentprice =80;
        break;

        case 9 :case 10 :case 11 :case 12 :
        category =3;
        studioprice =80;
        apartmentprice =90;
        break;

        default :
        printf("enter the valid month : \n");
        break;
    }
    studio_total = studioprice * nights;  // per nights rate   //120 
    apartment_total = apartmentprice * nights;

    if (category ==1)
    {
        if(nights >=3 && nights <=7)
        {
            studio_total = studio_total * 0.20; // discount // 24 
        }
        else if(nights >7 && nights <=30)
        {
            studio_total = studio_total * 0.30;
        }
    }
    else if(category ==2)
    {
        if(nights >=3 && nights <=7)
        {
            studio_total = studio_total * 0.10; // discount
        }
        else if(nights >7 && nights <=30)
        {
            studio_total = studio_total * 0.20;
        }
    }
    else if(category ==3)
    {
        if(nights >=3 && nights <=7)
        {
            studio_total = studio_total * 0.05; // discount
        }
        else if(nights >7 && nights <=30)
        {
            studio_total = studio_total * 0.10;
        }
    }

    if(nights >=7)
    {
        apartment_total = apartment_total * 0.10; // discount
    }

    printf("studio rent for %d nights : %.2f\n",nights,studio_total);
    printf("apartment rent for %d nights : %.2f\n",nights,apartment_total);

    return 0; 
}

*/ 
