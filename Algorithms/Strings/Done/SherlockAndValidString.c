//https://www.hackerrank.com/challenges/sherlock-and-valid-string
#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[100000];
    int i, j, k, ans;
    scanf("%s", a);
    int count[26]={0};

    int len=strlen(a);
    for(i=0;i<len;i++)
        count[(int)a[i]-97]++;


    int first, second;

    i=0;
    first=second=-1;
    int NO=0;
    while(i<26)
    {
        if(count[i])
        {
            if(first<0){
                first=count[i];
            }
            else if(count[i]!=first)
            {
                if(second<0)
                    second=count[i];
                else{
                    NO=1;
                    break;
                }
            }
        }
        i++;

    }
    if(NO)
        printf("NO\n");
    else
        printf("YES\n");


    return 0;
}

/*
 * A "valid" string is a string S such that for all distinct characters in S each such character occurs the same number of times in S.
 *
 * For example, aabb is a valid string because the frequency of both characters a and b is 2, whereas aabbc is not a valid string because the frequency of characters a, b, and c is not the same.
 *
 * Watson gives a string S to Sherlock and asks him to remove some characters from the string such that the new string is a "valid" string.
 *
 * Sherlock wants to know from you if it's possible to be done with less than or equal to one removal.
 *
 * Input Format
 *
 * The first and only line contains S, the string Watson gives to Sherlock.
 *
 * Output Format
 *
 * Output YES if string S can be converted to a "valid" string by removing less than or equal to one character. 
 * Else, output NO.
 *
 * Constraints:
 *
 * 1≤size of stringS≤105 
 * String S contains lowercase letters (a-z) only.
 *
 * Sample Input
 *
 * aabbcd
 * Sample Output
 *
 * NO
 * Explanation
 *
 * 2 is the minimum number of removals required to make it a valid string. It can be done in following two ways:
 *
 * Remove c and d to get aabb. 
 * Or remove a and b to get abcd.
 *
 * */

