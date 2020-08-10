#include<iostream>

using namespace std;

void swap(int *xp,int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(){
    int arr[100] = {0};
    int n;

    cout<<"Enter n:";
    cin >> n;

    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i = 0;i<=n-2;i++){
        int min_index = i;
        for(int j = i+1 ; j<= n - 1; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(&arr[min_index],&arr[i]);
    }

    for(int i =0 ;i <n;i++){
        cout<<arr[i]<<" ";
    }


}