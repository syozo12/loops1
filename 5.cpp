#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=3;
    int r=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a*=r;
    }

}