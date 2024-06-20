//#3: Write a function that accepts 2 arguments (passed by reference). The function should change the initial value of variables to new values. Function is a void function.
#include <iostream>

using namespace std;
void test(int*, int*);

int main() {
	int a = 5, b = 5;
	cout << "Before changing:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	test(&a, &b);

	cout << "\nAfter changing" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}

void test(int* n1, int* n2) {
	*n1 = 10;
	*n2 = 11;
}

//4: Write C++ program to reverse string using pointers. 
#include <iostream>

void reverseString(char* str) {

    char* start = str;
    char* end = str;

    while (*end != '\0')
        end++;

    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, world!";
    std::cout << "Original string: " << str << std::endl;

    reverseString(str);
    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}

//#7: Write a function that finds the maximum and minimum values in an array using pointers.
#include <iostream>

void findMinMax(int* arr, int size, int* max, int* min) {
    if (arr == nullptr || size == 0)
        return;

    *max = *arr;  
    *min = *arr;  

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max)
            *max = *(arr + i);
        if (*(arr + i) < *min)
            *min = *(arr + i);
    }
}

int main() {
    int arr[] = {9, 4, 2, 7, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxVal, minVal;
    findMinMax(arr, size, &maxVal, &minVal);

    std::cout << "Maximum value: " << maxVal << std::endl;
    std::cout << "Minimum value: " << minVal << std::endl;

    return 0;
}

//#8: Write a function that swaps the values of two variables using pointers.

#include <iostream>

void swapIntegers(int* a, int* b) {
    if (a == nullptr || b == nullptr)
        return;

    int temp = *a;  
    *a = *b;       
    *b = temp;   
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    swapIntegers(&x, &y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}
//#9: Write C++ program (using functions) to sort values in an array.
#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;

    bubbleSort(arr, size);

    std::cout << "Array after sorting: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}

//10. Write program (using functions) to find factorial of numbers in array using pointers.
#include <iostream>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

void findFactorial(int* arr, int size, int* result) {
    for (int i = 0; i < size; ++i) {
        *(result + i) = factorial(*(arr + i));
    }
}

int main() {
    int arr[] = {5, 3, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* result = new int[size];

    findFactorial(arr, size, result);

    std::cout << "Factorials of numbers in the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << "! = " << result[i] << std::endl;
    }

    delete[] result;

    return 0;
}
