#ifndef LENGTHCHECK_H_INCLUDED
#define LENGTHCHECK_H_INCLUDED

//validates the length of US telephone number as 10 and indian landline number as 7
void lengthcheck(int choice)
{
	int index=0,i=0,cnt=0;          //declaring the local variables
	char str[50];
	char ch;
	switch (choice)
	{
		case 1:	printf("To check length of a US Telephone Number: \n");
				printf("\nEnter the number to be checked: ");
				gets(str);
				do
				{
					cnt=0;
					for(index=0,i=0;str[index]!='\0';index++)
					{
					    ch=str[index];
						if(isdigit(ch))
						{
							str[i]=ch;
							i++;
							cnt++;               //counting the number of digits in the US phone number
						}
					}
					if(cnt==10&&i==10&&str[0]!='0')
					{
						printf("\nIn The length of US Telephone Number i.e 10 digits\n");
						break;
					}
					else
					{
						printf("\nEnter the number to be checked: ");
						gets(str);
					}
				}
				while(cnt!=10||str[0]!='0');         //till cnt is not equal to 7 it will continue to enter input
				break;
		case 2: printf("\nTo check the length of a Indian Landline NUmber: \n");
				printf("\nEnter the Number to be checked: ");
				scanf("%s",str);
				do
				{
					cnt=0;
					for(index=0,i=0;str[index]!='\0';index++)
					{
					    ch=str[index];
						if(isdigit(ch))
						{
							str[i]=ch;
							i++;
							cnt++;              //counting the number of digits in the landline number
						}
					}
					if(cnt==7&&(i==7)&&str[0]!='0')
					{
						printf("\nIn the length of Indian Landline Number i.e 7 digits\n");
						break;
					}
					else
					{
						printf("\nEnter the number to be checked: ");
						gets(str);
					}
				}
				while(cnt!=7||str[0]!='0');      //till cnt is not equal to 7 it will continue to enter input
				break;
	}
	return;
}


#endif // LENGTHCHECK_H_INCLUDED
