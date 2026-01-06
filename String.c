#include <stdio.h>
#include <string.h>//buildin function for the size of string and its functrions

int noofelements(char str[],int size)
{
    int s=strlen(str);
    return s;
}

int stringcompare(char str1[],char str2[],int size)
{
    int p=strcmp(str1,str2);
    return p;
}

int main(){
char str1[5]={'a','m','i','t','\0'};
char str2[5]={'a','m','i','t','\0'};//made a place for null
char str3 []={'a','m','i','t','\0'};
char str4 [10]="Amit";
char str5 [5]="Amit";//will make the last place for null
char str6 []="Amit";//will also make place for null
printf("%s\n ",str2);

int s2 = noofelements(str2,5);
printf("%d\n",s2);

int c1 = stringcompare(str5,str6,5);
printf("%d\n",c1);

char str[20]="AMIT learning";
int s=strlen(str);//built in function for the size of the string
int p=strcmp(str1,str2);//built in function for comparision equal 1 not equal 0 smaller -1

strcat(str4,"hh"); //add the hh to the str4 string
printf("%d\n",s);
printf("%d\n",p);

for(int i=0;str[i]!='\0';i++)// print till null
{
    printf("%c",str[i]);
}

return 0;}
