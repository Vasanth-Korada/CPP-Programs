#include<iostream>
#include<string>

using namespace std;

int main(){
	string a;
	cin >> a;
	string res;
	int i = 0;
	while(i<a.length()){
		res += a[i];
		int j = i+1;
		int counter =0;
		while(a[j] == a[i]){
			counter = counter + 1;
			j++;
		}
		res += to_string(counter+1);
		i = j;
	}
	cout << res;
	return 0;
}