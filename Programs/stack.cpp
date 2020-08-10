#include<iostream>
#include<stack>

using namespace std;

template<typename T>

void buildStack(stack<T> s){
	while(s.empty() == false){
		cout<<s.top()<<endl;
	}
}

int main(){
	stack<int> s;
	int size;
	cout<<"Enter Stack Size:"<<endl;
	cin >> size;
	cout<<"Enter elements into the stack:"<<endl;
	for(int i = 0; i < size ; i++){
		int ele;
		cin >> ele;
		s.push(ele);
	}
	buildStack(s);  
	return 0;
}