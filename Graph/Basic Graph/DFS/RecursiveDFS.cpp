#include <bits/stdc++.h>
using namespace std;
const long vertexSize = 1e7;
bool visited[vertexSize];
vector<int> revGraphs[vertexSize];
void recursiveDFS(int _root)
{
   cout << _root << endl;
   visited[_root] = true;
   for(auto node : revGraphs[_root])
       if(!visited[node])
           recursiveDFS(node);
}
int main() {
   int num_v, num_e, root;
   cin >> num_v >> num_e >> root;
   for(int i = 0; i < num_e; i++)
   {
       int from, to;
       cin >> from >> to;
       revGraphs[from].push_back(to);
       revGraphs[to].push_back(from);
   }
   recursiveDFS(root);
   return 0;
}
