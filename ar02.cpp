#include <iostream>  
using namespace std;  
  
int main() {  
    // [C_AR02-©ö] ¤@ºû°}¦C¤ÏÂà II  
    int num[6];  
    int mid;  
    for(int i = 0;i < 6;i++)  
    {  
        cin >> num[i];  
    }  
    for(int i = 0;i < 3;i++)  
    {  
        mid = num[i];  
        num[i] = num[5-i];  
        num[5-i] = mid;  
    }  
      
    for(int i = 0;i < 6;i++)  
    {  
        if(i != 5)  
        {  
            cout << num[i] << " ";  
        }  
        else  
        {  
            cout << num[i] << endl;  
        }  
          
    }  
    return 0;  
}  
