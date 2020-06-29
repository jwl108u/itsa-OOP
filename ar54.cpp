#include <iostream>  
#include<algorithm> // fill()  
  
using namespace std;  
  
int main() {  
    // [C_AR54-易] 小寫字元計算  
    // a=97 ~ z=122 ASCII  
    //  a=0 ~ z=25  count陣列位置  
    int count[26];  
    fill(count, count+26,0);  //計算個數的陣列歸零  
    int n; //使用者輸入的字元個數  
    char ch; //輸入的字元  
    cin >> n; //輸入  
    for(int i = 0;i < n;i++)  //計算數量  
    {  
        cin >> ch;  
        count[ch-97]++;  
    }  
    for(int i = 0;i < 26;i++)  //輸出數量  
    {  
        if(count[i] != 0)  
        {  
            cout << char(i+97) << " " << count[i] << endl;  
        }  
    }  
    return 0;  
} 
