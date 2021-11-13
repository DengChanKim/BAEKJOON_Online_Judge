#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;

    cin >> T;


    string strox;

    for (int i = 0; i < T; i++){
        int score = 0, combo = 0;

        cin >> strox;

        for (int j = 0; j < strox.length(); j++){
            if (strox[j] == 'O'){
                score += combo + 1;

                combo++;
            }

            else
                combo = 0;
        }

        cout << score << '\n';
    }


    return 0;
}