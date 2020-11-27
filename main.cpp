#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    if(n < 2){
        cout << " khong phai la so nguyen to!" << endl;
        return 0;
    }
    for(int i = 2; i <= sqrt(n) ; i++){
            if(n % i == 0){
                count++;
            }
    }
    if(count == 0){
        cout << n << " la so nguyen to" << endl;
    } else {
        cout << n << " khong phai la so nguyen to!" << endl;
    }
}
