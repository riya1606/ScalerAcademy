#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t=n;
    vector<int> v;
    while(t>0){
        if(t%2==0){
            v.push_back(0);
        }
        else{
            v.push_back(1);
        }
    t=t/2;
    }
    int x=v.size();
    for(int i=x-1;i>=0;i--){
        cout<<v[i];
    }
}