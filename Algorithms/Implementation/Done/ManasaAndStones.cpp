//https://www.hackerrank.com/challenges/manasa-and-stones
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int i, j, k, ans;
    int n, a, b;
    for(int _=0;_<T;_++)
    {
        cin>>n>>a>>b;
        if(a==b)
        {
            cout<<n*a-a<<endl;
            continue;
        }
        n--;
        i=min(a,b);
        b=max(a,b); a=i;
        if(n==0){
            cout<<a<<' '<<b<<endl;
            continue;
        }
        for(i=0;i<=n;i++)
        {
            cout<<(n-i)*a+i*b<<' ';
        }
        cout<<endl;
    }
    return 0;
}
