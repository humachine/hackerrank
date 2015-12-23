//https://www.hackerrank.com/challenges/acm-icpc-team
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<sstream>
using namespace std; 
int bitcount(char a[500], char b[500], int M)
{
    int count=0, i;
    for(i=0;i<M;i++)
    {
        if(max((int)a[i]-48, (int)b[i]-48)==1)
            count++;
    }
    return count;
}

int main()
{
    int N, M;
    cin>>N>>M;
    char arr[500][500];
    int i, j, k, ans, temp[500];
    int a[500];
    int maxi=0;
    for(i=0;i<N;i++){
        cin>>arr[i];
    }
    maxi=0;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++) {
            
            k=bitcount(arr[i], arr[j], M);
            if(maxi<k)
                maxi=k;
        }
    }
    int count=0;
    for(i=0;i<N;i++)
        for(j=i+1;j<N;j++)
            if(bitcount(arr[i], arr[j], M) == maxi)
                count++;

    cout<<maxi<<endl<<count<<endl;

    return 0;
}

