#include "once.hpp"

int N;
vector<string> names;

inline void init() {

}

string solve() {
    vector<int> counts(N);
    for(auto it=names.begin(); it != names.end(); ++it) {
        int alphabets[30] = {0,};
        for(auto st=it->begin(); st != it->end(); ++st) {
            alphabets[*st - 'A'] = 1;
        }

        for(int i=0; i < 30; ++i) {
            if(alphabets[i] == 1) {
                counts[it - names.begin()] += 1;
            }
        }
    }

    int maxIndex = 0;
    int max = 0;
    for(auto it=counts.begin(); it != counts.end(); ++it) {
        if(*it > max) {
            maxIndex = it - counts.begin();
            max = *it;
        }
    }

    return names.at(maxIndex);
}

int main() {
    init();

    int nCases; cin >> nCases;
    for (int i=1; i<=nCases; i++) {
        //INPUT
        cin >> N;
        cin.ignore(1);

        names.clear();
        char buf[110];
        for(int j=0; j < N; ++j) {
            cin.getline(buf, 110);
            names.push_back(string(buf));
        }

        sort(names.begin(), names.end());

        //OUTPUT
        cout << "Case #" << i << ": " << solve() << endl;
    }

    return 0;
}
