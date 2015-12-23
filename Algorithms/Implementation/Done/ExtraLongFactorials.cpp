//https://www.hackerrank.com/challenges/extra-long-factorials
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ans[300]={0};
    int N;
    cin>>N;
    int i, j, k;
    int digits=1;
    ans[0]=1;
    int carry=0;
    int temp;
    for(i=1;i<=N;i++)
    {
        carry=0;
        for(j=0;j<digits;j++)
        {
            temp=ans[j]*i+carry;
            ans[j]=temp%10;
            carry=temp/10;
        }        
        while(carry)
        {
            ans[digits]=carry%10;
            digits++;
            carry/=10;
        }
        
        
    }
    for(i=digits-1;i>=0;i--)
        cout<<ans[i];


    return 0;
}

