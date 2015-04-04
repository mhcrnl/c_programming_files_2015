/*.......................................
This program reads the content of program.txt
file and stores it in a string c if of this file
and this c program is same and the name of file
matches but,
if this there is no file named program.txt then,
this program displays Error! opening file and program
will be terminated.
.......................................................*/
#include <stdio.h>
#include <stdlib.h> /* For exit() function*/
int main()
{
   char c[1000];
   FILE *fptr;
   if ((fptr=fopen("program.txt","r"))==NULL){
       printf("Error! opening file");
       exit(1);         /* Program exits if file pointer returns NULL. */
   }
   fscanf(fptr,"%[^\n]",c);
   printf("Data from file:\n%s",c);
   fclose(fptr);
   return 0;
}
