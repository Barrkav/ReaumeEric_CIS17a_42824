#include <iostream>

using namespace std;
int *create_array(int);
int main(int argc, char** argv) {
    int size;
    cout << "How large is your array"<<endl;
    cin >> size;
	int *array = create_array(size);
	for(int i=0; i<size; i++){
	cout << array[i]<<endl;
	}
    return 0;
}

int *create_array(int size){
    int *array;
    array = new int[size];
    for(int i=0; i<size; i++){
        array[i]=i;
    }
	return array;
}