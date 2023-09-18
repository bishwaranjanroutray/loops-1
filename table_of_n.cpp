#include<iostream>
using namespace std;

int main(){
    cout<<"enter the value of n: ";
    int n;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<"x"<<i<<"="<<i*n<<endl;
    }
}