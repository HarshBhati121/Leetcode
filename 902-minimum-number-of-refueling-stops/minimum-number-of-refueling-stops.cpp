class Solution {
public:
    int minRefuelStops(int target, int startFuel,
                       vector<vector<int>>& stations) {

     
        priority_queue<int> maxHeap;

        int fuel = startFuel;
        int stops = 0;
        int prev = 0;

        stations.push_back({target, 0});

        for (auto& station : stations) {
            int position = station[0];
            int stationFuel = station[1];

            fuel -= (position - prev);


            while (fuel < 0 && !maxHeap.empty()) {
                fuel += maxHeap.top();
                maxHeap.pop();
                stops++;
            }


            if (fuel < 0) {
                return -1;
            }

            maxHeap.push(stationFuel);

            prev = position;
        }

        return stops;
    }
};