#include <iostream>  
using namespace std;  
  
int main() {  
    int num_1, num_2;  
    cin >> num_1 >> num_2;  
    int sum, min, mul, divisor, rem;  
    sum = num_1 + num_2;  
    min = num_1 - num_2;  
    mul = num_1 * num_2;  
    divisor = num_1 / num_2;  
    rem = num_1 % num_2;  
  
    cout << num_1 << "+" << num_2 << "=" << sum << endl;  
    cout << num_1 << "*" << num_2 << "=" << mul << endl;  
    cout << num_1 << "-" << num_2 << "=" << min << endl;  
    cout << num_1  << "/" << num_2 << "=";    
    if(num_1 < 0)    
        cout << num_1 / num_2 - 1 << "..." << num_1 % num_2 + num_2 << endl;    
    else    
        cout << num_1 / num_2 << "..." << num_1 % num_2 << endl;    
}  
