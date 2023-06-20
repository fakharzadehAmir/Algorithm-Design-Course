#include <bits/stdc++.h>
using namespace std;
const long vertexSize = 1e7;
bool visited[vertexSize];
vector<int> revGraphs[vertexSize];
void iterativeDFS(int _root)
{
   stack<int> dfs_stack;
   dfs_stack.push(_root);
   while (!dfs_stack.empty())
   {
       _root = dfs_stack.top();
       dfs_stack.pop();
       if(!visited[_root])
       {
           cout << _root << endl;
           visited[_root] = true;
       }
       for(int node = revGraphs[_root].size() - 1; node >= 0; node--)
           if(!visited[revGraphs[_root][node]])
               dfs_stack.push(revGraphs[_root][node]);

   }
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
   iterativeDFS(root);
   return 0;
}
