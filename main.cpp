#include <iostream>

using namespace std;

int main() {
    
    // 1) How to copy memory that you've allocated? (How to copy an array / Change this copy?)

    int size;
    cout << "\n\nEnter the size that you want your array to be: ";
    cin >> size;

    int* temperatureHighs = new int[size]; // new means you're allocating memory, and you have to use a pointer

    for (int i = 0; i < size; i++) {
        cout << "\n\nEnter the highest temperature for the day with index " << i << ": ";
        cin >> temperatureHighs[i];
    }

    // run a simulation of what will happen with those temperature highs...
    // run a what-if simulation, "what if those temperature highs were different?"
    
    // make space for the copy
    int* copyOfTemperatureHighs = new int[size];
    // copy
    for (int i = 0; i < size; i++) {
        copyOfTemperatureHighs[i] = temperatureHighs[i]; // copy each value from the original
        // copyOfTemperatureHighs += 10; // add 10 to each element of the copy
    }

    // 2) How to extend an array that you've already allocated? (Change array size without stopping the program)
    // create a copy that is larger than the original
    // copy original values into new array

    int extendNumber;
    cout << "\n\nHow much do you want to extend your array by? ";
    cin >> extendNumber;

    int* extendedTemperatureHighs = new int[size + extendNumber];
    
    for (int i = 0; i < size; i++) {
        extendedTemperatureHighs[i] = temperatureHighs[i]; // copy each value from the original
    }

    for (int i = size; i < size + extendNumber; i++) {
        cout << "\n\nEnter the highest temperature for the day with index " << i << ": ";
        cin >> extendedTemperatureHighs[i];
    }

    // print out all three arrays

    for (int i = 0; i < size; i++) {
        cout << "\n\nThe value at index " << i << " for the original array is: " << temperatureHighs[i];
        cout << "\n\nThe value at index " << i << " for the copied array is: " << copyOfTemperatureHighs[i];
        cout << "\n\nThe value at index " << i << " for the extended array is: " << extendedTemperatureHighs[i];
    }
    
    // print out remaining values of extendedTemperatureHighs
    for (int i = size; i < size + extendNumber; i++) {
        cout << "\n\nThe value at index " << i << " for the extended array is: " << extendedTemperatureHighs[i];
    }


    // free up memory
    delete[] temperatureHighs; // delete temperatureHighs will only delete the first value of the array since the pointer points to the first value's memory address
    delete[] copyOfTemperatureHighs;
    delete[] extendedTemperatureHighs;

    temperatureHighs = nullptr;
    copyOfTemperatureHighs = nullptr;
    extendedTemperatureHighs = nullptr;

    return 0;
}