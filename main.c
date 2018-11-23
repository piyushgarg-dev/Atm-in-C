#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
    int pin,opt,dep,tot,tran,a,number,i=10000,c,l;
    char name[10],name1[10]="piyush",yn;
    printf("***************************| MADE BY PIYUSH GARG |*************************** \n\n");
    printf("welcome to abc bank \n");
    printf("******************** \n");
    printf("PRESS 1. TO ENTER PIN  \n");
    printf("PRESS 2. IF FORGOT PASSWORD \n");
    printf("******************** \n");
    scanf("%d",&c);
    switch(c)
    {

case 1:
    {


    printf("************************************ \n");
      printf("Please enter your pin -->\t");
    scanf("%d",&pin);
    if(pin==1234)
    {

        printf("\n\n");
        printf("************|  welcome PIYUSH!  |************\n\n");
        printf("please select one option! \n");
        printf("****************************\n");
        printf("1. Deposit your money. \n");
        printf("2. Withdraw your money. \n");
        printf("3. Transfer Money. \n");
        printf("*****************\n");
        scanf("%d",&opt);
       switch(opt)
        {
            case 1:
            printf("PLEASE ENTER THE AMOUNT OF MONEY YOU WANT TO DEPOSIT!!! -->\t");
            scanf("%d",&dep);
            tot=dep+i;
            printf("MONEY IN BANK BEFORE DEPOSIT --> \t%d \n",i);
            printf("MONEY AFTER DEPOSIT --> \t");
            printf("%d\n",tot);
            break;
            case 2:
                printf("PLEASE ENTER THE AMOUNT OF MONEY YOU WANT TO WITHDRAW!!! -->\t");
            scanf("%d",&dep);
            tot=i-dep;
            if(dep>=i)
            {
                printf("**********INSUFFICENT BALANCE********** \n");
            }
            else{
            printf("MONEY IN BANK BEFORE WITHDRAW --> \t%d \n",i);
            printf("MONEY AFTER WITHDRAW --> \t");
            printf("%d\n",tot);
            break;
            case 3:
                printf("AMOUNT YOU WANT TO TRANSFER --> \t");
                scanf("%d",&tran);
                printf("ENTER THE ACCOUNT NO. OF THE RECIPT -->\t");
                scanf("%d",&number);
                if(number==5678)
                {
                    printf("\n");
                    printf("********** | TRANSFERING MONEY TO BUCKY'S ACCOUNT | ********* \n");

                tot=i-tran;
                if(tran>i)
                {
                    printf("**********INSUFFICENT BALANCE**********\n");
                }
                else
                {


                printf("YOUR TOTAL MONEY AFTER TRANSFERING FUND --> \t");
                printf("%d\n",tot);
                break;
                default:printf("NO INFO FOUND \n");
                }
                }
                else
                {
                    printf("INVALID ACCOUNT NUMBER \n");
                }


            }

        }
    }
    else
    {
        printf("**************************\n");
        printf("**********| WRONG PIN |********* \n");
    }
     if(pin==5678)
    {
        //printf("*****************\n");
        printf("************welcome BUCKY!************\n");
        //printf("*****************\n");
        printf("please select one option! \n");
        printf("****************************\n");
        printf("1. Deposit your money. \n");
        printf("2. Withdraw your money. \n");
        printf("3. TRANSFER MONEY \n");
        printf("*****************\n");
        scanf("%d",&opt);
       switch(opt)
        {
            case 1:
            printf("%d\n",tot);
            break;
            case 3:
                printf("AMOUNT YOU WANT TO TRANSFER --> \t");
                scanf("%d",&tran);
                tot=i-tran;
            printf("PLEASE ENTER THE AMOUNT OF MONEY YOU WANT TO DEPOSIT!!! -->\t");
            scanf("%d",&dep);
            tot=dep+i;
            ;
            printf("MONEY IN BANK BEFORE DEPOSIT --> \t%d \n",i);
            printf("MONEY AFTER DEPOSIT --> \t");
            printf("%d\n",tot);
            break;
            case 2:
                printf("PLEASE ENTER THE AMOUNT OF MONEY YOU WANT TO WITHDRAW!!! -->\t");
            scanf("%d",&dep);
            tot=i-dep;
            printf("MONEY IN BANK BEFORE WITHDRAW --> \t%d \n",i);
            printf("MONEY AFTER WITHDRAW --> \t");
                printf("YOUR TOTAL MONEY AFTER TRANSFERING FUND --> \t");
                printf("%d\n",tot);
                break;
                default:printf("NO INFO FOUND \n");


        }
    }


    else
    {
        printf("**************************\n");
    }

    break;
    }


          case 2:
                printf("ENTER YOUR NAME --> \t");
                scanf("%s",&name);

            l=strcmp(name,name1);

                if(l==0)
                {


                    printf("PASSWORD = 1234 \n");
                }

                else if (name=="bucky")
                {
                    printf("password = 5678");
                }
                else
                    {
                    printf("please enter a valid name \n");
                }

                break;
                default:
                    printf("NO INFO FOUND \n");

}
return 0;
     }



