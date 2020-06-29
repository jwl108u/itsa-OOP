#include <iostream>  
#include <string.h> //strcpy()    
using namespace std;  
  
int main() {  
    // [C_ST21-易] 文字及字母出現次數  
    string text;  //輸入的字串  
    int len = 0; //有多少句子  
    getline(cin, text);//使用者輸入(整行讀取包含空白)  
    int arr[26][2];//儲存大小寫英文的數量，[0]大寫,[1]小寫  
    int count = text.size();//string 長度      
     char result[count]; //存入結果      
     strcpy(result, text.c_str());//string to char   
     for(int i = 0;i < 26;i++)//陣列歸零  
     {  
        for(int j = 0;j < 2;j++)  
        {  
            arr[i][j] = 0;  
        }  
     }  
     for(int i = 0;i < count;i++)  
     {  
        if(result[i] == 32 || result[i] == 46)  
        //因為逗號後面都有一個空白，所以逗號不用算，算逗號後的空白即可  
        {  
            len++;  
        }  
        else if(90 >= result[i] && result[i] >= 65)//大寫  
        {  
            arr[result[i]-65][0]++;  
        }  
        else if(122 >= result[i] && result[i] >= 97)//小寫  
        {  
            arr[result[i]-97][1]++;  
        }  
          
     }  
     if((result[count-1] == 32 || result[count-1] == 44 || result[count-1] == 46)&&(result[0] == 32 || result[0] == 44 || result[0] == 46))  
        {  
            cout << len-1 << endl;  
        }  
     else if((result[count-1] == 32 || result[count-1] == 44 || result[count-1] == 46)||(result[0] == 32 || result[0] == 44 || result[0] == 46))  
     {  
        cout << len << endl;  
     }  
     else  
     {  
        cout << len+1 << endl;  
     }  
       
     for(int i = 0;i < 26;i++)  
     {  
        for(int j = 0;j < 2;j++)  
        {  
            if(arr[i][j] != 0)  
            {  
                if(j==0)//大寫  
                {  
                    cout << char(i+65) << " : " << arr[i][j]<< endl;      
                }  
                if(j==1)//小寫  
                {  
                    cout << char(i+97) << " : " << arr[i][j]<< endl;  
                }  
            }  
        }  
     }  
    return 0;  
}
