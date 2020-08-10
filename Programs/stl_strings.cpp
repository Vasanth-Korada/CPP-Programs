#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
	string s;
	cout << "Enter a String:";
	getline(cin,s);
	cout<<s<<endl;

	s.clear();
	cout<<s<<endl;

	if(s.empty()){
		cout<<"String is Empty!"<<endl;
	}

	s = "Vasanth Korada";
	int length = s.length();
	sort(s.begin(),s.end());
	cout<<s;

	return 0;

}