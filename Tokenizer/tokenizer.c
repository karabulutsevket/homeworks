#include <stdio.h>
#include <ctype.h>

typedef char * string;

int main(int argc, char *argv[])
{
    string inputS = argv[1];
    string input[50];   
    char   buffer[200];
    int    i;
    int    strnum = 0;
    char  *next = buffer;
    char   c;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s expression\n", argv[0]);
        
    }
    inputS= "for(i=0;i<n;i++){y=7+20*xa;if(y>=20)y=0;}";
    printf("Girdi: %s\n", inputS);
    printf("Kelimestiriliyor:\n");

    while ((c = *inputS++) != '\0')
    { 
        input[strnum++] = next;
        if (isalnum(c))
        {
            printf("%c", c);
            printf(",");
            *next++ = c;
            while (isalnum(*inputS))
            {
                c = *inputS++;
                printf("%c", c);
                printf(",");
                *next++ = c;
            }
            *next++ = '\0';
        }
        else
        {
            printf("%c", c);
            printf(",");
            *next++ = c;
            *next++ = '\0';
        }
    }
    printf("\n");

    printf("Kelimelestirildi:\n");
    for (i = 0; i < strnum; i++)
    {
        if(i==(strnum-1)){
        	printf("%s",input[i]);
		}
		else{
			printf("%s",input[i]);
            printf(",");
		}
    }

    return 0;
} //