#include<iostream>
#include<cstring>

using namespace std;

void removeDuplicates(char a[]){
	int n = strlen(a);
	int i = 0;
	int j = i+1;
	if(n == 1 || n==0){
		return;
	}
	while(j<n){
		if(a[i] == a[j]){
			j++;
		}
		else if(a[i] != a[j]){
			a[i+1] = a[j];
			i++;
			j++;
		}
	}
	a[i+1] = '\0';
	cout<<"The String is:"<<a<<endl;

}


int main(){
	char a[100];
	cout<<"Enter the String:";
	cin.getline(a,100);
	removeDuplicates(a);

return 0;
}