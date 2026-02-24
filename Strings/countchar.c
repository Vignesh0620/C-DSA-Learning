/* Program to count letters, digits , spaces and special characters in a string*/

#include <stdio.h>
#include <string.h>

void count_chars(char *ch[])
{
    int len=strlen(ch);

    int letter=0, digit=0, space=0, specialchars=0;

    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]== ' ')
            space++;
        else if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))
            letter++;
        else if(ch[i]>='0' && ch[i]<='9')
            digit++;
        else
            specialchars++;
        }

    printf("\nNumber of Letters: %d\n", letter);
    printf("Number of Digits: %d\n", digit);
    printf("Number of Spaces: %d\n", space);
    printf("Number of Special Characters: %d\n", specialchars);
}

void main()
{
    char string[100];
    printf("Please Enter your string: ");
    scanf("%s",string);
    count_chars(string);
    return;
}
