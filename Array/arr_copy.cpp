#include <iostream>
using namespace std;

// Function to insert an element
void insertElement(int arr[], int &size, int element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }

    arr[position] = element;
    size++;
    cout << "Element inserted successfully.\n";
}

// Function to delete an element
void deleteElement(int arr[], int &size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }

    size--;
    cout << "Element deleted successfully.\n";
}

// Function to display the array
void displayArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100]; // static allocation of maximum size
    int size;

    cout << "Enter initial size of array: ";
    cin >> size;

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    displayArray(arr, size);

    // Insertion
    int insertVal, insertPos;
    cout << "\nEnter element to insert: ";
    cin >> insertVal;
    cout << "Enter position to insert (0 to " << size << "): ";
    cin >> insertPos;
    insertElement(arr, size, insertVal, insertPos);
    displayArray(arr, size);

    // Deletion
    int deletePos;
    cout << "\nEnter position to delete (0 to " << size - 1 << "): ";
    cin >> deletePos;
    deleteElement(arr, size, deletePos);
    displayArray(arr, size);

    return 0;
}

