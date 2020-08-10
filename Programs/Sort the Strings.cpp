#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

string extractStringatKey(string str,int key){
	char *arr = strtok((char *)str.c_str()," ");
	while(key > 1){
		arr = strtok(NULL," ");
		key--;
	}
	return (string)arr;
}
int convertToInt(string str){
    int num=0;
    int mulFactor=1;
    for (int i = str.length()-1; i >=0; i--) {
        num+= ((str[i]-'0')*mulFactor);
        mulFactor*=10;
    }
    return num;
}

bool numericSort(pair<string,string> str1,pair<string,string> str2){
	string key1;
	string key2;
	key1 = str1.second;
	key2 = str2.second;
	return convertToInt(key1) < convertToInt(key2);
}

bool lexicoSort(pair<string,string> str1,pair<string,string> str2){
	string key1;
	string key2;
	key1 = str1.second;
	key2 = str2.second;

	return key1 < key2;
}

int main(){
	int n;
	cin >>n;
	cin.get();
	string s[100];
	for(int i = 0;i<n;i++){
		getline(cin,s[i]);
	}
	int key;
	string reversed;
	string sortType;
	cin >> key >> reversed >> sortType;

	pair<string,string> strPair[100];
	for(int i = 0 ;i < n ; i++){
		strPair[i].first = s[i];
		strPair[i].second = extractStringatKey(s[i],key);
	}

	if(sortType == "numeric"){
		sort(strPair,strPair+n,numericSort);
	}
	else {
		sort(strPair,strPair+n,lexicoSort);
	}

	if(reversed == "true"){
		for(int i = 0;i<n/2;i++){
			swap(strPair[i],strPair[n-i-1]);
		}
	}
	for(int i = 0;i<n;i++){
			cout<<strPair[i].first<<endl;
	}
	return 0;
}