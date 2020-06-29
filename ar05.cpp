#include <iostream>  
#include <algorithm>  
using namespace std;  
  
int main() {  
    // [C_AR05-©ö] ³Ì¤Ö¬£¨®¼Æ  
    int n;//´ú¸ê¼Æ  
    int st, et, max = 0;  
    int t[25];  
    fill(t,t+25,0);  
    cin >> n;  
    for(int j = 0;j < n;j++)  
    {  
        cin >> st >> et;  
        for(int i = st;i < et;i++)  
        {  
            t[i]++;  
        }  
    }  
    for(int k = 0;k < 25;k++)  
    {  
        if(t[k] > max)  
        {  
            max = t[k];  
        }  
    }  
    cout << max << endl;  
    return 0;  
}
