#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, index;
    int max = -1000001;

    for (int i = 1; i <=9; i++){
        cin >> num;

        if (max < num){
            max = num;
            index = i;
        } 
    }

    cout << max << '\n' << index;


    return 0;
}