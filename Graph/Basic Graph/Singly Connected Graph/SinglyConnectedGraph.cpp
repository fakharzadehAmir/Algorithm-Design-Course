#include <bits/stdc++.h>
using namespace std;
const int vertexSize = 1e5;
vector<int> graphs[vertexSize];
string vertex_color[vertexSize];
void dfs_singly(int vertex, bool &is_single){
   vertex_color[vertex] = "G";
   for(auto child : graphs[vertex])
   {
       if(vertex_color[child] == "B")
       {
           is_single = false;
           return;
       }
       if(vertex_color[child] == "W")
           dfs_singly(child, is_single);
   }
   vertex_color[vertex] = "B";
}
string find_singly_connected(int num_vertices)
{
   bool isSingly = true;
   for(int v= 1; v < num_vertices + 1; v++) {
       for(int i = 1; i < num_vertices + 1; i++)
           vertex_color[i] = "W";
       dfs_singly(v, isSingly);
       if(!isSingly)
           break;
   }
   if(isSingly)
       return "Yes";
   return "No";
}
int main() {
   int num_e, num_v;
   cin >> num_v >> num_e;
   for(int i = 0; i < num_e; i++)
   {
       int from, to;
       cin >> from >> to;
       graphs[from].push_back(to);
   }
   cout << find_singly_connected(num_v) << endl;
   return 0;
}
