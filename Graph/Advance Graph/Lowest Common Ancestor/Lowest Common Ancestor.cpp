#include <bits/stdc++.h>
using namespace std;
const int graphSize = 1e6;
int parents[graphSize];
bool visited[graphSize];
stack<int> findPath(int vertex){
   stack<int> path;
   while(vertex != 1) {
       path.push(vertex);
       vertex = parents[vertex];
   }
   path.push(1);
   return path;
}
int findLCA (int v, int w)
{
   int LongestCommonAnc;
   stack<int> path1 = findPath(v);
   stack<int> path2 = findPath(w);
   while(! path1.empty() && ! path2.empty())
   {
       int pop_path1 = path1.top(), pop_path2 = path2.top();
       path1.pop(); path2.pop();
       if(pop_path1 != pop_path2)
       {
           break;
       }
       LongestCommonAnc = pop_path1;
   }
   return LongestCommonAnc;


}
int main() {
   int num_v = 0,query;
   cin >> num_v >> query;
   parents[1] = 1;
   for(int i = 2; i <= num_v; i++)
   {
       int parent;
       cin >> parent;
       parents[i] = parent;
   }
   for(int i = 0; i < query; i++)
   {
       int w,v;
       cin >> w >> v;
       cout << findLCA(v,w) << endl;
   }
   return 0;
}

