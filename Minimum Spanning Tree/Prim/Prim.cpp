#include <bits/stdc++.h>
using namespace std;
const int edgesSize = 3e3;
vector<pair<int,int>> graphs[edgesSize];
vector<int> cost(edgesSize, INT32_MAX);
vector<bool> remove_vertices(edgesSize, false);
priority_queue<pair<int, int>, vector<pair<int,int>>, greater<>> priorityQueue;
void findPrim(int num_vertices)
{
   cost[1] = 0;
   priorityQueue.push({cost[1], 1});
   while (!priorityQueue.empty())
   {
       pair<int, int> vertex = priorityQueue.top();
       priorityQueue.pop();
       remove_vertices[vertex.second] = true;
       for(auto child: graphs[vertex.second])
           if(!remove_vertices[child.first] && cost[child.first] > child.second)
           {
               cost[child.first] = child.second;
               priorityQueue.push({cost[child.first], child.first});
           }
   }
   int sum = 0;
   for(int v = 1; v < num_vertices + 1; v++)
       sum += cost[v];
   cout << sum << endl;
}
int main() {
   int num_v, num_e;
   cin >> num_v >> num_e;
   for(int i = 0; i < num_e; i++)
   {
       int from, to, weight;
       cin >> from >> to >> weight;
       graphs[from].emplace_back(to, weight);
       graphs[to].emplace_back(from, weight);
   }
   findPrim(num_v);
}
