#include <bits/stdc++.h>
using namespace std;
const long vertexSize = 1e7;
bool visited[vertexSize];
vector<int> revGraphs[vertexSize];
int connectedComponent(int num_vertices)
{
   int connectedComponent = 0;
   for(int i = 1 ; i < num_vertices + 1; i++)
   {
       if(!visited[i])
       {
           stack<int> findConnectedComponent;
           findConnectedComponent.push(i);
           while (!findConnectedComponent.empty())
           {
               int root = findConnectedComponent.top();
               findConnectedComponent.pop();
               visited[root] = true;
               for(auto node : revGraphs[root])
                   if(!visited[node])
                       findConnectedComponent.push(node);
           }
           connectedComponent++;
       }
   }
   return connectedComponent;
}
int main() {
   int num_e, num_v;
   cin >> num_e >> num_v;
   for(int i = 0; i < num_e; i++)
   {
       int from, to;
       cin >> from >> to;
       revGraphs[from].push_back(to);
       revGraphs[to].push_back(from);
   }
   cout << connectedComponent(num_v) << endl;
   return 0;
}
