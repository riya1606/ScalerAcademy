#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j<=2*i-1;j++){
            cout<<j<<" ";
        }
        if(2*i-2>0){
        for(int j=(2*i)-2;j>=i;j--){
            cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}