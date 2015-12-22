//https://www.hackerrank.com/challenges/cavity-map
#include <list>
#include <cmath>
#include <string>
#include <vector>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
        cin >> grid[grid_i];
    }
    int i,j, k, ans;
    for(i=1;i<n-1;i++){
        for(j=1;j<n-1;j++){
            if(grid[i][j]>max((int)grid[i][j-1], max((int)grid[i][j+1], max((int)grid[i-1][j], (int)grid[i+1][j])) ))
                grid[i][j]='X';
        }
    }
    for(int i=0;i<n;i++)
        cout<<grid[i]<<endl;
    return 0;
}

