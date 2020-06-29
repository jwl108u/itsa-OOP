#include <iostream>  
#include <math.h>  
using namespace std;  
  
int main() {  
    //I : 1m/sec  
    //friend : 0.762m/sec  
    int dis;  
    while(cin >> dis)  
    {  
        cout << ceil(dis/0.238) << endl;  
    }  
    return 0;  
} 
