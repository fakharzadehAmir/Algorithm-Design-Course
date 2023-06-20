//#include <iostream>
//#include <vector>
//using namespace std;
//long findClosest(vector<long> gas_station, long arrSize, long target, long prevStation)
//{
//    vector<long> available_gasStation;
//    for(int i = 0; i < arrSize; i++)
//        if(gas_station[i] > prevStation && gas_station[i] <= target)
//            available_gasStation.push_back(gas_station[i]);
//    if(available_gasStation.empty())
//        return -1;
//    return available_gasStation.back();
//}
//long findMinNum(vector<long> gas_station, long arrSize, long fullBuck_km, long distance)
//{
//    long count = 0;
//    long prevStation = 0;
//    long currentDist = fullBuck_km;
//    if(gas_station[arrSize-1] + fullBuck_km < distance)
//        return -1;
//    while(currentDist < distance)
//    {
//        long nextStation = findClosest(gas_station,arrSize,currentDist, prevStation);
//        if(nextStation > currentDist || nextStation == -1)
//            return -1;
//        currentDist = nextStation + fullBuck_km;
//        prevStation = nextStation;
//        count++;
//    }
//    return count;
//}
//int main() {
//    long distance, fullBuck_km, arrSize;
//    cin >> distance >> fullBuck_km >> arrSize;
//    vector<long> list_gasStation(arrSize + 1);
//    for(int i =0; i < arrSize; i++)
//        cin >> list_gasStation[i];
//    cout << findMinNum(list_gasStation, arrSize, fullBuck_km, distance) << endl;
//    return 0;
//}
