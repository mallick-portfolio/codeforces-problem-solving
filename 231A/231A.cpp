#include<iostream>
using namespace std;

int main()
{
    int n, solveCount = 0, petya,vasya,tonya;
    cin>>n;
    for(int i= 0; i<n; i++){
        cin>>petya>>vasya>>tonya;
        if(petya+vasya+tonya >= 2){
            solveCount++;
        }
    }
    cout<<solveCount;
    return 0;
}
