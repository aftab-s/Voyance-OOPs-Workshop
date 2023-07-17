#include<iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 2;
    int temp = 0;

    cout<<"Before Swapping"<<endl;
    cout<<"A = "<<a<<" | B = "<<b;
    
    cout<<'\n';

    temp = a;
    a = b;
    b = temp;

    cout<<"After Swapping"<<endl;
    cout<<"A = "<<a<<" | B = "<<b;
}