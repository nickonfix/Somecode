#include <bits/stdc++.h> 
using namespace std;

int main(){
       int arr[] = {1,2,3,4,5,6,7,8,9,10};
       int size = sizeof(arr)/sizeof(arr[0]);
       int key = 7;
       int s= 0;
       int e = size - 1; 
       int mid = s + (e - s) / 2;
       while(s <= e){
           if(arr[mid] == key){
               cout<<"Element found at index: "<<mid<<endl;
               break;
           }
           else if (arr[mid] < key){
            s = mid + 1;
           }
           else{
                e = mid - 1;
           }
           
           mid = s + (e - s) / 2;
       }
       return 0;
}