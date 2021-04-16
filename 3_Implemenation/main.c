#include <code_conversion.h>

int main()
{
    int choice,num=1,condition;
    long int binary,gray,decimal,g1,d1,b1;
    int x,y,space;

    printf("\t\tCode Converter\n\n");

    while(num!=0)
    {
        printf("\t\t------- CHOOSE THE INPUT FORM -------\n\n");

        printf("1: Binary \n2: Decimal \n3: Gray\n");        
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\n*****BINARY*****\n");
                D:
                printf("\nEnter the data or number in Binary form (0s & 1s): ");
                scanf("%ld",&binary);

                condition=binary;

                while(condition!=0)
                {
                    num=condition%10;
                    if(num>1)
                    {
                        printf("\n%d is not in binary form.\n",binary);
                        printf("Provide the correct INPUT\n");
                        goto D;
                    }
                    else
                    condition=condition/10;
                }
                g1=b2g(binary);
                d1=b2d(binary);
                printf("Gray form is %ld", g1);
                printf("Decimal form is %ld", d1);
                break;

                

            case 2:
                printf("\n*****DECIMAL*****\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&decimal);
                b1=d2b(decimal);
                g1=b2g(b1);
                printf("Gray form is %ld", g1);
                printf("Binary form is %ld", b1);
                break;     

            case 3:
                printf("\n*****GRAY*****\n");
                E:
                printf("\nEnter the data or number in Gray form (0s & 1s): ");
                scanf("%ld",&gray);
                condition=gray;

                while(condition!=0)
                {
                    num=condition%10;
                    if(num>1)
                    {
                        printf("\n%d is not in gray form.\n",gray);
                        printf("Provide the correct INPUT\n");
                        goto E;
                    }
                    else
                    condition=condition/10;
                }
                b1=g2b(gray);
                d1=b2d(b1);
                printf("Decimal form is %ld", d1);
                printf("Binary form is %ld", b1);
                break;


            default:
                printf("\nNot a valid input\n");
                break;
        }
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");
        scanf("%d",&num);

    }

    space = 3+35;
        x=1;
        while(x<=3)
        {
            y=1;
            while(y<=space)
            {
                printf(" ");
                y++;
            }
            space--;
            y=1;
            while(y<=2*x-1)
            {
                printf("*");
                y++;
            }
            printf("\n");
            x++;
        }
        space = 37;
        x=1;
        while( x<=3)
        {
            y=1
            while( y<=space)
            {
                printf(" ");
                y++;
            }
            space++;
            y=1;
            while(y<=2*(3-x)-1)
            {
                printf("*");
                y++;
            }

            printf("\n");
            x++;

        }
        printf("\t\t------Thank You------\n\n");
        

}