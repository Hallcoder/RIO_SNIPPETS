#include <ios>
#include<iostream>
using namespace std;
#include <iomanip> 
int main (){
    double n,m,a,b;
    cin>>n>>m;
    double smallest=1e18f;
    double divisor;
    while(n > 0){
        cin>>a>>b;
        if(a/b < smallest) {
            smallest = a/b;
    };
        n--;
    }
    cout<<endl<<m<<endl<<divisor<<endl;
    cout<<fixed<<setprecision(8)<<m*smallest;
    return 0;
}