#include<iostream>
#include <cmath>
using namespace std;
vector<int> subset;
void search(int k, int n) {
   
    if (k == n) {
        cout<<"{";
        for(int i=0;i<subset.size();i++){
            cout<<subset.at(i)<<",";
        }
        cout<<"}"<<"\n";
    } else {
    cout<<"searching:"<<k<<"\n";
    search(k+1,n);
    subset.push_back(k);
    search(k+1,n);
    subset.pop_back();
    }
    }

int main(){
    int n;
    cout<<"Enter the size of the set\n";
    cin>>n;
    cout<<"Number of subsets"<<pow(2,n)<<"\n";
    //using binary representation
    for(int i=0; i<pow(2,n);i++){
        string bitrep = bitset<4>(i).to_string();
        cout<<bitrep<<endl;
        cout<<"{";
        for(int i=bitrep.size()-1;i>=0;i--){
            if(bitrep.at(i) == '1'){
                cout<<i-1<< ",";
            }
        }
        cout<<"}"<<endl;
    }
    return 0;
}