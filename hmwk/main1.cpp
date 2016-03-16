#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    float F=0, C=0;
    
    cout <<"what is the current temprature in celcius?"<<endl;
    cin >>C;
    F = (C * 9 / 5) + 32;
    cout <<"the current temprature in Fahrenheit is: " << F << endl;
            
            

    return 0;
}

