//https://www.hackerrank.com/challenges/tutorial-intro
#include<iostream>
using namespace std;
int main()
{
    int v, n;
    int arr[1000];
    cin>>v>>n;


    int i,j, k, ans;
    for(i=0;i<n;i++)
        if(cin>>j && j==v)
            ans=i;
    cout<<ans<<endl;
    return 0;

}
