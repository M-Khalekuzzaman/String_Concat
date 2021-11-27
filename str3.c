#include<stdio.h>
int main()
{
    char str1[50],str2[30] ;
    printf("Enter your first string is : ");
    gets(str1);
    printf("Enter your second string is : ");
    gets(str2);
    //strcat(str1,str2);
    int len = 0,i = 0, j = 0;
    while(str1[i] !='\0')
    {
        i++;
        len++;
    }
    while(str2[j] !='\0')
    {
        str1[len + j] = str2[j];
        j++;
    }
    printf("The original string is : %s\n",str1);
    getch();

}
