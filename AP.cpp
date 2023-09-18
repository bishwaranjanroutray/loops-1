// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the value of n: ";
    int n;
    cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=3;
    }
}