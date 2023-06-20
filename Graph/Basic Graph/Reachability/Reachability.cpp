#include <bits/stdc++.h>
using namespace std;
const long vertexSize = 1e7;
bool visited[vertexSize];
vector<int> revGraphs[vertexSize];
string reachability(int from, int to)
{
   stack<int> dfs_stack;
   dfs_stack.push(from);
   while (!dfs_stack.empty())
   {
       int root = dfs_stack.top();
       dfs_stack.pop();
       if(!visited[root])
       {
           visited[root] = true;
           for(auto node : revGraphs[root])
           {
               if(node == to)
                   return "YES";
               if(!visited[node])
                   dfs_stack.push(node);
           }
       }
   }
   return "NO";
}

int main() {
   int num_v, num_e, city_a, city_b;
   cin >> num_v >> num_e >> city_a >> city_b;
   for(int i = 0; i < num_v; i++)
   {
       int num_adj;
       cin >> num_adj;
       for(int j = 0; j < num_adj; j++)
       {
           int adj;
           cin >> adj;
           revGraphs[i+1].push_back(adj);
       }
   }
   cout << reachability(city_a, city_b) << endl;
   return 0;
}
