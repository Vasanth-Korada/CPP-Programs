#include<iostream>

using namespace std;

int main(){
	int inp[100][100];
	int n,m;
	cout<<"Enter n and m:";
	cin >> n >> m;
	int counter = 0;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin >> inp[i][j];
		}
	}
	for(int k = 0;k<m;k++){
		if(counter % 2 == 0){
			for(int i = 0;i<n;i++){
				cout << inp[i][counter]<<" ";
			}
			counter = counter + 1;
		}
		else{
			for(int i = n-1;i>=0;i--){
				cout << inp[i][counter]<<" ";
			}
			counter = counter + 1;
		}
	}
	
}