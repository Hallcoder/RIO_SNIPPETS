#include<iostream>
using namespace std;
#include <set>
int main(){
    string username;
    cin>>username;
    set<char> unique;
    for(int i=0;i<username.size();i++){
        unique.insert(username.at(i));
    }
    cout<<(unique.size() % 2 == 0 ? "CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}