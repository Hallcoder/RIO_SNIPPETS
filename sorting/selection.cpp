#include <iostream>
using namespace std;
void print(int numbers[],int size){
    int i = 0;
    while(i<7){
        cout<<numbers[i]<<endl;
        i++;
    }
}

int main() {
    int numbers[] = {1,20,5,6,-1,28,0};
    for(int i=0; i < 6;i++){
        for(int j=i+1;j<=6;j++){
            if(numbers[j] < numbers[i]){
                swap(numbers[j],numbers[i]);
                print(numbers,7);
            }
        }
    }
    print(numbers,7);
    return 0;
}



