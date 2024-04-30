#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int power=1;
    int add = 0;
    while(n>0){
        int rem = n%10;
        add += rem*power;
        power*=2;
        n/=10;
    }
    cout<<add<<endl;
}