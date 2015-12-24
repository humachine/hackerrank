//https://www.hackerrank.com/challenges/matrix-rotation-algo
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
void rotate(int inp[300][300], int startx, int starty, int endx, int endy, int r);
int ans[300][300];
int main()
{
    int i, j, k;
    int inp[300][300];
    int m, n, r;
    cin>>m>>n>>r;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>inp[i][j];
            ans[i][j]=inp[i][j];
        }
    }
    i=0, j=0;
    int sx, sy, ex, ey;
    sx=sy=0;
    ex=m, ey=n;
   
    while(sx<ex && sy<ey)
    { 
        rotate(inp, sx, sy, ex, ey, r);
        sx+=1;
        sy+=1;
        ex-=1;
        ey-=1;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cout<<inp[i][j]<<' ';
        cout<<endl;
    }





    return 0;
}

void rotate(int inp[300][300], int startx, int starty, int endx, int endy, int r)
{    
    int length=endx-startx;
    int width=endy-starty;
    int numelem=2*width+2*(length-2);

    int queue[1000]={0}; 
    int qcount=0;
    int finalqueue[1000]={0};
    r=r%numelem;

    int i, j;

    if(r==0)
        return;

    i=startx;
    j=starty;


    for(i=startx, j=starty;j<endy;j++)
        queue[qcount++]=inp[i][j];
    for(i=startx+1,j=endy-1;i<endx;i++)
        queue[qcount++]=inp[i][j];
    for(i=endx-1,j=endy-2;j>=starty;j--)
        queue[qcount++]=inp[i][j];
    for(i=endx-2,j=starty;i>startx;i--)
        queue[qcount++]=inp[i][j];

    
    qcount=0;
    for(i=r;qcount<numelem;i++)
    {
        if(i==numelem)
            i=0;
        finalqueue[qcount++]=queue[i];
    }
        

   
    qcount=0;
    for(i=startx, j=starty;j<endy;j++)
        inp[i][j]=finalqueue[qcount++];
    for(i=startx+1,j=endy-1;i<endx;i++)
        inp[i][j]=finalqueue[qcount++];
    for(i=endx-1,j=endy-2;j>=starty;j--)
        inp[i][j]=finalqueue[qcount++];
    for(i=endx-2,j=starty;i>startx;i--)
        inp[i][j]=finalqueue[qcount++];


}
