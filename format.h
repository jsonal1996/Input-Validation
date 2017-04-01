#ifndef FORMAT_H_INCLUDED
#define FORMAT_H_INCLUDED

//Validates the date in format DD/MM/YYYY and time in format HH:MM:SS
void formatcheck( int choice)
{
	char date[20];                              //declaring the local variables
	char time[10];
	int DMonth,DDay,DYear,Dhour,Dmin,Dsec;
	switch(choice)
	{
		case 1: //checking the date format
                printf("\nEnter the date to check format in the year 2013 to 2015 (DD/MM/YYYY) ");
				gets(date);
                do
				{
					DMonth = ((date[3] - '0') * 10 + (date[4] - '0'));      //taking out the month as an integer
					DDay = ((date[0] - '0') * 10 + (date[1] -'0'));         //taking out the number of day as integer
					DYear = ((date[6] - '0') * 1000 + (date[7] -'0') * 100 + (date[8] - '0') * 10 + (date[9] -'0'));//taking out the year as an integer
					if(DDay>=1&&DDay<=31&&DMonth>=1&&DMonth<=12&&DYear>=2013&&DYear<=2015)
					{
						if(DMonth==2&&DDay==29||DDay==30||DDay==31)
						{
							printf("\nEnter the date to check format in the year 2013 to 2015 (DD/MM/YYYY): ");
							gets(date);

						}

						else
						{
							if(date[2]=='/'&&date[5]=='/'&&strlen(date)==10)
							{
								printf("\nDate is in right format i.e DD/MM/YYYY\n");
								break;
							}
							else
							{
								do
								{

									printf("\nEnter the date to check format in the year 2013 to 2015 (DD/MM/YYYY): ");
									gets(date);
								}while(date[2]!='/'||date[5]!='/'||strlen(date)!=10);
							}
						}
					}
					else
					{
						printf("\nEnter the date to check format in the year 2013 to 2015: ");
						gets(date);
					}

				}while(date[2]=='/'||date[5]=='/'||strlen(date)==10);
				break;

		case 2: //Checking the Format of Time
                printf("\nEnter the time to check format (HH:MM:SS):  ");
				gets(time);


				do
				{
					Dmin = ((time[3] - '0') * 10 + (time[4] - '0'));
					Dhour = ((time[0] - '0') * 10 + (time[1] -'0'));
					Dsec = ((time[6] - '0') * 10 + (time[7] -'0'));
					if(Dhour>=0&&Dhour<=24&&Dmin>=0&&Dmin<=59&&Dsec>=0&&Dsec<=59)
					{
						if(Dhour==24&&Dmin!=0&&Dsec!=0)
						{
							printf("\nEnter the time to check format (HH:MM:SS): ");
							gets(time);

						}
						else
						{
							if(time[2]==':'&&time[5]==':'&&strlen(time)==8)
							{
								printf("\nTime is in right format i.e HH:MM:SS\n");
								break;
							}
							else
							{
								do
								{

									printf("\nEnter the time to check format: (HH:MM:SS)  ");
									gets(time);
								}while(time[2]!=':'||time[5]!=':'||strlen(time)!=8);
							}
						}
					}

					else
					{
						printf("\nEnter the time to check format:(HH:MM:SS) ");
						gets(time);
					}

				}while(time[2]==':'||time[5]==':'||strlen(time)==8);
				break;
    }
    return;
}


#endif // FORMAT_H_INCLUDED
