#include <iostream>

using namespace std;
void median(int[], int);
int main() {
	int *array;
	int size, minindex, minvalue;
	cout <<"what is the size of the array?"<<endl;
	cin >> size;
	array = new int[size];
	for(int i=0; i <size ; i++){
		array[i]=i + 1;
		cout << array[i]<<" ";
	}
	cout <<endl;
	median(array, size);
}

void median(int array[], int size){
	float median;
	int median_index;
	if(size%2==0){
		median_index = size / 2;
		median = (array[median_index] + array[median_index - 1]);
		cout << "The median is: "<< median / 2<<endl;
	}
	if(size%2 == 1){
		median_index = (size)/ 2;
		cout << median_index<<endl;
		median = array[(median_index)];
		cout << "The median is: "<< median<<endl;
	}
}