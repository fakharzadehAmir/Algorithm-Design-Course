#include <iostream>
#include <vector>
using namespace std;
unsigned long findNumberOfSum(long target, vector<unsigned long> array, long sizeArray)
{
   vector<unsigned long> dpTable(target+1);
   dpTable[0] = 1;
   for(long num = 1; num <= target; num++)
       for(long idx = 0; idx < sizeArray; idx++ )
           if(num >= array[idx])
               dpTable[num] += dpTable[num-array[idx]];
   return dpTable[target];
}
int main() {
   long sizeOfArray;
   cin >> sizeOfArray;
   vector<unsigned long> array(sizeOfArray);
   for(long i = 0; i < sizeOfArray; i++)
       cin >> array[i];
   long target;
   cin >> target;
   cout << findNumberOfSum(target, array, sizeOfArray) << endl;
   return 0;
}
