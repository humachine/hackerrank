//https://www.hackerrank.com/challenges/pangrams
#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
    int i, j, k;
    char a[1000];
    cin.getline(a, 1000, '\n');

    int ans[26]={0};
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
            continue;
        ans[toupper(a[i])-65]++;
    }
    k=0;
    for(i=0;i<26;i++)
        if(ans[i] == 0){
            k=1;
            break;
        }
    if(k==1)
        cout<<"not pangram\n";
    else
        cout<<"pangram\n";

    return 0;

}

/*

Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly, because it is a pangram. (Pangrams are sentences constructed by using every letter of the alphabet at least once.)

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.

Given a sentence s, tell Roy if it is a pangram or not.

Input Format

Input consists of a string s.

Constraints
Length of s can be at most 103 (1≤|s|≤103) and it may contain spaces, lower case and upper case letters. Lower-case and upper-case instances of a letter are considered the same.

Output Format

Output a line containing pangram if s is a pangram, otherwise output not pangram.

Sample Input

Input #1

We promptly judged antique ivory buckles for the next prize
Input #2

We promptly judged antique ivory buckles for the prize
Sample Output

Output #1

pangram
Output #2

not pangram
Explanation

In the first test case, the answer is pangram because the sentence contains all the letters of the English alphabet.

*/
