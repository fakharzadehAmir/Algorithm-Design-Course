#include <bits/stdc++.h>
using namespace std;
const int vertexSize = 1e5;
vector<int> revGraphs[vertexSize];
bool visited[vertexSize];
void post_order(int vertex){
   visited[vertex] = true;
   for(auto &child : revGraphs[vertex])
       if(!visited[child])
           post_order(child);
   cout << vertex << " ";
}
void topological_sort(int num_vertices)
{
   for(int i = 1; i < num_vertices + 1; i++)
       if(!visited[i])
           post_order(i);
}
int main() {
   int num_e, num_v;
   cin >> num_e >> num_v;
   for(int i = 0; i < num_e; i++)
   {
       int from, to;
       cin >> from >> to;
       revGraphs[to].push_back(from);
   }
   topological_sort(num_v);
   return 0;
}
