#ifndef READINPUT_H_INCLUDED
#define READINPUT_H_INCLUDED

//for a choosen datatype extracts the given input
#define MAX      80          /* maximum length of buffer          */
#define DIGIT     1          /* data will be read as digits 0-9   */
#define ALPHA     2          /* data will be read as alphabet A-Z */
#define STRING    3          /* data is read as ASCII             */
#define ALPHANUM  4         /*data is read as alphabet and number A-Z ,0-9 */
#define FLOAT     5         /*data is read as float or real values */

int readinput( char buff[] ,int choice , int limit )
{
	int ch, index = 0;              //declaring the local variables
    ch = getchar();
	while( ch!='\n' && index < limit )
    {
		switch( choice )
		{
			case DIGIT:
				if( isdigit( ch ) )
				{
					buff[index] = ch;
					index++;
				}
				break;
			case ALPHA:
				if( isalpha( ch ) )
                {
					buff[index] = ch;
					index++;
				}
				break;
            case STRING:
				if( isascii( ch ) )
                {
					buff[index] = ch;
					index++;
				}
				break;
            case ALPHANUM:
				if( isalnum( ch ) )
                {
					buff[index] = ch;
					index++;
				}
				break;
            case FLOAT:
                 if(ch=='.'||isdigit(ch))
				 {
					buff[index] = ch;
					index++;
				}
				break;
			default:
				/* this should not occur */
				break;
		}
		ch = getchar();
	}
	buff[index] = '\0';  /* null terminate input */
	return index;
}

#endif // READINPUT_H_INCLUDED
