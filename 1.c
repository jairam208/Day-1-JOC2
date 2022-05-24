#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[100], v[50], c[50];
    int j=0, k=0;
    printf("Enter the sentence : ");
    scanf("%[^\n]s", &s);
    for(int i=0; s[i]!='\0'; i++)
    {
        switch(s[i])
        {
            case 'A' :
            case 'a' :
            case 'E' :
            case 'e' :
            case 'I' :
            case 'i' :
            case 'O' :
            case 'o' :
            case 'U' :
            case 'u' : v[j++]=s[i]; break;
            default : c[k++]=s[i];
        }
    }
    v[j]='\0';
    c[k]='\0';
    printf("Vowels are : %s\n", v);
    printf("Consonants are : %s\n", c);
}