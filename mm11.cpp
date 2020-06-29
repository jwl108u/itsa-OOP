#include <iostream>  
using namespace std;  
  
int main() {  
    int money, c10, c5, c1;  
      
    while(cin >> money)  
    {  
        c10 = money / 10;  
        c5 = money % 10 / 5;  
        c1 = money % 10 % 5 / 1;  
        cout << "NT10=" << c10 << endl;  
        cout << "NT5=" << c5 << endl;  
        cout << "NT1=" << c1 << endl;  
    }  
    return 0;  
}
