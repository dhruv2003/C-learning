#include <bits/stdc++.h>

using namespace std;


struct Cell {
    int x, y;
    
    
    bool operator<(const Cell& other) const {
        return x < other.x || (x == other.x && y < other.y);
    }
};


long long countReachableCells(int N, int M, int X0, int Y0, int L) {
    // Set to store visited cells
    set<Cell> visited;
    
    // Queue for BFS
    queue<Cell> q;
    
    // Starting cell
    Cell start = {X0, Y0};
    q.push(start);
    visited.insert(start);
    
    // Directions for jumping
    vector<pair<int, int>> directions = {{0, L}, {0, -L}, {L, 0}, {-L, 0}};
    
    // BFS traversal
    while (!q.empty()) {
        Cell current = q.front();
        q.pop();
        
        // Explore all possible jumps from current cell
        for (auto& dir : directions) {
            long long newX = current.x + dir.first;
            long long  newY = current.y + dir.second;
            
            // Check if new cell is within the grid and not visited
            if (newX >= 1 && newX <= N && newY >= 1 && newY <= M) {
                Cell newCell = {newX, newY};
                if (visited.find(newCell) == visited.end()) {
                    visited.insert(newCell);
                    q.push(newCell);
                }
            }
        }
    }
    
    // Return the count of distinct cells Arya can reach
    return visited.size();
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long N, M, X0, Y0, L;
        cin >> N >> M >> X0 >> Y0 >> L;
        
        cout << countReachableCells(N, M, X0, Y0, L) << endl;
    }
    
    return 0;
}
