// write any code to test out your functions here
// run comman "make demo" to run this code
#include <iostream>

using namespace std;


void printArray(int array [], int size) {
	for(int i = 0; i<size; i++){
		cout<<array[i];
        if(i!=10){
            cout<<", ";
        }
		
	}
    cout<<endl;
	return;
}

//Write the function called replaceVariable in the given interval such that 
// output : you decide what is the output (here I put "void" - change this if you need to!)
// input : an array of int, the target value we are searching for, 
//     an int which is the starting index of search,
//     an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000
void replaceVariable(int array[], int target, int start, int end) {
	for(int i = start; i<end; i++){
        if(array[i]==target){
            array[i] = 1000;
            
        }
    }
	return;
}


int locateSmallest(int array[], int start, int end){
	int index = start;
	int smallestNumber = array[start]; 
	for(int i = start; i<end; i++){
		if(smallestNumber>=array[i]){
            smallestNumber = array[i];
			index = i;
		}
	}
    cout<<smallestNumber<<endl;
	return index;
}


int main() {
    int array [] = {16,3,75,40,21,40,44,52,40,90,22 };
    int target = 40;
    int wtv = locateSmallest(array, 2, 8);
    cout<<wtv<<endl<<endl;

	replaceVariable(array, target, 3, 7);


    printArray(array, 11);


    
    return 0;
}