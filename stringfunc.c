#include <stdio.h>

int stringLenth(char[]);

int main(int argc, const char *argv[])
{
    // insert code here...
    char name[20], name2[20];
    char result[20];
    int len;
    printf("Enter name\n");
    scanf("%s", name);
    // printf("Enter name\n");
    // scanf("%s", name2);
    // len=stringLenth(name);
    // printf("Length of string %s is %d\n",name,len);
    // stringCopy(name,result);
    // printf("The Result is: %s",result);
    // stringConcate(name, name2);
    // printf("The result is: %s", name);

    reverseString(name);
    printf("Reversed string: %s\n",name);

    return 0;
}
int stringLenth(char strName[20])
{
    int i = 0;
    while (strName[i] != '\0')
    {
        i++;
    }
    return i;
}

void stringCopy(char strName[20], char strName2[20])
{

    int i = 0;
    while (strName[i] != '\0')
    {
        strName2[i] = strName[i];
        i++;
    }
    strName2[i] = '\0';
}

void stringConcate(char strName[20], char strName2[20])
{
    int i = 0, j = 0;
    while (strName[i] != '\0')
    {
        i++;
    }
    while (strName2[j] != '\0')
    {
        strName[i] = strName2[j];
        j++;
        i++;
    }
}

void reverseString(char strName[20])
{
    int n = strlen(strName);
    for (int i=0;i<n/2;i++)
    {
        char temp = strName[i];
        strName[i] = strName[n - i - 1];
        strName[n - i - 1] = temp;
    }
    
}