#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long findMinCount(vector<pair<long, long>> list, long size)
{
   long count = 1;
   pair<long, long> mostEnd = list[0];
   for(int i = 0; i < size; i++)
       if(list[i].first > mostEnd.second)
       {
           mostEnd = list[i];
           count++;
       }
   return count;
}
bool sortBySec(pair<long, long> &first, pair<long, long> &second)
{
   return first.second < second.second;
}
int main() {
   long arrSize;
   cin >> arrSize;
   vector<pair<long, long>> listOfSegments(arrSize);
   for(int i = 0; i < arrSize; i++)
       cin >> listOfSegments[i].first >> listOfSegments[i].second ;
   sort(listOfSegments.begin(), listOfSegments.end(), sortBySec);
   cout << findMinCount(listOfSegments, arrSize) << endl;
   return 0;
}
