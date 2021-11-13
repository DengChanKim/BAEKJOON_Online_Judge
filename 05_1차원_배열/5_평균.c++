#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << fixed;
    cout.precision(10);


    int N;

    cin >> N;


    int array[1001];
    int max = -1;
    float total = 0;

    for (int i = 0; i < N; i++){
        cin >> array[i];

        if (max < array[i]) max = array[i];
        
        total += array[i];
    }
    
    cout << total / N / max * 100;


    return 0;
}