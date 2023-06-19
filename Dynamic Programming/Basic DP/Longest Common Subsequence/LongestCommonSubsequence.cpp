#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
long long findLCS(vector<long long> firstSeq, vector<long long> secondSeq)
{
   vector<vector<long long>> dp_table(firstSeq.size() + 1);
   dp_table[0] = vector<long long> (secondSeq.size() + 1);
   for(int i = 1 ; i < firstSeq.size() + 1; i++)
   {
       dp_table[i] = vector<long long> (secondSeq.size() + 1);
       for(int j = 1; j < secondSeq.size() + 1; j++)
       {
           if(firstSeq[i - 1] == secondSeq[j - 1])
               dp_table[i][j] = dp_table[i-1][j-1] + 1;
           else if (dp_table[i][j-1] > dp_table[i-1][j])
                   dp_table[i][j] = dp_table[i][j-1];
           else
               dp_table[i][j] = dp_table[i-1][j];

       }
   }
   return dp_table[firstSeq.size()][secondSeq.size()];
}
void fillArray(vector<long long> &sequence)
{
   string line;
   long element;
   getline(cin, line);
   istringstream array(line);
   while (array >> element) sequence.push_back(element);
}
int main() {
   vector<long long> firstSequence;
   vector<long long> secondSequence;
   fillArray(firstSequence);
   fillArray(secondSequence);
   cout << findLCS(firstSequence, secondSequence) << endl;
   return 0;
}
