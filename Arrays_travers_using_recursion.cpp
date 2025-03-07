#include<iostream>
using namespace std;

void printArray(int arr[], int n, int i){
    // Base condition
    if(i>=n){
        return;
    }

    // 1 case solve kardiya 
    cout<<arr[i]<<" ";

    // Baki recursion shambhal leyga
    printArray(arr, n, ++i);

}
int main(){
    int arr[5]={10, 20, 30, 40, 50};
    int i=0;
    int n=5;

    printArray(arr, n, i);
return 0;
}