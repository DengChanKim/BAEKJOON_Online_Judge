#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;


    int num = n;
    int count = 0;

    do{
        num = (num % 10) * 10 + ((num % 10) + (num / 10)) % 10;

        count++;
    }
    while(n != num);

    cout << count;


    return 0;
}