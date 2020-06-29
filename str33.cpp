#include <iostream>  
#include <ctype.h>  
#include<string>  
#include <stdio.h>  
#include <string.h>  
  
using namespace std;  
  
int main() {  
    // [C_ST33-©ö] ­^¤å¦rªº¤À¼Æ  
    string text;  
    int grade = 0;  
    getline(cin, text);  
    char chText[text.size()];  
    strcpy(chText, text.c_str());  
    for(int i = 0;i < text.size();i++)  
    {  
        chText[i] = tolower(chText[i]);  
        grade = grade + (chText[i]-96);  
    }  
    cout << grade << endl;  
  
    return 0;  
}
