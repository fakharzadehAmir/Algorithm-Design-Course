#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long findLIS(vector<long> &sequence)
{
   vector<long> dp_table(sequence.size());
   fill(dp_table.begin(), dp_table.end(), 1);
   for(long i = 0 ; i < sequence.size() ; i++)
       for(long j = 0 ; j < i; j++)
           if(sequence[j] < sequence[i] && dp_table[i] - 1 < dp_table[j])
               dp_table[i] = dp_table[j] + 1;
   return *max_element(dp_table.begin(), dp_table.end());
}
int main() {
   long sizeOfSeq;
   cin >> sizeOfSeq;
   vector<long> Sequence(sizeOfSeq);
   for(long i = 0; i < sizeOfSeq; i++)
       cin >> Sequence[i];
   cout <<  findLIS(Sequence) << endl;
   return 0;
}
