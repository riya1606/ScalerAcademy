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
        int count=i;
        while(count<=(2*i)-1){
            cout<<count<<" ";
            count++;
        }
        int count_new=(2*i)-2;
        while(count_new>=i){
            cout<<count_new<<" ";
            count_new--;
        }

        cout<<endl;
        i++;
    }
}