#include <iostream>


using namespace std;

void PrintAllPairs(int a[], int n){
    for(int i=0;i <n ;i++){
        for (int j=0;j<n;j++){ // j=i+1 for no repeat pairs
            cout<<a[i]<<","<<a[j]<<endl;
        }
    }

}

int main(){

int arr[]= { 1,2,3,4,5,6};
int sz= sizeof(arr)/sizeof(arr[0]);
for(int x: arr ){
    cout<<x<<endl;
}
cout<<"Print all possible pairs:"<<endl;
PrintAllPairs(arr,sz);

    return 0;
}

