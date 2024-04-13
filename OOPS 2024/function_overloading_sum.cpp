#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum(int x, int y, int z){
    return x+y+z;
}

int main(){
    int p,q,r,s;

    cout<<"Enter two Numbers :";
    cin>>p>>q;
    cout<<sum(p,q)<<endl;

    cout<<"Enter three Numbers :";
    cin>>q>>r>>s;
    cout<<sum(q,r,s)<<endl;

}