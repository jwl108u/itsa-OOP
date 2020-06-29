#include <iostream>  
using namespace std;  
  
int main() {  
    int start, end;  
    int sum = 0;  
    while(cin >> start >> end)  
    {  
        if(start > end)  
        {  
            for(int i = end; i <= start;i++)  
            {  
                sum = sum + i;  
            }  
            cout << sum << endl;  
        }  
        else if(start < end)  
        {  
            for(int i = start; i <= end;i++)  
            {  
                sum = sum + i;  
            }  
            cout << sum << endl;  
        }  
        sum = 0;  
    }  
    return 0;  
}
