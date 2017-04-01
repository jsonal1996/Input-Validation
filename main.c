/* version 1.1 */
#include <stdio.h>
#include "readinput.h"      //header file to check datatype of given input
#include "range.h"          //header file to check range of given input
#include "lengthcheck.h"    //header file to check check length of given input
#include "format.h"         //header file to check format of a given input
main()
{
	char buffer[80];        //declaring character string buffer
	int digits = 0,choice;  //declaring local variables
	int option;
	char ch,c;
	do
    {
        printf("\nEnter your choice for the check you want:\n1.Correct Type of Data\n2.Range Check\n3.Length Check\n4.Format Check\n");
        scanf("%d",&option);
        switch (option)
        {
            case 1: do
                    {
                        printf("\n\nEnter your choice to check datatype \n1.Integer \n2.Alphabets \n3.String \n4.Alphabet & Number \n5.Float: \n ");
                        scanf("%d",&choice);
                        while(digits==0)
                        {
                            printf("\nPlease enter input: ");
                            digits = readinput( buffer , choice, MAX ); //calls the function readinput() defined in header file readinput.h
                            if( digits != 0 )
                            {
                                printf("\nThe input you entered according to your datatype is: %s\n",buffer);
                            }
                        }
                        printf("\nWant to check more datatype:(y/n) ");
                        scanf("%s",&c);
                    }while(c=='Y'||c=='y');
                    break;
            case 2: do
                    {
                        printf("\n\nEnter your choice for check range of: \n1.Month number\n2.Days in given month\n3.Natural Numbers \n ");
                        scanf("%d",&choice);
                        rangecheck(choice);             //calls the function rangecheck() defined in header file range.h
                        printf("\nWant to check more range:(y/n) ");
                        scanf("%s",&c);
                    }while(c=='Y'||c=='y');
                    break;
            case 3: do
                    {
                        printf("\n\nEnter your choice for checking length of:\n1:US Telephone Number\n2.Indian Landline Number\n");
                        scanf("%d",&choice);
                        lengthcheck(choice);            //calls the function lengthcheck() defined in header file lengthcheck.h
                        printf("\nWant to check more length: (y/n) ");
                        scanf("%s",&c);
                    }
                    while(c=='Y'||c=='y');
                    break;
            case 4: do
                    {
                        printf("\n\nEnter your choice for checking format of:\n1.Date\n2.Time\n");
                        scanf("%d",&choice);
                        formatcheck(choice);        //calls the function formatcheck() defined in header file format.h
                        printf("\nWant to check more format (y/n): ");
                        scanf("%s",&c);
                    }
                    while(c=='Y'||c=='y');
                    break;
        }
        printf("\nWant to validate more data (y/n): ");
        scanf("%s",&ch);
    }while(ch=='Y'||ch=='y');
}
