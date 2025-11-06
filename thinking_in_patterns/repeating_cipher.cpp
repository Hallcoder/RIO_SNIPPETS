#include<iostream>
using namespace std;

int main(){
    int size,j=1;
    string text;
    cin>>size;
    cin>>text;
    for(int i=0;i<size;i+=j){
        cout<<text.at(i);
        j++;
    }
    return 0;
}