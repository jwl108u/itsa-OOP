#include<iostream>  
#include<iomanip>  
  
using namespace std;  
  
int main() {  
    int top_base, under_base, high;  
    cin >> top_base >> under_base >> high;  
    float area;  
    area = (top_base+under_base)*high/2.0;  
    cout << "Trapezoid area:" << fixed << setprecision(1) << (float)area << endl;  
    return 0;  
} 
