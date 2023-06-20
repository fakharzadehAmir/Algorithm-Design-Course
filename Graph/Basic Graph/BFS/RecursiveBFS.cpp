#include <bits/stdc++.h>
using namespace std;
const long vertexSize = 1e7;
bool visited[vertexSize];
vector<int> revGraphs[vertexSize];
void recursiveBFS(queue<int> &bfsQueue)
{
   if(!bfsQueue.empty())
   {
       int _root = bfsQueue.front();
       bfsQueue.pop();
       if(!visited[_root])
       {
           cout << _root << endl;
           visited[_root] = true;
           for(auto node: revGraphs[_root])
               if(!visited[node])
                   bfsQueue.push(node);
       }
       recursiveBFS(bfsQueue);
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
   queue<int> bfs_queue;
   bfs_queue.push(root);
   recursiveBFS(bfs_queue);
   return 0;
}
