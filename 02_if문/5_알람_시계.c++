#include <iostream>
using namespace std;

int main() {

    int wakeup_time_H, wakeup_time_M;

    cin >> wakeup_time_H >> wakeup_time_M;


    if ( wakeup_time_M >= 45 )
        cout << wakeup_time_H << " " << wakeup_time_M - 45;
    
    else{

        wakeup_time_H -= 1;

        if (wakeup_time_H >= 0)
            cout << wakeup_time_H << " " << 60 + ( wakeup_time_M - 45 );

        else
            cout << 23 << " " << 60 + ( wakeup_time_M - 45 );
    
    }


        return 0;
}