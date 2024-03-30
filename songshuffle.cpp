#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int minRemovals(vector<pair<string, string>>& songs) {
    int n = songs.size();
    int removals = 0;
    unordered_map<string, int> genreCount, writerCount;
    
    for (auto& song : songs) {
        genreCount[song.first]++;
        writerCount[song.second]++;
    }
    
    for (auto& song : songs) {
        if (genreCount[song.first] > 1 && writerCount[song.second] > 1)
            removals++;
    }

    return removals;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<string, string>> songs(n);
        for (int i = 0; i < n; ++i) {
            cin >> songs[i].first >> songs[i].second;
        }

        cout << minRemovals(songs) << endl;
    }

    return 0;
}
