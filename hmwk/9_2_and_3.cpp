#include<iostream>
using namespace std;

void sort_array(int[], int);
void calc_average(int[],int);
void dropped_calc_average(int[],int);

int main() {
    int size;
    cout<< "Enter the number of test scores you would like to enter"<<endl;
    cin >> size;
    while(size < 0){
        cout << "ERROR: value cannot be negative"<<endl;
        cout << "Please enter a value greater than 0: ";
        cin >> size;
    }
	int *test;
    test = new int[size];
    cout<< "Please enter each test score"<<endl;
    for (int i=0 ; i<size ; i++){
        cin>>test[i];
        while(test[i] < 0){
            cout << "ERROR: Test scores cannot be negative"<<endl;
            cout << "Please enter a test score: ";
            cin>>test[i];
        }
    }
    sort_array(test,size);
    calc_average(test,size);
    dropped_calc_average(test,size);
    return 0;
}
void sort_array(int array[], int size){
int start; 
int minindex; 
int minvalue;
for (start = 0; start < (size-1); start++){
    minindex=start;
    minvalue=array[start];
    for(int index = start + 1;index <size ; index++ ){
        if (array[index] < minvalue){
            minvalue=array[index];
            minindex=index;
        }       
    }
    array[minindex] = array[start];
    array[start]= minvalue;
 }
    for (int i=0 ; i<size ; i++){
        if(i == 0){
           cout << "Test scores: ";
        }
        if(i == size - 1){
            cout<< array[i]<<endl;
            break;
        }
        cout << array[i]<< ", ";
    }
}

void calc_average(int array[],int size){
    float sum;
    float average;
    for(int i=0 ; i<size ; i++){
        sum= sum + array[i];
    }
    average = sum / size;
    cout << "Test Average: "<< average << endl;
}

void dropped_calc_average(int array[],int size){
    float sum=0;
    float average;
    for(int i=1 ; i<size ; i++){
        sum= sum + array[i];
    }
    average = sum / (size - 1);
    cout << "Adjusted test Average: "<< average << endl;
}