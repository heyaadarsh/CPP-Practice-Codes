#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int array[5] = {1,2,3,4,5};
    printArray(array, 5);
}