#include <bits/stdc++.h>
using namespace std;

const int graphSize = 3e3;
vector<vector<int>> capacity(graphSize, vector<int>(graphSize, 0));
vector<vector<int>> residual(graphSize, vector<int>(graphSize, 0));
vector<int> parent(graphSize, -1);
vector<bool> visited(graphSize, false);
bool bfs(int source, int sink, int num_v) {
   fill(visited.begin(), visited.end(), false);
   queue<int> q;
   q.push(source);
   visited[source] = true;
   parent[source] = -1;
   while (!q.empty()) {
       int u = q.front();
       q.pop();
       for (int v = 0; v < num_v; v++) {
           if (!visited[v] && residual[u][v] > 0) {
               q.push(v);
               visited[v] = true;
               parent[v] = u;
           }
       }
   }
   return visited[sink];
}
int fordFulkerson(int source, int sink, int num_vertices) {
   residual = capacity;
   while (bfs(source, sink, num_vertices)) {
       int pathFlow = INT32_MAX;
       int u = sink;
       while (u != source)
       {
           int v = parent[u];
           pathFlow = min(pathFlow, residual[v][u]);
           u = parent[u];
       }
       u = sink;
       while (u != source)
       {
           int v = parent[u];
           residual[v][u] -= pathFlow;
           residual[u][v] += pathFlow;
           u = parent[u];
       }
   }
}
int main() {
   int num_v, source, sink, from, to, cp;
   cin >> num_v >> source >> sink;
   while (cin >> from && from != -1) {
       cin >> to >> cp;
       capacity[from][to] = cp;
   }
   fordFulkerson(source, sink, num_v);
   for (int u = 0; u < num_v; u++) {
       if (visited[u]) {
           for (int v = 0; v < num_v; v++) {
               if (!visited[v] && capacity[u][v] > 0) {
                   cout << u << " - " << v << endl;
               }
           }
       }
   }
   return 0;
}