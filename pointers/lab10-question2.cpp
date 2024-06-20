//#2: Add all values from array using pointers.
#include <iostream>
using namespace std;
int main() {
	int *ip;
	int arr[] = { 10, 34, 13, 76, 5, 46 };
	ip = arr;
	int sum=0;
	
	for (int x = 0; x < 6; x++) {
		sum+=*ip;
		ip++;
	}
	
	cout<<sum;
	return 0;
}
