#include <iostream>  
#include <string>  
#include <cmath>  //floor()  
#include <string.h> //strcpy()  
using namespace std;  
  
int main() {  
    // [C_ST22-易] 迴文字串 II  
    string text;  
    int count;  
    char change;  
    while(cin >> text)  
    {  
        count = text.size();//string 長度    
        char result[count]; //存入回文結果    
        strcpy(result, text.c_str());//string to char    
        for(int i = 0;i < count;i++) //大小寫轉換  
        {  
            if(90 >= result[i] && result[i] >= 65)//大寫  
            {  
                result[i] = char(result[i]+32);  
            }  
            else if(122 >= result[i] && result[i] >= 97)//小寫  
            {  
                result[i] = char(result[i]-32);  
            }  
        }  
          
        for(int i = 0;i < floor(count/2);i++) //迴文  
        {  
            change = result[i];    
            result[i] = result[count-1-i];    
            result[count-1-i] = change;    
        }  
          
        for(int i = 0;i<count;i++)//輸出    
         {    
            if(i == count-1)    
            {    
                cout << result[i] << endl;    
            }    
            else    
            {    
                cout << result[i];    
              }    
        }    
    }  
    return 0;  
}
