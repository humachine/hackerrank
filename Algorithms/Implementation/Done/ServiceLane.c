//https://www.hackerrank.com/challenges/service-lane
#include<stdio.h>
int main()
{
    int N, T;
    scanf("%d %d", &N, &T);
    int i, j, k, ans;
    int arr[100000];

    for(i=0;i<N;i++)
        scanf("%d", arr+i);
    int start, end;
    for(i=0;i<T;i++)
    {
        scanf("%d %d", &start, &end);
        ans=3;
        for(j=start;j<=end;j++)
            if (arr[j]<ans)
                ans=arr[j];
        printf("%d\n", ans);
    }

    return 0;
}
