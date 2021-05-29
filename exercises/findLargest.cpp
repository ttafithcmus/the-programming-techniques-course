// An exercise in Chapter 11: Pointers

#include <iostream>
using namespace std;

int *findLargest(int [], int);

int *findLargest(int a[], int n){
    int *largestEle = &a[0];

    for (int i=0; i<n; i++){
        if (*largestEle < a[i]){
            largestEle = &a[i];
        }
    }

    return largestEle;
}

int main(){

    int a[5] = {8,1,600,10,9};
    int n=5;

    int *lg = findLargest(a, n);
    cout << *lg << endl;

    return 0;
}