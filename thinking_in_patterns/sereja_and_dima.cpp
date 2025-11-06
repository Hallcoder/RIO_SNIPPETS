#include <algorithm>
#include<iostream>
using namespace std;

int main(){
    int n,x;
    vector<int> vi;
    cin>>n;
    while(n>0){
        cin>>x;
        vi.push_back(x);
        n--;
    }
    int s=0,d=0;
    for(int i=0,k=0,j=vi.size()-1;i<vi.size();i++){
       if(i%2==0) {
        int maxn = max(vi.at(k),vi.at(j));
        if(vi.at(k)>vi.at(j)){
            k++;
        }else{
            j--;
        }
        s += maxn;
       }else{
        int maxn = max(vi.at(k),vi.at(j));
        if(vi.at(k)>vi.at(j)){
            k++;
        }else{
            j--;
        }
        d += maxn;
       }
    }
    cout<<s<<" "<<d;
}