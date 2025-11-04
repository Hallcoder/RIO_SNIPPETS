#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;

int main(){
    string sum;
    vector<int> vi;
    cin>>sum;
    for(int i=0;i<sum.size();i++){
        if(i%2 == 0) vi.push_back(sum.at(i) - '0');
    }
    sort(vi.begin(),vi.end());
    for(int i=0;i<vi.size();i++){
        if(i+1 != vi.size()) {cout<<vi.at(i)<<"+";continue;};
        cout<<vi.at(i);
    }
    return 0;
}   