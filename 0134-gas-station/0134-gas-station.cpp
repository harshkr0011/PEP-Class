class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        
        int total_petrol_available = 0;
        int total_petrol_needed = 0;
        int current_tank_balance = 0;
        int starting_station = 0;
        
        for(int i = 0; i < n; i++) {
            // Keep track of overall totals to see if the trip is possible at all
            total_petrol_available += gas[i];
            total_petrol_needed += cost[i];
            
            // Try to move from station i to i+1
            current_tank_balance += (gas[i] - cost[i]);
            
            // If tank goes negative, we can't have started at 'starting_station'
            // or any station in between. So, we reset and try the next one.
            if(current_tank_balance < 0) {
                starting_station = i + 1;
                current_tank_balance = 0;
            }
        }
        
        // Final Check: If total gas is less than total cost, return -1
        if (total_petrol_available < total_petrol_needed) {
            return -1;
        }
        
        return starting_station;
    }
};