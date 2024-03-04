#include<bits/stdc++.h>


using namespace std;

struct Cell {
    int x, y;
};

int countReachableCells(int N, int M, int X0, int Y0, int L) {
    set<Cell> visited;
    deque<Cell> q;

    Cell start = {X0, Y0};
    q.push_back(start);
    visited.insert(start);

    vector<pair<int, int>> directions = {{0, L}, {0, -L}, {L, 0}, {-L, 0}};

    while (!q.empty()) {
        Cell current = q.front();
        q.pop_front();

        for (auto& dir : directions) {
            int newX = current.x + dir.first;
            int newY = current.y + dir.second;

            if (newX >= 1 && newX <= N && newY >= 1 && newY <= M) {
                Cell newCell = {newX, newY};
                if (visited.find(newCell) == visited.end()) {
                    visited.insert(newCell);
                    q.push_back(newCell);
                }
            }
        }
    }

    return visited.size();
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, X0, Y0, L;
        cin >> N >> M >> X0 >> Y0 >> L;

        cout << countReachableCells(N, M, X0, Y0, L) << endl;
    }

    return 0;
}
