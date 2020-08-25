#include <bits/stdc++.h> 
using namespace std;

vector<long> v;

void jumpingNumberUsingBFS(int jump, int n) {
 queue<int> q;
 q.push(jump);
 while(!q.empty()){
     jump = q.front();
     q.pop();
     if(jump <= n){
         v.push_back(jump);
         int last_digit = jump % 10;
         if(last_digit == 0) {
             q.push((jump*10)+last_digit+1);
         } else if(last_digit == 9){
             q.push((jump*10)+last_digit-1);
         } else {
             q.push((jump*10)+last_digit-1);
             q.push((jump*10)+last_digit+1);
         }
     }
 }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        v.push_back(0);
        for(int i=1; (i<=9 && i<=n); i++){
            jumpingNumberUsingBFS(i, n);
        }
        sort(v.begin(), v.end());
        for (const auto &i: v)
          cout << i << ' ';
    }
    return 0;
}