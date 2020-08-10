#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
	return a>=b;
}
int main(){
	int arr[10] = {1,2,5,10,20,50,100,200,500,2000};
	int money;
	int size = sizeof(arr)/sizeof(int);
	cout<<"Enter money:";
	cin >> money;	
	int counter;
	while(money>0){
		auto it = upper_bound(arr,arr+size,money);
		int index = it - arr -1;
		cout << arr[index]<<endl;
		counter = counter +1;
		money = money - arr[index];
	}
	return 0;
}