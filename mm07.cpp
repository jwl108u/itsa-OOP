#include <iostream>  
#include<iomanip>  
#include <math.h>  
using namespace std;  
  
int main() {  
    int num;  
    cin >> num;  
    int square, cube;  
    square = pow(num,2);  
    cube = pow(num,3);  
    cout << num << " " << square << " " << cube << endl;  
    return 0;  
} 
