#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[1000];
	int n;
	cin>> n ;
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	int target;
	cin >> target;

	sort(a,a+n);
	int left = 0;
	int right = n-1;
	while(left < right){
		if(target == a[left]+a[right]){
			cout<<a[left]<<" and "<<a[right]<<endl;
			left++;
			right--;
		}
		else if(target > a[left]+a[right]){
			left++;
		}
		else{
			right--;
		}
	}
	return 0;
}