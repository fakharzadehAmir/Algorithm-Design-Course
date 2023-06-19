#include <iostream>
#include <vector>
using namespace std;
long findMax(vector<vector<long long>> array, long cost, vector<vector<long long>> &maxFoodUnit ,long sizeArray)
{
   for(long i = 1; i < sizeArray; i++)
   {
       maxFoodUnit[0][i] += max(maxFoodUnit[0][i-1], maxFoodUnit[1][i-1] - cost) + array[0][i];
       maxFoodUnit[1][i] += max(maxFoodUnit[1][i-1], maxFoodUnit[0][i-1] - cost) + array[1][i];
   }
   return maxFoodUnit[0][sizeArray-1] > maxFoodUnit[1][sizeArray-1] ? maxFoodUnit[0][sizeArray-1] : maxFoodUnit[1][sizeArray-1];
}
int main() {
   long sizeArray;
   cin >> sizeArray;

   long changeCost;
   cin >> changeCost;

   vector<vector<long long>> array(2);
   array[0] = vector<long long> (sizeArray), array[1] = vector<long long> (sizeArray);

   for(long i = 0; i < sizeArray; i++)
       cin >> array[0][i];

   for(long i = 0; i < sizeArray; i++)
       cin >> array[1][i];
   vector<vector<long long>> maxAmount(2);
   maxAmount[0] = vector<long long>(sizeArray), maxAmount[1] = vector<long long>(sizeArray);
   maxAmount[0][0] += array[0][0], maxAmount[1][0] += array[1][0];
   cout << findMax(array,changeCost, maxAmount, sizeArray) << endl;
   return 0;
}
