//https://www.hackerrank.com/challenges/two-strings
//
//You are given two strings, AA and BB. Find if there is a substring that appears in both AA and BB.
//
//Input Format
//
//Several test cases will be given to you in a single file. The first line of the input will contain a single integer TT, the number of test cases.
//
//Then there will be TT descriptions of the test cases. Each description contains two lines. The first line contains the string AA and the second line contains the string BB.
//
//Output Format
//
//For each test case, display YES (in a newline), if there is a common substring. Otherwise, display NO.
//
//Constraints
//
//All the strings contain only lowercase Latin letters.
//1<=T<=101<=T<=10
//1<=|A|,|B|<=1051<=|A|,|B|<=105
//Sample Input
//
//2
//hello
//world
//hi
//world
//Sample Output
//
//YES
//NO
//Explanation
//
//For the 1st test case, the letter o is common between both strings, hence the answer YES. (Furthermore, the letter l is also common, but you only need to find one common substring.) 
//For the 2nd test case, hi and world do not have a common substring, hence the answer NO.
//

#include<iostream>
#include<string>
using namespace std;
string longestCommonSubstring(string a, string b){
}
int main()
{
    string a, b;
    int T;
    cin>>T;

    int i, j, k, ans;
    for(i=0;i<T;i++){
        cin>>a>>b;
    }
    return 0;
}
