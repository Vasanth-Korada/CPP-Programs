#include<iostream>

using namespace std;

int binary_search(int a[],int start, int end,int key,int n){
    if(end>=start){
    int mid = (start + end)/2;
    if(a[mid] == key){
        return(1);
    }
    if(a[mid] < key){
        return binary_search(a,mid+1,end,key,n);
    }
    if(key < a[mid]){
        return binary_search(a,start,mid-1,key,n);
    }
    }
return(-1);
}


int main(){
    int n,key,i;
    int a[1000];
    cout<<"Enter n:"<<endl;
    cin >> n;
    cout<<"Enter Array elements:";
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cout<<"Enter Key:";
    cin>>key;
    int res = binary_search(a,0,n-1,key,n);
    if(res == -1){
        cout<<"Element Not Found";
    }
    else{
        cout<<"Element Found!";
    }
    return 0;

}
