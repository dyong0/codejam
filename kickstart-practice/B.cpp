#include "once.hpp"

typedef unsigned long long ull;

const int MAX=2000;
ull win=0;
ull total=0;

int A, B;

inline void init() {
}

void count(int a, int b, int scoreDiff, bool win) {

}

double solve() {
    win=0;
    total=0;
    count(1,0,1,true);

    cerr << win << " " << total << endl;

    return win/total;
}

int main() {
    init();

    int nCases; cin >> nCases;
    for (int i=1; i<=nCases; i++) {
        //INPUT
        cin >> A >> B;

        //OUTPUT
        cout.precision(8);
        cout << "Case #" << i << ": " << fixed << solve() << endl;
    }

    return 0;
}
