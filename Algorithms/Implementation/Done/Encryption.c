//https://www.hackerrank.com/challenges/encryption
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[1000000];
    int i, j, k, ans;
    int len;
    scanf("%s", a);
    len=strlen(a);
    if(len==1)
    {
        printf("%s", a);
        exit(0);
    }

    int rows, columns;
    rows=(int)sqrt(len);

    if(rows*rows < len)
    {
        if(rows*rows+rows < len)
            columns=rows=rows+1;
        else
            columns=rows+1;
    }
    else
        columns=rows;
    for(i=0;i<columns;i++)
    {
        for(j=0;j<rows;j++)
        {
            if(j*columns+i < len)
            printf("%c", a[j*columns+i]);
        }
        printf(" ");
    }




    return 0;
}

