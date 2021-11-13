#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int A = 42;
    int arrayB[10];
    set<int>s;

    for (int i = 0; i < 10; i++){
        cin >> arrayB[i];

        s.insert(arrayB[i] % A);
    }

    cout << s.size();


    return 0;
}