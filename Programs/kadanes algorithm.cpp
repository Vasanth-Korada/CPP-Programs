#include<iostream>
#include<climits>

using namespace std;

int main(){
	int n;
	int a[10];
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	int max_so_far = 0;
	int changing_max = 0;
	int maxelement = INT_MIN;

	for(int i = 0;i<n;i++){
		changing_max = changing_max + a[i];
		//IF ALL THE ELEMENTS IN THE ARRAY ARE NEGATIVE.
		if(a[i] > maxelement){
			maxelement = a[i];
		}
		if(changing_max < 0){
			changing_max = 0;
		}
		else if(max_so_far < changing_max){
			max_so_far = changing_max;
		}
	}
	if(max_so_far == 0){
		max_so_far = maxelement;
	}
	cout<<"Max Sub Array Sum:"<<max_so_far<<endl;

}