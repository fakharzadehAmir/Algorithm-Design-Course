#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long findCinema(vector<long> arrayCost, long numPerson, long capacity)
{
   vector<vector<vector<unsigned long>>> dpTable (2);
   fill(dpTable.begin(),dpTable.end(), vector<vector<unsigned long>>(numPerson));
   fill(dpTable[0].begin(),dpTable[0].end(), vector<unsigned long>(capacity + 1));
   fill(dpTable[1].begin(),dpTable[1].end(), vector<unsigned long>(capacity + 1));
   for(long i = 0; i < numPerson; i++)
   {
       fill(dpTable[0][i].begin(), dpTable[0][i].end(), INT64_MAX);
       fill(dpTable[1][i].begin(), dpTable[1][i].end(), INT64_MAX);
   }
   dpTable[0][0][capacity - 1] = 0;
   dpTable[1][0][capacity] = 0;
   for(long i = 1; i < numPerson; i++)
       for(long j = 0 ; j <= capacity  && i + j < 2*capacity ;j++)
       {
           if(j == capacity)
               dpTable[1][i][j] = dpTable[1][i-1][j];
           else
           {
               dpTable[0][i][j] = min(dpTable[0][i-1][j+1], dpTable[1][i-1][j+1] + arrayCost[i]);
               dpTable[1][i][j] = min(dpTable[1][i-1][j], dpTable[0][i-1][j] + arrayCost[i]);
           }
       }
   unsigned long min1 = *min_element(dpTable[0][numPerson-1].begin(), dpTable[0][numPerson-1].end());
   unsigned long min2 = *min_element(dpTable[1][numPerson-1].begin(), dpTable[1][numPerson-1].end());
   return min(min1, min2);
}
int main() {
   long numPerson, capacity;
   cin >> numPerson >> capacity;
   vector<long> arrayCost(numPerson);
   for(long i = 0; i < numPerson; i++)
       cin >> arrayCost[i];
   cout << findCinema(arrayCost, numPerson, capacity) << endl;
   return 0;
}