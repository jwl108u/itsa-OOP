#include <iostream>  
#include<sstream>  
#include<algorithm>  
  
using namespace std;  
  
int main() {  
    // [C_AR01-易] 一維陣列反轉 I  
    string s;  
    string str[100];//切割後放入str[]  
    int count = 0; //計算有幾個數字  
    while(getline(cin , s))//切割  
    {  
        stringstream ss(s);//將s字串塞入ss  
        string token; //將切割後的結果存入token  
        while (getline(ss, token, ' '))  
        {  
            str[count] = token;  
            count++;  
        }  
        reverse(str, str+count); // 反轉陣列  
        for(int i = 0;i < count;i++)  
        {  
            if(i != count-1)  
            {  
                cout << str[i] << " ";  
            }  
            else  
            {  
                cout << str[i] << endl;  
            }  
        }  
        count = 0;  
    }  
    return 0;  
}
