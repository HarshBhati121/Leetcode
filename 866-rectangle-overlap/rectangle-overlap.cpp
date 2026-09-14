class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1=rec1[0];
        int y1=rec1[1];
        int x2=rec1[2];
        int y2=rec1[3];

        int x1d=rec2[0];
        int y1d=rec2[1];
        int x2d=rec2[2];
        int y2d=rec2[3];

          if (x2 <= x1d || x2d <= x1 ||
            y2 <= y1d || y2d <= y1) {
            return false;
        }
        else return true;

    }
};