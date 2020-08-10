#include<iostream>
using namespace std;

int main(){
	int n;
	int a[10];
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	int maxSum = 0;
	int left = 0;
	int right = 0;

	for(int i = 0;i<n;i++){
		for(int j = 0 ; j< n ; j++){
			int currentSum = 0;
			for(int k=i;k<=j;k++){
				currentSum = currentSum + a[k];
			}
			if(currentSum > maxSum){
				maxSum = currentSum;
				left  = i;
				right = j;
			}
		}
	}
	cout<<"Maximum Sum is:"<<maxSum<<endl;
	for(int k = left;k<=right;k++){
		cout<<a[k]<<" ";
	}

}