#ifndef RANGE_H_INCLUDED
#define RANGE_H_INCLUDED

//validates the range of month as 1-12, range of days according to the months in 2015, range of natural numbers as >0
void rangecheck(int choice)
{
	int months;             //declaring the local variables
	int day,no;
	int num;
	switch (choice)
	{
		case 1: //Checking for month number in range 1-12
                printf("\n Enter a month number to check whether it is in range of months: ");
				scanf("%d",&months);
				do
                {
                    if(months>=1 && months<=12)
                    {
                        printf("\nThe month you entered is in the range of months\n");
                        break;
                    }
                    else
                    {
                        do
                        {
                            printf("\n Enter a month number to check whether it is in range of months: ");
                            scanf("%d",&months);
                        }while(months<1||months>12);
                    }

                }while((months>=1 || months<=12));
                break;
		case 2: //checking range of days in months of 2015
                printf("\nEnter a month no and its days in 2015\n to check whether days are in range of month: ");
				scanf("%d%d",&no,&day);
				do
				{
					if(day==31)
					{
						if(no==1||no==3||no==5||no==7||no==8||no==10||no==12)
						{
							printf("\nDays are in range of month\n");
							break;
						}
						else
							{
								printf("\nEnter a month no and its days in 2015\n to check whether days are in range of month: ");
								scanf("%d%d",&no,&day);
							}
					}
					else
						if(day==30)
						{
							if(no==4||no==6||no==9||no==11)
							{
								printf("\nDays are in range of month\n");
								break;
							}
							else
							{
								printf("\nEnter a month no and its days in 2015\n to check whether days are in range of month: ");
								scanf("%d%d",&no,&day);
							}
						}
						else
							if(day==28)
							{
								if(no==2)
								{
									printf("\nDays are in range of month\n");
									break;
								}
								else
                                {
                                    printf("\nEnter a month no and its days in 2015\n to check whether days are in range of month: ");
                                    scanf("%d%d",&no,&day);
                                }
							}
							else
							{
								printf("\nEnter a month no and its days in 2015\n to check whether days are in range of month: ");
								scanf("%d%d",&no,&day);
							}

				}while(day!=31||day!=30||day!=28);
				break;
		case 3: //checking range of natural numbers
                printf("\nEnter a Integer Number to check whether it is in range of natural Numbers:  ");
				scanf("%d",&num);
				if(num>=1)
					printf("\nThe Number is in range of Numbers\n");
				else
				{
					while(num<1)
					{
						printf("\nEnter a Integer Number to check whether it is in range of natural Numbers:  ");
						scanf("%d",&num);
					}
				}
				if(num>=1)
					printf("\nThe Number is in range of Numbers\n");
                break;

	}
	return;
}


#endif // RANGE_H_INCLUDED
