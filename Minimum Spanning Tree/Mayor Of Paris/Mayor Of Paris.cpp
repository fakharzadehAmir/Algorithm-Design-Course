//#include <bits/stdc++.h>
//using namespace std;
//const int edgesSize = 3e3;
//vector<tuple<int,int,int>> Edges;
//vector<tuple<int,int,int>> Mst_graph;
//int parent[edgesSize];
//int findParent(int v)
//{
//    if(parent[v] != v)
//        parent[v] = findParent(parent[v]);
//    return parent[v];
//}
//void union_sets (int u, int v)
//{
//    int par_u = findParent(u), par_v = findParent(v);
//    parent[par_v] = par_u;
//}
//bool compare_edges(tuple<int, int, int> &item_1,
//                   tuple<int, int, int> &item_2)
//{
//    return get<2>(item_1) < get<2>(item_2);
//}
//void findKruskal(int num_vertices)
//{
//    for(int v = 1; v < num_vertices + 1; v++)
//        parent[v] = v;
//    for(auto child: Edges)
//        if(findParent(get<1>(child)) != findParent(get<0>(child)))
//        {
//            union_sets(get<1>(child), get<0>(child));
//            Mst_graph.push_back(child);
//        }
//}
//int findSecondOptimal_MST(int num_vertices)
//{
//    int sec_mst = INT32_MAX;
//    for(auto e : Mst_graph)
//    {
//        for(int v = 1; v < num_vertices + 1; v++)
//            parent[v] = v;
//        vector<tuple<int,int,int>> edges = Edges;
//        int num_of_v = 0;
//        int sum = 0;
//        for(auto ed : Edges)
//        {
//            if (e == ed)
//                continue;
//            if(findParent(get<1>(ed)) != findParent(get<0>(ed)))
//            {
//                sum += get<2>(ed);
//                union_sets(get<1>(ed), get<0>(ed));
//                num_of_v++;
//            }
//        }
//        if(num_of_v == num_vertices - 1 && sum < sec_mst)
//            sec_mst = sum;
//    }
//    return sec_mst;
//}
//int main() {
//    int num_v, num_e;
//    cin >> num_v >> num_e;
//    for(int i = 0; i < num_e; i++)
//    {
//        int from, to, weight;
//        cin >> from >> to >> weight;
//        tuple<int,int,int> edges(from, to, weight);
//        Edges.push_back(edges);
//    }
//    sort(Edges.begin(), Edges.end(), compare_edges);
//    findKruskal(num_v);
//    int find_sec = findSecondOptimal_MST(num_v);
//    if(find_sec == INT32_MAX)
//        cout << -1 << endl;
//    else
//        cout << find_sec << endl;
//
//}
