/*Using C++ dynamic memory allocation implements a dynamic array
 * that expands and shrinks depending on the number of records in the array.
 * Once the array is full it should double its size, and once it is ¼ of its
 * capacity it should cut the size in half.
It is necessary to implement following methods:*/

#include <iostream>
#include <cstring>
using namespace std;

/*allocates size of the records for dynamic array
 * and returns pointer to that location*/
int* init(int size){
    int * array= new int[size];
    return array;
}

/*append element to the end of the array and returns pointer to the memory location of the array.
 * In case of array expansion, this location should change.*/
//If array is full, the double the size
//This count will also be used for indexing
int* add(int *p, int &count, int &size, int element){
    if(count == size){
        //if the current array is full, then create a new array which is twice
        // its size,copy everything from it there, and delete the previous array

        size = size*2;
        int* newArray = new int[size];
        //create new array and give it new double size

        //now, we will use built-in memcpy function to copy everything from older to the newer array
        //memcpy accepts three parameters, where are we copying(destination), what are we copying (source), and how much we are copying, that is the size of what we are copying
        memcpy(newArray, p, count * sizeof(int));
        //for size, we put the number of elements that we had so far

        delete[] p;
        //deleting old array

        p = newArray;
        //pointer now points to the new array
    }
    p[count] = element;
    //placing element at the right position
    count++;
    //incrementing counter for general number of elements

    return p;
}

/*implements method that deletes an element from the del_index location in the array.
 * The order of the elements after deletion is not important.
 * Implement version that also takes care about order of elements in the array.*/
//If the array is only 1/4 full, cut down it half in size
int* del_el(int *p, int &count, int &size, int del_index){
    if (del_index < 0 || del_index >= count) return p;
    //if the del_index is out of the bound, just return the pointer
    for (int i = del_index; i < count - 1; i++) {
        p[i] = p[i + 1];
    }
    //here, we care about the order so we're just switching elements to one position left
    //with this decremental loop, we put condition, i < count - 1 meaning that we will shift items to the left
    //until we reach the last index, there we don't touch anything
    //meaning that on indexes count-2 and count - 1 (last element) we will have same elements

    count--;
    //when we decrement the counter, we are decrementing array size as well, and then that last duplicated item gets lost

    if (count == size / 4) {
        // if the array is full only 1/4 of its full capacity, then half it down
        size /= 2;
        int* newArray = new int[size];
        memcpy(newArray, p, count * sizeof(int));
        delete[] p;
        p = newArray;
        //repeat the same steps for creating a new array as in add function
    }
    return p;

}
//release the memory used by the array
void dealloc(int *p){
    delete[] p;
}

int main(){
    int size = 3;
    //creating an array by calling init function
    int* arrPointer = init(size);
    //save the returned pointer the location of the first item in variable arrPointer

    int count = 0;
    //This will be used to keep track of the number of elements and array size so we know whether to expand or shrink the array

    arrPointer = add(arrPointer, count, size, 5);
    arrPointer = add(arrPointer, count, size, 10);
    arrPointer = add(arrPointer, count, size, 15);
    arrPointer = add(arrPointer, count, size, 20);

    // Deleting an element
    arrPointer = del_el(arrPointer, count, size, 0);
    cout << arrPointer << endl;

    // Deallocate array
    dealloc(arrPointer);
    return 0;

}

//Delete function where the order is not important
int* del_el2(int *p, int &count, int &size, int del_index){
    if (del_index < 0 || del_index >= count) return p;
    //if the del_index is out of the bound, just return the pointer

    p[del_index] = p[count-1];

    //since, here we don't care about the order we will just take the last item
    // and copy it on the place of the item that we want to delete

    count--;
    //when we decrement the counter,
    // we're losing the last item that got duplicated at the position of the item that we actually wanted to delete
    if (count == size / 4) {
        // if the array is full only 1/4 of its full capacity
        size /= 2;
        //then half it down
        int* newArray = new int[size];
        memcpy(newArray, p, count * sizeof(int));
        delete[] p;
        p = newArray;
        //repeat the same steps for creating a new array as in add function
    }
    return p;

}