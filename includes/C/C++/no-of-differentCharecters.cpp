#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "aaabaacccbbbadduuyyaaz";
	vector <int> v(26, 0);
	for(int i=0;i<s.length();i++){
		v[s[i]-97]++;
	}
	for(int i=0;i<v.size();i++){
		if(v[i] != 0){
			cout<<(char)(i+ 97)<<"is"<<v[i]<<endl;
		}
	}
	return 0;
}