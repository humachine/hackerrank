//https://www.hackerrank.com/challenges/morgan-and-a-string
#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int i , j, k , ans;

    int l1, l2;
    char a[100000], b[10000];

    int T;
    cin>>T;
    for(int _=0;_<T;_++)
    {
        cin>>a>>b;
        j=k=i=0;
        l1=strlen(a);
        l2=strlen(b);
        while(i<l1 && j<l2)
        {
            if(a[i]>b[j]){
                cout<<b[j];
                j++;
            }
            else if(a[i]<b[j]){
                cout<<a[i];
                i++;
            }
            else
            {
                if(j==l2-1 || i==l1-1)
                    cout<<a[i++];
                else
                {
                    k=1;
                    int allsame=1;
                    while(i+k<l1 && j+k<l2)
                    {
                        if(a[i+k]!=b[j+k]){
                            allsame=0;
                            break;
                        }
                        k++;
                    }
                    if(allsame){
                        cout<<a[i++];
                    }
                    else
                    {
                        if(a[i+k]<b[j+k])
                            cout<<a[i++];
                        else if(a[i+k]<b[j+k])
                            cout<<b[j++];
                    }
                }
            }
        }
        while(i<l1)
            cout<<a[i++];
        while(j<l2)
            cout<<b[j++];
        cout<<endl;
    }


    return 0;
}
/*
 *
 * Jack and Daniel are friends. Both of them like letters, especially upper-case ones. 
 * They are cutting upper-case letters from newspapers, and each one of them has their collection of letters stored in separate stacks. 
 * One beautiful day, Morgan visited Jack and Daniel. He saw their collections. Morgan wondered what is the lexicographically minimal string, made of that two collections. He can take a letter from a collection when it is on the top of the stack. 
 * Also, Morgan wants to use all the letters in the boys' collections.
 *
 * Input Format
 *
 * The first line contains the number of test cases, T. 
 * Every next two lines have such format: the first line contains string A, and the second line contains string B.
 *
 * Constraints 
 * 1≤T≤5 
 * 1≤|A|≤105 
 * 1≤|B|≤105 
 * A and B contain upper-case letters only.
 *
 * Output Format
 *
 * Output the lexicographically minimal string S for each test case in new line.
 *
 * Sample Input
 *
 * 2
 * JACK
 * DANIEL
 * ABACABA
 * ABACABA
 * Sample Output
 *
 * DAJACKNIEL
 * AABABACABACABA
 * Explanation
 *
 * The first letters to choose from were J and D since they were at the top of the stack. D was chosen, the options then were J and A. A chosen. Then the two stacks hav J and N, so J is chosen. (Current string is DAJ) Continuing this way till the end gives us the resulting string.
 *
 *
 * */
