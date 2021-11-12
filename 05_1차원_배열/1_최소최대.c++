#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    int min = 1000001, max = -1000001;
    int num;

    for (int i = 0; i < N; i++){
        cin >> num;
        if (min > num) min = num;
        if (max < num) max = num;
    }

    cout << min << ' ' << max;


    return 0;
}