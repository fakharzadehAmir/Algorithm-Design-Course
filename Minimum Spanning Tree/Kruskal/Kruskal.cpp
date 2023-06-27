#include <bits/stdc++.h>
using namespace std;
const int edgesSize = 3e3;
vector<tuple<int,int,int>> Edges(edgesSize);
int parent[edgesSize];
int findParent(int v)
{
   if(parent[v] != v)
       parent[v] = findParent(parent[v]);
   return parent[v];
}
void union_sets (int u, int v)
{
   int par_u = findParent(u), par_v = findParent(v);
   parent[par_v] = par_u;
}
bool compare_edges(tuple<int, int, int> &item_1,
                  tuple<int, int, int> &item_2)
{
   return get<2>(item_1) < get<2>(item_2);
}
void findKruskal(int num_vertices)
{
   for(int v = 1; v < num_vertices + 1; v++)
       parent[v] = v;
   int sum = 0;
   sort(Edges.begin(), Edges.end(), compare_edges);
   for(auto child: Edges)
       if(findParent(get<1>(child)) != findParent(get<0>(child)))
       {
           sum += get<2>(child);
           union_sets(get<1>(child), get<0>(child));
       }
   cout << sum << endl;
}
int main() {
   int num_v, num_e;
   cin >> num_v >> num_e;
   for(int i = 0; i < num_e; i++)
   {
       int from, to, weight;
       cin >> from >> to >> weight;
       tuple<int,int,int> edges(from, to, weight);
       Edges.push_back(edges);
   }
   findKruskal(num_v);
}
