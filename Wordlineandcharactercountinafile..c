/*Word, line and character count in a file*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    char ch;
    int characters=0,words=0,lines=0;
    file = fopen("C:/Users/Durga Sainath/FILES/b.txt", "r");
    //b.txt contains Hello This is Durga Sainath
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(0);}
    while ((ch=fgetc(file))!= EOF)
    {
        characters++;
        if (ch=='\n'||ch=='\0')
            lines++;
        if (ch==' '||ch=='\t'||ch=='\n'||ch=='\0')
            words++;}
    if (characters > 0)
    {
        words++;
        lines++;}
    printf("Total characters = %d\n", characters);
    printf("Total words = %d\n", words);
    printf("Total lines = %d\n", lines);
    fclose(file);
	return 0;
}
