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
    if(a[0]==b[0])
        res[0][0]=1;
    else
        res[0][0]=0;

    for(i=1;i<l1;i++){
        if(a[i]==b[0])
            res[i][0]=1;
        else
            res[i][0]=max(res[i-1][0], 0);
    }

    for(j=1;j<l2;j++){
        if(a[0]==b[j])
            res[0][j]=1;
        else
            res[0][j]=max(res[0][j-1], 0);
    }



    for(i=1;i<l1;i++)
    {
        for(j=1;j<l2;j++){
            if(a[i]==b[j])
                res[i][j]=res[i-1][j-1]+1;
            else
                res[i][j]=max(res[i-1][j], res[i][j-1]);
        }
    }


    cout<<res[l1-1][l2-1];


    return 0;
}

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
