#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int s = 0;
	int e = n;
	int ans = 0;
	bool flag = true;
	while(s<=e){
		int mid = (s+e)/2;

		if(mid*mid == n){
			cout<<mid<<endl;
			flag == false;
			break;
		}
		else if(mid*mid > n){
			e = mid - 1;
		}
		else{
			ans = mid;
			s = mid + 1;
		}
	}
	if(!flag) cout<<ans<<endl;
	return 0;
}