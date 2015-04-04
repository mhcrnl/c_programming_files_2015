#include<stdio.h>

int main(void){
    FILE *fp;
    char ch;
    fp=fopen("file.txt", "w");
    printf("\nEnter data to be stored in to the file: ");
    while((ch=getchar())!=EOF)
        fputc(ch, fp);
    fclose(fp);
    return 0;
}
