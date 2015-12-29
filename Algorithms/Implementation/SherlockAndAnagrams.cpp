//https://www.hackerrank.com/challenges/sherlock-and-anagrams
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int T;
    cin>>T;

    char a[100];
    int i, j, k, ans;
    for(i=0;i<T;i++)
    {
        cin>>a;
        int arr[26]={0};
        for(j=0;j<strlen(a);j++)
            arr[a[j]-97]++;

        for(i=0;i<26;i++)
            cout<<arr[i]<<' ';
    }
    return 0;
}

