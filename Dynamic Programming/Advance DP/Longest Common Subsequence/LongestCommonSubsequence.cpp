#include <iostream>
#include <vector>
using namespace std;
long long findLCS(vector<long long> firstSeq,
                 vector<long long> secondSeq,
                 vector<long long> thirdSeq,
                 long size1, long size2, long size3)
{
   vector<vector<vector<long long>>> dp_table(size1 + 1);
   dp_table[0] =  vector<vector<long long>> (size2 + 1);
   for(int j = 0; j < size2 + 1; j++)
       dp_table[0][j] = vector<long long> (size3 + 1);

   for(int i = 1; i < size1 + 1; i++)
   {
       dp_table[i] = vector<vector<long long>> (size2 + 1);
       dp_table[i][0] = vector<long long> (size3 + 1);
       for(int j = 1; j < size2 + 1; j++)
       {
           dp_table[i][j] = vector<long long> (size3 + 1);
           for(int k = 1; k < size3 + 1; k++)
           {
               if(firstSeq[i-1] == secondSeq[j-1] && secondSeq[j-1] == thirdSeq[k-1])
                   dp_table[i][j][k] = dp_table[i-1][j-1][k-1] + 1;
               else
               {
                   long long findMax = dp_table[i - 1][j][k];
                   findMax = max(dp_table[i][j - 1][k], findMax);
                   dp_table[i][j][k] = max(dp_table[i][j][k-1], findMax);
               }
           }
       }
   }
   return dp_table[size1][size2][size3];
}
void fillArray(vector<long long> &sequence, long sizeSequence)
{
   for(long i = 0; i < sizeSequence; i++)
       cin >> sequence[i];
}
int main() {
   long sizeSeq1;
   long sizeSeq2;
   long sizeSeq3;
   cin >> sizeSeq1 >> sizeSeq2 >> sizeSeq3;
   vector<long long> sequence1(sizeSeq1);
   vector<long long> sequence2(sizeSeq2);
   vector<long long> sequence3(sizeSeq3);
   fillArray(sequence1, sizeSeq1);
   fillArray(sequence2, sizeSeq2);
   fillArray(sequence3, sizeSeq3);
   cout << findLCS(sequence1, sequence2, sequence3,
                   sizeSeq1, sizeSeq2, sizeSeq3) << endl;
   return 0;
}
