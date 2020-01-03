#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int i,j;
	printf(" \n\n");

    char chr[6][200] ={"      _\r\n",
		       "      \\\r\n",
		       "      /\\_\r\n",
		       "  ___/      ___\r\n",
                       " /  _\\_____/_  \\\r\n",
                       " \\___/     \\___/\r\n"};

   for(i=0;i<6;i++)
   {
	for(j=0; j<200; j++)
		printf("%c", chr[i][j]);
   }
   printf("strlen(chr[0]):%lu\n", strlen(chr[0]));
   printf("strlen(chr[1]):%lu\n", strlen(chr[1]));
   printf("strlen(chr[2]):%lu\n", strlen(chr[2]));
   printf("strlen(chr[3]):%lu\n", strlen(chr[3]));
   printf("strlen(chr[4]):%lu\n", strlen(chr[4]));
   printf("strlen(chr[5]):%lu\n", strlen(chr[5]));

printf(" \n\n");
 }
