#include <iostream>

using namespace std;

void getArray(int arr[], int size);

int getLargest(int arr[], int size);

int main()
{
    cout << " Hello, Traveler. I can find the largest number from a set of 5."<<endl;
    constexpr int size = 5;
    int arr[size];
    getArray(arr, size);
    cout << "Thank you!" << endl;
    int largest = getLargest(arr, size);
    cout << "The largest number in the set is " << largest << endl;



}

void getArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << "Please enter a number: ";
        int num;
        cin >> num;
        arr[i] = num;
    
    }
}
int getLargest(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; i++) {

        if (arr[i] > largest) {
            largest = arr[i];
        }

    }
    return largest;
}