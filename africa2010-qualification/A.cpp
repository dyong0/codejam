#include "once.hpp"

const int C=1000;
const int P=1000;
const int I=2000;

int gCredit;
int gnItems;
int gItems[I+100];

inline void init() {

}

string solve() {
    unordered_map<int, int> lastItems;
    for(int i=0; i < gnItems; ++i) {
        if(lastItems.find(gItems[i]) != lastItems.end()) {
            return to_string(1+lastItems[gItems[i]]) + string(" ") + to_string(1+i);
        }

        if(gCredit > gItems[i]) {
            lastItems[gCredit - gItems[i]] = i;
        }
    }

    return "error";
}

int main() {
    init();

    int nCases; cin >> nCases;
    for (int i=1; i<=nCases; i++) {
        //INPUT
        cin >> gCredit;
        cin >> gnItems;
        for(int j=0; j < gnItems; ++j)
        {
            cin >> gItems[j];
        }


        //OUTPUT
        cout << "Case #" << i << ": " << solve() << endl;
    }

    return 0;
}
