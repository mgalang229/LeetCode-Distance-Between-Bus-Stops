class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int mn = INT_MAX, dist = 0, s = start, n = distance.size();
        while (true) {
            dist += distance[s];
            s = (s + 1) % n;
            if (s == destination) {
                break;
            }
        }
        mn = dist;
        dist = 0;
        int d = destination;
        while (true) {
            dist += distance[d];
            d = (d + 1) % n;
            if (d == start) {
                break;
            }
        }
        return min(mn, dist);
    }
};
