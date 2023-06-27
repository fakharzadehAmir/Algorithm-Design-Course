#include <bits/stdc++.h>
using namespace std;
const int graphSize = 1e6;
vector<int> graphs[graphSize];
bool visited[graphSize];
int finalNode;
void findLongestPath(int vertex, int distance, int &longestPath)
{
   visited[vertex] = true;
   if(distance >= longestPath)
   {
       longestPath = distance;
       finalNode = vertex;
   }
   for(auto child : graphs[vertex])
       if(!visited[child])
           findLongestPath(child, distance + 1, longestPath);
   visited[vertex] = false;

}
int main() {
   int num_v = 0, longestPath = 0;
   cin >> num_v;
   for(int i = 0; i < num_v - 1; i++)
   {
       int vertex1, vertex2;
       cin >> vertex1 >> vertex2;
       graphs[vertex1].push_back(vertex2);
       graphs[vertex2].push_back(vertex1);
   }
   findLongestPath(1,0,longestPath);
   longestPath = 0;
   findLongestPath(finalNode, 0, longestPath);
   cout << longestPath << endl;
   return 0;
}
