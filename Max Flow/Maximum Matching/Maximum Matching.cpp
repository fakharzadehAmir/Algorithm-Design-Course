#include <bits/stdc++.h>
using namespace std;
const int graphSize = 3e3;
vector<int> adj[graphSize];
bool visited[graphSize];
vector<int> matching(graphSize, -1);

bool bipartiteMatch(int u, int n) {
   for (auto v : adj[u]) {
       if (!visited[v]) {
           visited[v] = true;
           if (matching[v] == -1 || bipartiteMatch(matching[v], n)) {
               matching[u] = v - n;
               matching[v] = u;
               return true;
           }
       }
   }
   return false;
}

void maximumMatch(int n, int m) {
   for (int i = 1; i <= n; i++) {
       for (int j = 1; j <= m + n; j++) {
           visited[j] = false;
       }
       bipartiteMatch(i, n);
   }
}

int main() {
   int n, m;
   cin >> n >> m;
   for (int i = 1; i <= n; i++) {
       for (int j = 1; j <= m; j++) {
           int input;
           cin >> input;
           if (input == 1) {
               adj[i].push_back(j + n);
               adj[j + n].push_back(i);
           }
       }
   }
   maximumMatch(n, m);
   for (int i = 1; i <= n; i++) {
       if (matching[i] != -1) {
           cout << matching[i] << " ";
       } else {
           cout << -1 << " ";
       }
   }
   return 0;
}
