//     1266. Minimum Time Visiting All Points

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
          int count =0;

          for(int i=1;i<points.size();i++){
               count += max(abs(points[i][0] - points[i-1][0]) , abs(points[i][1] - points[i-1][1]));
          }

          return count;
    } 
};

// time complexcity - O(N)
