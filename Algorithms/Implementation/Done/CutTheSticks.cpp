#include<iostream>
using namespace std;
int main()
{
    int N, arr[1000];
    cin>>N;
    int i, j, k, ans, min=2000;
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    int temp=N, count=N;
    int newmin=2000;

    while(count>0)
    {

        cout<<count<<endl;
        newmin=2000;
        count=0;
        for(i=0;i<N;i++)
        {
            if(arr[i]>0) {
                arr[i]-=min;
                if(newmin>arr[i] && arr[i]>0)
                    newmin=arr[i];
            }
            if(arr[i]!=0)
                count++;
        }
        min=newmin;
    }


        

    return 0;
}
