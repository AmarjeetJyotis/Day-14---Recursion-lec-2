#include<iostream>
using namespace std;
int climbStairs(int n){
    if(n==0 || n==1){
        return 1;
    }
    return climbStairs(n-1)+climbStairs(n-2);
}
int main(){
    int n;
    cout<<"Enter value of n: "<<endl;
    cin>>n;

    int ans=climbStairs(n);
    cout<<"Number of steps is: "<<ans<<endl;
return 0;
}