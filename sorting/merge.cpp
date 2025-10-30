#include <iostream>
using namespace std;
void merge(int numbers[],int s, int mid, int e){
    
}
void sort(int numbers[],int s, int e){
    if(s<e){
        int mid = (s+e)/2;
        sort(numbers,s,mid);
        sort(numbers,mid+1,e);
        merge(numbers,s,mid,e);
    }
}


int main(){
    int numbers[] = {1,20,5,6,-1,28,-9};

}