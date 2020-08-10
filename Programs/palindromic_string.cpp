#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[100];
	bool flag = false;
	cout<<"Enter a String:";
	cin.getline(a,100);

	cout<<a<<endl;

	int n = strlen(a);

	int i = 0;
	int j = n - 1;

	while(i<j){
		if(a[i] == a[j]){
			flag = true;
			i++;
			j--;
		}
		else{
			flag = false;
			break;
		}
	}
	if(flag){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}