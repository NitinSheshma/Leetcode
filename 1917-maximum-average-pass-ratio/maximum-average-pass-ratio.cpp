

class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
    
        auto gain = [](int pass, int total) {
            return (double)(pass + 1) / (total + 1) - (double)pass / total;
        };

        priority_queue<pair<double, pair<int,int>>> pq;

        // push initial gains
        for (auto &c : classes) {
            int pass = c[0], total = c[1];
            pq.push({gain(pass, total), {pass, total}});
        }

        // assign extra students
        while (extraStudents--) {
            auto top = pq.top();
            pq.pop();
            int pass = top.second.first;
            int total = top.second.second;
            pass++, total++;
            pq.push({gain(pass, total), {pass, total}});
        }

        // compute final average
        double sum = 0.0;
        while (!pq.empty()) {
            auto [g, p] = pq.top(); pq.pop();
            sum += (double)p.first / p.second;
        }

        return sum / classes.size();
    }
};
