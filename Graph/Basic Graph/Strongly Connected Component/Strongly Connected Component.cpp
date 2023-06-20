#include <bits/stdc++.h>
using namespace std;
const int vertexSize = 1e5;
bool visited[vertexSize];
bool visitedRev[vertexSize];
vector<int> revGraphs[vertexSize];
vector<int> revGraphs[vertexSize];
void dfs_rev(int vertex, stack<int> &post_order)
{
   visitedRev[vertex] = true;
   for(auto child: revGraphs[vertex])
       if(! visitedRev[child])
           dfs_rev(child, post_order);
   post_order.push(vertex);

}
int SCCs(int num_vertices){
   stack<int> postOrder;
   for(int i = 1 ; i < num_vertices + 1; i++)
       if(!visitedRev[i])
           dfs_rev(i, postOrder);
   int num_scc = 0;
   while (! postOrder.empty())
   {
       int last_vertex = postOrder.top();
       postOrder.pop();
       if(!visited[last_vertex])
       {
           stack<int> connectedComponent;
           connectedComponent.push(last_vertex);
           while (!connectedComponent.empty())
           {
               last_vertex = connectedComponent.top();
               connectedComponent.pop();
               visited[last_vertex] = true;
               for(auto child: revGraphs[last_vertex])
                   if(!visited[child])
                       connectedComponent.push(child);
           }
           num_scc++;
       }
   }
   return num_scc;
}
int main() {
   int num_e, num_v;
   cin >> num_v >> num_e;
   for(int i = 0; i < num_e; i++)
   {
       int from, to;
       cin >> from >> to;
       revGraphs[from].push_back(to);
       revGraphs[to].push_back(from);
   }
   cout << SCCs(num_v) << endl;
   return 0;
}
