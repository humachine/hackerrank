//https://www.hackerrank.com/challenges/taum-and-bday
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int _=0; _<T; _++)
    {
        long long int X, Y, Z, B, W, ans, sum, res;
        cin>>B>>W>>X>>Y>>Z;
        if(X==Y){
            cout<<B*X+W*Y<<endl; continue;}
        
        if(X+Z<Y)
            cout<<B*X+W*X+W*Z<<endl;
        else if(Y+Z<X)
            cout<<B*Y+B*Z+W*Y<<endl;
        else
            cout<<B*X+W*Y<<endl;

    }
    return 0;
}

