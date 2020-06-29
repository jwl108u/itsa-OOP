#include <iostream>  
#include <string.h> //strcpy()   
using namespace std;  
  
int main() {  
    // [C_ST31-易] 移除字串中的空白鍵和定位鍵  
    string text;  
    getline(cin, text);//使用者輸入(整行讀取包含空白)    
    int count = text.size();//string 長度        
     char result[count]; //存入結果        
     strcpy(result, text.c_str());//string to char   
     for(int i = 0;i < count;i++)    
     {  
        if(result[i] != 32 && result[i] != 9)  //不是空白也不是Tab
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
