#include "once.hpp"

int L;
int R;

inline void init() {

}

int solve() {
    return (min(L, R)*(min(L, R)+1)) / 2;
}

int main() {
    init();

    int nCases; cin >> nCases;
    for (int i=1; i<=nCases; i++) {
        //INPUT
        cin >> L >> R;

        //OUTPUT
        cout << "Case #" << i << ": " << solve() << endl;
    }

    return 0;
}
