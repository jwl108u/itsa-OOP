#include <iostream>    
using namespace std;    
    
int main() {    
    int num_1, num_2;    
    while(cin >> num_1 >> num_2)    
    {    
        if(num_1 > num_2)     
        {    
            for(int i = num_2; i >=0 ; i--)    
            {    
                if(num_2 % i == 0 && num_1 % i == 0)    
                {    
                    cout << i << endl;    
                    break;    
                }    
            }    
        }    
        else if(num_1 < num_2)     
        {    
            for(int i = num_1; i >=0 ; i--)    
            {    
                if(num_1 % i == 0 && num_2 % i == 0)    
                {    
                    cout << i << endl;    
                    break;    
                }     
            }       
        }    
        else     
        {    
            cout << num_1 << endl;      
        }    
            
    }    
    return 0;    
} 
