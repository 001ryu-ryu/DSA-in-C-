#include <climits>
#include <iostream>
using namespace std;

int sumInArray(int arr[], int sz) {
    cout<<"To calculate sum and product of all numbers in an array"<<endl;
    int sum = 0;
    for(int i = 0; i < sz; i++) {
        sum += arr[i];
    }
    return sum;
}

void swapMaxMin(int arr[], int sz) {
    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    for(int i = 0; i < sz; i++) {
        minNum = min(minNum, arr[i]);
        maxNum = max(maxNum, arr[i]);
    }

    std::swap(minNum, maxNum);

    
}

void uniqueValues(int arr[], int sz) {
    int newArr[sz];
    for (int i = 0; i < sz; i++) {
        for (int j = i+1; j < sz; j++) {
            if (arr[i] != arr[j]) {
                newArr[i] = arr[i];
            }
        }
    }
}

int main() {

    int arr[] = {5, 6, 7, 8, 10, 1};
    int arr1[] = {1, 2, 3, 45, 98, 10};

    cout<<sumInArray(arr, 6)<<endl;

    swapMaxMin(arr1, 5);

    return 0;
}