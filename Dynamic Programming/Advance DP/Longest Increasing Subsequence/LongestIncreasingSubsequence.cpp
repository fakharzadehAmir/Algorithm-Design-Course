#include <iostream>
#include <vector>
using namespace std;
long findLIS(vector<long>& sequence, long sizeOfSeq)
{
   vector<long> dpTable;
   for (long i = 0; i < sizeOfSeq; i++)
   {
       long low = 0, high = (long) dpTable.size(), mid;
       while (low < high)
       {
           mid = (low + high) / 2;
           if (dpTable[mid] < sequence[i])
               low = mid + 1;
           else
               high = mid;
       }
       if (low == dpTable.size())
           dpTable.push_back(sequence[i]);
       else
           dpTable[low] = sequence[i];
   }
   return (long) dpTable.size();
}

int main()
{
   long sizeOfSeq;
   cin >> sizeOfSeq;
   vector<long> Sequence(sizeOfSeq);
   for(long i = 0; i < sizeOfSeq; i++)
       cin >> Sequence[i];
   cout <<  findLIS(Sequence, sizeOfSeq) << endl;
   return 0;
}
