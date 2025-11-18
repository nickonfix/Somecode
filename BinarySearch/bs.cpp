#include <iostream> 

using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 7;
    int low = 0;
    int high = size - 1;
    int mid = (low + high)/2;
    while(low <= high){
        if(arr[mid] == key){
            cout<<"Element found at index: "<<mid<<endl;
        }
    }
    return 0;       
}