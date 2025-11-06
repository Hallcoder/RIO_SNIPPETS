#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double n;
    cin>>n;
    long double x = pow(10,n * log10(5.0));
    cout<<x<<endl;
    cout<<fmod(x,100.0);
    return 0;
}