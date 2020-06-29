#include <iostream>  
#include <string>  
#include <sstream> //stringstream  
#include <algorithm> //fill()  
#include <cmath>  //floor()  
  
using namespace std;  
  
int main() {  
    // [C_AR59-易] 好數問題  
    int N; //測資數量  
    int two = 0; //數字數量為2的有幾個  
    int num; //整數型態的測資  
    string str_num; //字串型態的測資  
    int len; //測資num的長度  
    int count[10];//數字數量的統計  
    fill(count, count+10, 0); //陣列填滿0  
    cin >> N;//輸入測資數量  
    for(int i = 0; i < N;i++)  
    {  
        cin >> num;  
        //int to string(23~25行)  
        stringstream ss;  
        ss << num;  
        str_num = ss.str();  
        len = str_num.size(); //數字長度  
        //判斷是否為四位數  
        if(len != 4)  
        {  
            cout << "Failure Input" << endl;  
        }  
        else  
        {  
            count[int(floor(num/1000))]++;       //千位  
            count[int(floor((num%1000)/100))]++; //百位  
            count[int(floor(num%100)/10)]++;     //十位  
            count[int(floor(num%10))]++;         //個位  
            for(int j = 0;j < 10;j++)   //計算數量為2的次數  
            {  
                if(count[j] == 2)  
                {  
                    two++;  
                }  
                  
            }  
            if(two == 1)  //只有一個2代表是好數，輸出Yes  
            {  
                cout << "Yes" << endl;  
            }  
            else  //其他都是No  
            {  
                cout << "No" << endl;  
            }  
        }  
        //歸零  
        fill(count, count+10, 0);  
        two = 0;  
    }  
    return 0;  
} 
