#include<stdio.h>
main()
{
    printf("pick an item :\n1. pasta\n2. french Fries\n3. Burger\n4. pizza\n5. Sandwich\n");
    int choice = 0;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("you picked  pasta\n price 179 ");
        break;

        case 2:
        printf("you picked  French fries \n price 99 ");
        break;

        case 3:
        printf("you picked  Burger\n price 129 ");
        break;

        case 4 :
        printf("you picked  Pizza\n price 239  ");
        break;

        case 5:
        printf("you picked  Sandwich\n price 149 ");
        break;
        default : printf("Invalid choice");

}
}
