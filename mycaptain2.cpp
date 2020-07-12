#include <iostream>
using namespace std;
int main(){
	
	// define an array named "arr" which can stores "5 elements" in it
	int arr[5];
	
	// ask user to input elements
	cout << "Enter elements: ";
	
	// stores elements input by user to array "arr" using for loop
	for(int i = 0; i < 5; ++i)
	   cin >> arr[i];
	
	cout << "You entered: ";
	for(int j = 0; j < 5; ++j)
	   cout << endl << arr[j];   // *(arr + j) = arr[j]

	
	return 0;
}
