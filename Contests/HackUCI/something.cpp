#include <iostream>
using namespace std;
int ans[20][60];

int knapSack(int W, int wt[], int val[], int n)
{
   // Base Case
   if (n == 0 || W == 0)
       return 0;
 
   // If weight of the nth item is more than Knapsack capacity W, then
   // this item cannot be included in the optimal solution
   if (wt[n-1] > W)
       return knapSack(W, wt, val, n-1);
 
   // Return the maximum of two cases: 
   // (1) nth item included 
   // (2) not included
   else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                    knapSack(W, wt, val, n-1)
                  );
}


int main()
{
    int n;
    cin>>n;
    int i, j, k;

    int value[20];
    int weight[20];
	int W=60;
    for(i=0;i<n;i++)
    {
        for(j=0;j<60;j++)
            ans[i][j]=-1;
        cin>>value[i]>>weight[i];
    }
    cout<<knapSack(W, weight, value, n);

    return 0;

}

