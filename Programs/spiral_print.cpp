#include<iostream>

using namespace std;


void spiralPattern(int a[10][10],int m,int n){
	int startRow = 0;
	int startCol = 0;
	int endRow = m-1;
	int endCol = n-1;

	while(startRow<=endRow && startCol<=endCol){
		for(int i=startCol;i<=endCol;i++){
			cout<<a[startRow][i]<<" ";
		}
		startRow++;

		for(int i = startRow;i<=endRow;i++){
			cout<<a[i][endCol]<<" ";
		}
		endCol--;
		if(endRow>startRow){
		for(int i = endCol;i>=startCol;i--){
			cout<<a[endRow][i]<<" ";
		}
		endRow--;
	}
	if(endCol>startCol){
		for(int i=endRow;i>=startRow;i--){
			cout<<a[i][startCol]<<" ";
		}
		startCol++;
	}
	}

}

int main(){
	int m,n;
	int a[10][10];
	cin >> m >> n;

	int val = 1;
	for(int i = 0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j] = val;
			val ++;
		}
	}

	for(int i=0;i<m;i++){
		for(int j = 0 ;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	spiralPattern(a,m,n);

	return 0;
}