#include "once.hpp"
#include <string.h>

const int L = 1000;
char gSentence[1000];

map<char, string> gMapping;
string gSpace = " ";

inline void init() {
    gMapping[' '] = "0";
    gMapping['a'] = "2";
    gMapping['b'] = "22";
    gMapping['c'] = "222";
    gMapping['d'] = "3";
    gMapping['e'] = "33";
    gMapping['f'] = "333";
    gMapping['g'] = "4";
    gMapping['h'] = "44";
    gMapping['i'] = "444";
    gMapping['j'] = "5";
    gMapping['k'] = "55";
    gMapping['l'] = "555";
    gMapping['m'] = "6";
    gMapping['n'] = "66";
    gMapping['o'] = "666";
    gMapping['p'] = "7";
    gMapping['q'] = "77";
    gMapping['r'] = "777";
    gMapping['s'] = "7777";
    gMapping['t'] = "8";
    gMapping['u'] = "88";
    gMapping['v'] = "888";
    gMapping['w'] = "9";
    gMapping['x'] = "99";
    gMapping['y'] = "999";
    gMapping['z'] = "9999";
}

string solve() {
    string mapped = "";
    int len = strlen(gSentence);
    char lastChar = 0;

    for(int i=0; i < len; ++i) {
        if(i > 0 && gMapping[lastChar][0] == gMapping[gSentence[i]][0]) {
            mapped += gSpace;
        }
        mapped += gMapping[gSentence[i]];

        lastChar = gSentence[i];
    }

    return mapped;
}

int main() {
    init();

    int nCases; cin >> nCases;
    cin.ignore(1);
    for (int i=1; i<=nCases; i++) {
        //INPUT
        cin.getline(gSentence, L);

        //OUTPUT
        cout << "Case #" << i << ": " << solve() << endl;
    }

    return 0;
}
