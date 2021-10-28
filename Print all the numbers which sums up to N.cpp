/*

INPUT - N=4

OUTPUT -
1 1 1 1 
1 1 2 
1 2 1 
1 3 
2 1 1 
2 2 
3 1 
4 


*/


#include<iostream>
#include<vector>
using namespace std;

void solve(int n, vector<int>& res){
    if(n==0){
        for(auto it:res)
            cout << it << " ";
        cout << endl;
        return;
    }
    for(int i = 1; i <= n; i++){
        res.push_back(i);
        solve(n-i,res);
        res.pop_back();
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    solve(n,vec);
    return 0;
}
