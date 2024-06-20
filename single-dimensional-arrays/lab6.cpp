#include <iostream>
#include<cmath>
#include <cctype>
#include <cstring>
#define MAX_SIZE 20
using namespace std;
int findMin(int arr[], int size) {
    int i = 0;
    int min = 0;
    for(i = 0; i < size; i++){
        if(arr[i] < arr[min])
        {
            min = i;
        }

    }
    return arr[min];
}
int findMax(int arr[], int size) {
    int i = 0;
    int max = 0;
    for(i = 0; i < size; i++){
        if(arr[i] > arr[max])
        {
            max = i;
        }

    }
    return arr[max];
}
double findSum(int arr[], int size) {
    int i = 0;
    int sum = 0;
    for(i = 0; i < size; i++) {
        sum += arr[i];

    }
    return sum;
}
double findAverage(int arr[], int size) {
    double sum = findSum(arr, size);
    return sum / size;
}
/*
void removeDuplicates(int arr[], int size, int &newSize) {
    newSize = size;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                int temp = arr[size - 1];
                arr[size - 1] = arr[j];
                arr[j] = temp;
                newSize --;
                i--;
            }
        }

} } */
void removeDuplicateElements(int arr[], int size) {
    int newSize = 0;
    int newArray[MAX_SIZE];
    bool duplicate = false;

    for(int i = 0; i < size; i++) {
        duplicate = false;
        for(int j = 0; j < newSize; j++) {
            if(arr[i] == newArray[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            newArray[newSize] = arr[i];
            newSize++;
        }
    }

    for(int i = 0; i < newSize; i++) {
        arr[i] = newArray[i];
    }

    for(int i = newSize; i < size; i++) {
        arr[i] = 0;
    }
}
int linearSearch(int arr[], int size, int key) {
    int i = 0;
    for(i = 0; i < size; i++) {
        if(key == arr[i]) {
            return i;
        }
    }
    return -1;
}
int middleElement(int arr[], int size){
    int low = 0;
    int high = size - 1;
    return low + (high - low) / 2;
}
void reverseArray(int arr[], int size) {
    int newArray[MAX_SIZE];
    int new_size = 0;
    int i = 0, j = 0;
    for(i = size - 1; i >= 0; i--) {
        newArray[j] = arr[i];
        j++;
    }
    for (i = 0; i < size; i++) {
        cout << newArray[i];

    }

}
int longestIncreasingSubarray(int arr[], int size) {
    int currentLength = 1;
    int maxLength = 1;
    if(size == 0){
        return 0;
    }
    int i = 0;
    for(i = 1; i < size; i++){
        if(arr[i] > arr[i - 1]) {
            currentLength++;

        }
        else {
            maxLength = currentLength;
            currentLength = 1;

        }

    }
    maxLength = max(maxLength, currentLength);
    return maxLength;

}
int firstPeakElement(int arr[], int size) {
    int i = 0;
    for(i = 1; i < size - 1; i++){
        if(arr[i] >= arr[i - 1] && arr[i] >= arr[i+1])
        {
            return arr[i];
        }

    }
    return -1;


}
void removeEven(int arr[], int size) {
    int newArray[MAX_SIZE];
    int i = 0, j = 0;
    int newSize = 0;
    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 1) {
            newArray[j] = arr[i];
            j++;
            newSize ++;

        }
    }
    for(int k = 0; k < newSize; k++) {
        cout << newArray[k];
    }


}
int findEquilibriumElement(int arr[], int size) {
    int totalSum = 0;
    int leftSum = 0;
    for (int i = 0; i < size; ++i) {
        totalSum += arr[i];
    }
    for (int i = 0; i < size; ++i) {
        totalSum -= arr[i];
        if (leftSum == totalSum) {
            return i;
        }
        leftSum += arr[i];
    }


    return -1;
}
bool palindrome(int arr[], int size) {
    int i = 0, j = 0;
    bool isSame = false;
    int newArray[MAX_SIZE];
    int new_size = 0;
    for(i = size - 1; i >= 0; i--) {
        newArray[j] = arr[i];
        j++;
    }

    for(i = 0; i < size; i++){
        if(arr[i] == newArray[i]) {
            isSame = true;
        }
        else {
            isSame = false;
            break;
        }
    }
    return isSame;

}
int largestSubarraySumAtLeastK(int arr[], int n, int k) {
    int maxLength = 0;
    for (int start = 0; start < n; ++start) {
        int currentSum = 0;
        for (int end = start; end < n; ++end) {
            currentSum += arr[end];
            if (currentSum >= k && (end - start + 1) > maxLength) {
                maxLength = end - start + 1;
            }
        }
    }
    return maxLength;
}
void updateArray(int arr[], int n) {
    if (n <= 1) {
        return;
    }

    arr[0] *= arr[1];
    for (int i = 1; i < n - 1; ++i) {
        arr[i] *= arr[i - 1] * arr[i + 1];
    }
    arr[n - 1] *= arr[n - 2];
}
int stringLength( char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toupper(str[i]);
    }
}

void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}
void replaceChar(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}
void removeVowels(char text[]) {
    int j = 0;
    for (int i = 0; text[i] != '\0'; ++i) {
        if (text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u' &&
            text[i] != 'A' && text[i] != 'E' && text[i] != 'I' && text[i] != 'O' && text[i] != 'U') {
            text[j] = text[i];
            ++j;
        }
    }
}
void caesarCipher(char text[], int shift) {
    char upperAlphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowerAlphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; text[i] != '\0'; ++i) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            int index = text[i] - 'A';
            text[i] = upperAlphabet[(index + shift) % 26];
        }
        else if (text[i] >= 'a' && text[i] <= 'z') {
            int index = text[i] - 'a';
            text[i] = lowerAlphabet[(index + shift) % 26];
        }
    }
}
int main() {
    /*
    int myArray[] = {1, 2, 3, 3, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    removeDuplicates(myArray, size);

    for (int i = 0; i < size; ++i) {
        if (myArray[i] != 0) {
            std::cout << myArray[i] << " ";
        }
    }
    std::cout << std::endl;
    int myArray[] = {2, 2, 1, 3, 3, 4, 5, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int newSize = 0;
    removeDuplicates(myArray, size, newSize);
    int i = 0;
    for(i = 0; i < newSize; i++) {
        cout << myArray[i] << ",";
    }
*/
    // Task 1
    int myArray[] = {2, 2, 1, 3, 3, 4, 5, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int i = 0;
    for(i = 0; i < size; i++) {
        cout << "Value at index " << i <<" is "<<myArray[i];
    }
    // Task 2
    int array_size = 0;
    cin >> array_size;
    int arr[array_size];
    int j = 0;
    for(j = 0; j < array_size; j++) {
        cin >> arr[j];
    }

    return 0;
}



