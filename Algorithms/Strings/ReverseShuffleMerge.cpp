//https://www.hackerrank.com/challenges/morgan-and-a-string
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[10000];
    int i, j, k, ans; 
    cin>>s;
    int count[26];
    for(i=0;i<strlen(s);i++)
    {
        count[(int) s[i] - 97]++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            for(j=0;j<count[i]/2;j++)
                cout<<(char)(97+i);
        }
    }
    return 0;
}
