#include<iostream>
#include<climits>

using namespace std;

int main(){
	int a[100];
	int i,n;
	int smallest = INT_MAX;
	int largest = INT_MIN;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		smallest = min(a[i],smallest);
		largest = max(a[i],largest);
	}
	cout<<smallest<<endl;
	cout<<largest<<endl;
}
