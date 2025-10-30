// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int numbers[] = {1,20,5,6,-1,28,-9};
    int i=0;
    while(i<7){
        int j = i+1;
        int key= numbers[j];
        while(key<numbers[i] && i>=0 ){
            numbers[i+1] = numbers[i];
            i--;
        }
        numbers[i+1] = key;
        i++;
    }
    
    int k = 0;
     while(k<7){
        cout<<numbers[k]<<endl;
        k++;
    }
    return 0;
}



