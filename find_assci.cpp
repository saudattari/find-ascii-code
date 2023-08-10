#include<iostream>
#include <Windows.h>
using namespace std;

int main(){
    char ch;
    cout<<"Enter charcater: ";
    cin>>ch;
    Sleep(4000);
    int n = ch;
    cout<<"asci code of "<<ch<<" is: "<<n;
}