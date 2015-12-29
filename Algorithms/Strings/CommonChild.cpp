//https://www.hackerrank.com/challenges/common-child
#include<iostream>
#include<cstring>
using namespace std;
char a[5000], b[5000];
int l1, l2;
int fn(int i, int j);
int res[5000][5000];
int main()
{
    cin>>a>>b;

    int i, j, k, ans;
    l1=strlen(a);
    l2=strlen(b);

    i=j=0;
    cout<<fn(0, 0);


    return 0;
}
int fn(int i, int j)
{
    if(i>=l1 || j>=l2)
        return 0;
    if(res[i][j]>0)
        return res[i][j];
    if(a[i]==b[j]){
        res[i][j]=(1+fn(i+1, j+1));
      //  cout<<i<<' '<<j<<' '<<res[i][j]<<endl;
        return res[i][j];
    }
    res[i][j]=max(fn(i, j+1), fn(i+1, j));
    //cout<<i<<' '<<j<<' '<<res[i][j]<<endl;
    return res[i][j];
}
//  ABCD            ABCD
//  ABDC            BXACD

/*
 *
 *
 * Given two strings a and b of equal length, what's the longest string (S) that can be constructed such that it is a child of both? 
 *
 * A string x is said to be a child of a string y if x can be formed by deleting 0 or more characters from y. 
 *
 * For example, ABCD and ABDC has two children with maximum length 3, ABC and ABD. Note that we will not consider ABCD as a common child because C doesn't occur before D in the second string.
 *
 * Input format
 *
 * Two strings, a and b, with a newline separating them.
 *
 * Constraints
 *
 * All characters are upper cased and lie between ASCII values 65-90. The maximum length of the strings is 5000.
 *
 * Output format
 *
 * Length of string S
 * */
