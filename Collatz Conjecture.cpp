#include <iostream>
using namespace std;

int collatz_conjecture(int val){
    if (val%2 == 0){
        val/=2;
    }
    else if (val%2 != 0){
        val = (3*val)+1;
    }
    return val;
}

int main(){
    int num;
    cout << "Input Num : ";
    cin >> num;
    
    while (true){
        num = collatz_conjecture(num);
        cout << "Num : " << num << endl;
        if (num <= 1){
            break;
        }
    }
}