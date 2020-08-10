#include <iostream>
using namespace std;

int f(int n){
	return (n < 3) ? n - 1 : f(n-1) + f(n-2);
}

int main() {
	int res = f(5);
	cout << res <<endl;
	return 0;
}

