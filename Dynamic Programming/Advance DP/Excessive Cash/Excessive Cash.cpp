#include <iostream>
#include <vector>
using namespace std;
unsigned long findMinCost(vector<long> squares, int numberOfSquares, long area)
{
   vector<vector<unsigned long>> dpTable(numberOfSquares + 1);
   for(int i  = 0; i <= numberOfSquares ; i++)
       dpTable[i] = vector<unsigned long>(area + 1);

   for(int j = 1; j <= area; j++)
       dpTable[0][j] = INT64_MAX;

   for (int idx = 1; idx <= numberOfSquares; idx++)
       for(long j = 0; j <= area; j++)
       {
           dpTable[idx][j] = INT64_MAX;
           for(long k = 0; k*k <= j; k++)
               dpTable[idx][j] = min(dpTable[idx][j], dpTable[idx - 1][j - k*k] + (squares[idx] - k)*(squares[idx] - k) );
       }
   return dpTable[numberOfSquares][area];

}
int main() {
   int numberOfSquares;
   cin >> numberOfSquares;
   long area;
   cin >> area;
   vector<long> squares (numberOfSquares+1);
   for(int i = 1; i < numberOfSquares + 1; i++)
       cin >> squares[i];
   unsigned long minCost = findMinCost(squares, numberOfSquares, area);
   if (minCost == INT64_MAX)
       cout <<  -1 << endl;
   else
       cout << minCost  << endl;
}
