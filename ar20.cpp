#include <iostream>  
using namespace std;  
  
int main() {  
    // [C_AR20-©ö] ÀË¬d¼Æ­È¬O§_¦³­«½Æ  
    int n;  
    cin >> n;  
    int num[n];  
    int count[2000000];  
    int cou = 0;  
    for(int i = 0;i < 2000000;i++)  
    {  
        count[i] = 0;  
    }  
    for(int i = 0;i < n;i++)  
    {  
        cin >> num[i];  
        if(count[num[i]]==0)  
        {  
            count[num[i]]++;  
        }  
    }  
    for(int i = 0;i < 2000000;i++)  
    {  
        if(count[i]==1)  
        {  
            cou++;  
        }  
    }  
    if(cou == n)  
    {  
        cout << "1" << endl;  
    }  
    else  
    {  
        cout << "0" << endl;  
    }  
      
      
    return 0;  
}
