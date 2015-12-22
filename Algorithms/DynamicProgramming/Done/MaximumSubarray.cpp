
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;


    int i, j,k, ans, arr[100000], N;
    for(i=0;i<T;i++) {
        cin>>N;
        long long int sum=0;
        for(j=0;j<N;j++){
            cin>>arr[j];
            if(arr[j]>0)
                sum+=arr[j];
        }
        if(sum==0)
            sum=*(max_element(arr, arr+N));

        long long int maxuptohere, maxsofar; 
        maxuptohere=maxsofar=arr[0];
        for(j=1;j<N;j++)
        {
            maxuptohere = max(maxuptohere+arr[j], (long long) arr[j]);
            maxsofar = max(maxsofar, maxuptohere);
        }
        cout<<maxsofar<<' ';
        cout<<sum<<endl;
    }
    return 0;
}
