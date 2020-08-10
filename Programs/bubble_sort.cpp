#include<iostream>

using namespace std;

void swap(int *xp,int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(){
    int arr[10],n;
    cout<<"Enter n:";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i =0; i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}