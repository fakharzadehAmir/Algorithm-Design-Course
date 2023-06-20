#include <bits/stdc++.h>
using namespace std;
const long vertexSize = 1e7;
bool visited[vertexSize];
vector<int> revGraphs[vertexSize];
void iterativeBFS(int _root)
{
   queue<int> bfs_queue;
   bfs_queue.push(_root);
   while (!bfs_queue.empty())
   {
       _root = bfs_queue.front();
       bfs_queue.pop();
       if(!visited[_root])
       {
           cout << _root << endl;
           visited[_root] = true;
           for(auto node: revGraphs[_root])
               if(!visited[node])
                   bfs_queue.push(node);
       }
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
   iterativeBFS(root);
   return 0;
}
