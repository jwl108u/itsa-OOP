#include <iostream>  
#include <cmath>  
using namespace std;  
  
int main() {  
    //[C_AR03-易] 計算陣列中所有元素的立方和  
    double num[12000];  
    long long int sum=0, count=0;  
    double cube = 3;  
    for(int i = 0;i<sizeof(num)/sizeof(num[0]);i++)  
    {  
        if(cin >> num[i])  
        {  
            count++;  
        }  
    }  
      
    for(int i = 0;i<count;i++)  
    {  
        sum = sum + pow(num[i],cube);  
    }  
    cout << sum << endl;  
    sum=0;  
    return 0;  
}  
