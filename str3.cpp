#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char str1[50],str2[30];
    cout<<"Enter your first string is : ";
    gets(str1);
    cout<<"Enter second string is : ";
    gets(str2);
    //strcat(str1,str2);
    int len = 0,i = 0,j = 0;
    while(str1[i] !='\0')
    {
        i++;
        len++;
    }
    while(str2[j] !='\0')
    {
        str1[len + j] = str2[j] ;
        j++;
    }
    cout<<"The original string is : "<<str1<<endl;
    getch();
}
