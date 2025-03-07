#include<iostream>
#include<limits.h>
using namespace std;

void printMiniVal(int arr[], int n, int i, int& mini){
    // Base Condition
    if(i>=n){
        return;
    }
    // 1 case solve karma hai
    if(arr[i]<mini){
        mini=arr[i];
    }

    // Baki recursion dekh leyga
    printMiniVal(arr, n, i+1, mini);
}
int main(){
    int arr[]={40, 5, 80, 10, 15, 20, 34};
    int n=7;
    int i=0;
    int mini=INT_MAX;
    printMiniVal(arr, n, i, mini);
    cout<<"Minimum value is: "<<mini<<endl;
return 0;
}