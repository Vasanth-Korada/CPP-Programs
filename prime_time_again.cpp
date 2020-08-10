#include<iostream>
using namespace std;

//Function Prottype declaration
bool checkPrimeTimeAgain(int n);

int main(){
	//Taking Input
	int no_of_hours_day,no_of_parts,n; 
	cin >> no_of_hours_day >> no_of_parts;

	//Calculating h
	int h;
	h = no_of_hours_day / no_of_parts;
	n = h;

	//Equvivalent Prime Number
	int equvi_prime_number = 0;

	//Calculation Brain Part using While Loop
	while(n > 1){
		int iter_var = 0;
		int helper = 0;
		while(true){
			if(checkPrimeTimeAgain((iter_var*h)+n) && ((iter_var*h)+n) <= no_of_hours_day){
				helper = helper + 1;
			}
			if(iter_var == (no_of_parts-1))
				break;
			iter_var = iter_var + 1;
		}
		if(helper == no_of_parts){
			equvi_prime_number = equvi_prime_number + 1;
		}
		n = n - 1;
	}
	cout << equvi_prime_number ;
	return 0;
}


//Function declaration
bool checkPrimeTimeAgain(int n){
	if(n<=1){
		return false;
	}
	if(n<=3){
		return true;
	}
	else{
		for(int z=3; z < n;z++){
			if(n%z == 0){
				return false;
			}
		}
		return true;
	}
}
