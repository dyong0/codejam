#include "once.hpp"

string gSentence;
const int L=1000;
char gSentenceBuf[L];

inline void init() {

}

string solve() {
    vector<string> tokens;

    istringstream iss(gSentence);
    copy(istream_iterator<string>(iss),
            istream_iterator<string>(),
            back_inserter(tokens));

    reverse(tokens.begin(), tokens.end());

    string reversed = "";
    for(auto it=tokens.begin(); it != tokens.end(); ++it) {
        reversed += *it;
        if(it < tokens.end() -1) {
            reversed += " ";
        }
    }

    return reversed;
}

int main() {
    init();

    int nCases; cin >> nCases;
    cin.ignore(1);
    for (int i=1; i<=nCases; i++) {
        //INPUT
        cin.getline(gSentenceBuf, L);
        gSentence = string(gSentenceBuf);

        //OUTPUT
        cout << "Case #" << i << ": " << solve() << endl;
    }

    return 0;
}
