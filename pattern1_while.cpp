#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int cnt=1;
        while(cnt<=n-i){
            cout<<"  ";
            cnt++;
        }
        int j=1;
        while(j<=(2*i)-1){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}