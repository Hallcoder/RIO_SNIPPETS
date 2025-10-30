#include <iostream>
using namespace std;
int main() {
    int numbers[] = {1,20,5,6,-1,28,-9};
    for(int i=0;i<7;i++){
        for(int j=0;j<6;j++){
            if(numbers[j]>numbers[j+1]){
                swap(numbers[j], numbers[j+1]);
            }
        }
    }
    int k = 0;
     while(k<7){
        cout<<numbers[k]<<endl;
        k++;
    }
    return 0;
}




