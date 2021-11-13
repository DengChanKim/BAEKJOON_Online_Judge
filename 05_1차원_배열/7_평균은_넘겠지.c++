#include <iostream>
using namespace std;

int main(){

    int C;                  // 테스트 케이스

    cin >> C;

    
    int N;                  // 학생의 수
    int score[1001];        // 점수

    for (int i = 0; i < C; i++){
        cin >> N;
        
        int upnum = 0;      // 평균 이상
        float total = 0;    // 평균

        for (int j = 0; j < N; j++){
            cin >> score[j];

            total += score[j];
        }

        total /= N;

        for (int k = 0; k < N; k++)
            if (total < score[k]) upnum++;

        cout << fixed;
        cout.precision(3);
        cout << (float)upnum / N * 100 << '%' << '\n';
    }


    return 0;
}