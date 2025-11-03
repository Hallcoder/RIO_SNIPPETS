#include<iostream>
using namespace std;
int countedPaths;
vector<vector<int>> visited;
void initialize(int n, int m) {
    visited = vector<vector<int>>(n, vector<int>(m, 0));
    cout << "DONE" << endl;
}
bool allVisited(int n, int m){
    bool visitedBool = true;
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            if(visited[i][j] == 0) visitedBool = false;
        }
    }
    return visitedBool;
}
void print(vector<vector<int>> vi, int n, int m){
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<"element at:["<<i<<"]["<<j<<"]:"<<vi[i][j]<<"\n";
        }
    }
}
void traverse(int r, int c, int n, int m){
    cout<<"["<<r<<"]["<<c<<"] =>";
    if(r < 0 || c < 0 || r > n-1 || c > m-1){
        cout<<"Out of bounds"<<"\n";
        return;
    }
    if(visited[r][c] == 1) {
        cout<<"Visited already!"<<"\n";
        return;
    };

    visited[r][c] = 1;
    if(r == n-1 && c == m-1){
        if(allVisited(n,m)) {
            cout<<"Path found! :)"<<"\n";
            countedPaths++;
        };
        visited[r][c] = 0;
        return;
    }
   
    //move down
    traverse(r+1,c,n,m);
    //move up
    traverse(r-1,c,n,m);
    //right
    traverse(r,c+1,n,m);
    //left
    traverse(r,c-1,n,m);

    visited[r][c] = 0;
}
int main(){
    int n, m;
    cout<<"Enter n and m:"<<"\n";
    cin>>n>>m;
    initialize(n,m);
    print(visited,n,m);
    traverse(0,0,n, m);
    print(visited,n,m);
    cout<<"Number of paths:"<<countedPaths<<"\n";
    return 0;
}