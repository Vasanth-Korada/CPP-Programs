#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin >> s;
	string res = "";
	int i = 0;
	
	while(i < s.length()){
		int j = i+1; 
		int diff = int(s[j]) - int(s[i]);
		s[j-1] = diff;
		res += s[i];
		res += char(diff);
		res += s[j];
		i += 1;
	}
	cout << res <<endl;
	
}