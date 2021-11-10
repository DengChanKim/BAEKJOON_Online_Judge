#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int X;

    cin >> N >> X;


    int compare;

    for (int i = 0; i < N; i++){
        cin >> compare;

        if (X > compare)
            cout << compare << ' ';
    }


    return 0;
}