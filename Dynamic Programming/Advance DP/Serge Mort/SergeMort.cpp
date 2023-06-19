#include <iostream>
#include <vector>
using namespace std;
unsigned long findMin(long r, long l, vector<vector<unsigned long>> dpTable, vector<long> partialSum)
{
    unsigned long _min = INT64_MAX;
    for(long k = 0; k < (r - l); k++)
    {
        unsigned long tmp = dpTable[l][r - k - 1] + dpTable[r - k][r] + partialSum[r + 1] - partialSum[l];
        _min = min(_min, tmp);
    }
    return _min;
}
unsigned long sergeMort(vector<long> array, vector<long> partialSum,long arrSize)
{
    vector<vector<unsigned long>> dpTable(arrSize);
    for(long i = 0; i < arrSize; i++) {
        dpTable[i] = vector<unsigned long>(arrSize);
        fill(dpTable[i].begin(), dpTable[i].end(), INT64_MAX);
        dpTable[i][i] = 0;
    }
    long tmp = arrSize - 2;
    for(long r = 0; r < arrSize - 2; r++, tmp--) {
        for (long l = 0; l < tmp; l++)
            dpTable[l][arrSize - tmp + l] = findMin(arrSize - tmp + l, l, dpTable, partialSum);

    }
    return dpTable[0][arrSize - 1];
}

int main() {
    long n, arraySize;
    cin >> n >> arraySize;
    long[] array(arraySize);
    vector<long> partialSum(arraySize + 1);
    for(long i = 0; i < arraySize; i++) {
        cin >> array[i];
        partialSum[i+1] = partialSum[i] + array[i];
    }
    cout << sergeMort(array, partialSum, arraySize) << endl;
    return 0;
}
