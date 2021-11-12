#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;

    cin >> A >> B >> C;

    int mul = A * B * C;


    int array[10] = {0,};

    string strmul = to_string(mul);

    for (char c : strmul)
        array[c - '0']++; 
    

    for (int i : array)
        cout << i << '\n';

    return 0;
}