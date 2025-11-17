#include <bits/stdc++.h>
using namespace std;

int main() {
    int i=5; 
    int * ptr = &i;

    int * * ptr2= &ptr;

    // cout << "value at i: " << i<< endl;


    // cout << "address of i: " << &i<< endl;
    // cout << "address of i: " << ptr<< endl;

    // cout << "value of ptr pointing to: " << *ptr<< endl;


    cout<< "address of ptr2 pointing to: " << ptr2 << endl;
    cout << "address of ptr: " << ptr << endl;
    cout << "address of ptr: " << &ptr << endl;

    cout <<"value at ptr2 pointing to: " << **ptr2 << endl;
    cout <<"value at ptr: " << *ptr << endl;


    return 0;


}
