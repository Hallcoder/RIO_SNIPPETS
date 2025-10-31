#include<iostream>
using namespace std;
int countedPaths;

void traverse(int r, int c,int n, int m){
    if(r>=n || c >= m) return;
    if(r == n-1 && c == m-1){
        countedPaths++;
        return;
    }
    //go right
    traverse(r,c+1,n,m);
    //go down
    traverse(r+1,c,n,m);
}

int main(){
    int n, m;
    cout<<"Enter n and m:"<<"\n";
    cin>>n;
    cin>>m;
    cout<<n<<","<<m<<"\n";
    traverse(0,0,n,m);
    cout<<"Total counted paths:"<<countedPaths<<"\n";
    return 0;
}