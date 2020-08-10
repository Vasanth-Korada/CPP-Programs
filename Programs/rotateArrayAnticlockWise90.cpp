#include<iostream>
using namespace std;

void rotateArray(int a[1000][1000],int n){
    int rows = n;
    int cols = n;

    for(int i = cols-1;i>=0;i--){
        for(int j = 0;j<rows;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int a[1000][1000];
    int n;
    cin >> n;
    

    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout << a[i][j];
        }
    }
    

	
    rotateArray(a,n);
    return 0;
}