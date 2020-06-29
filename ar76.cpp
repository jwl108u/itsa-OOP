#include <iostream>  
using namespace std;  
  
int main() {  
    // [C_AR76-易] 提款機程式  
    int data[6][3] =   
    {  
    {123, 456, 9000},  
    {456, 789, 5000},  
    {789, 888, 6000},  
    {336, 558, 10000},  
    {775, 666, 12000},  
    {566, 221, 7000}  
    };  
    int N;  //測資數
    cin >> N;  
    cin.ignore();   
    int acc, pw;  //帳號 密碼
    for(int i = 0;i < N;i++)  
    {  
        int f = 0;  
        cin >> acc >> pw;  
        for(int j = 0;j < 6;j++)  
        {  
            if(acc == data[j][0] && pw == data[j][1])  
            {  
                cout << data[j][2] << endl;  
            }  
            else  
            {  
                f++;  
            }  
        }  
        if(f == 6)  //如果六筆都沒有此帳號
        {  
            cout << "error" << endl;  
        }  
    }  
    return 0;  
}
