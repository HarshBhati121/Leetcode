// class Solution {
// public:
//     bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
//         if(xCenter+radius<x1 || yCenter+radius<y1 || xCenter-radius>x2 || yCenter-radius >y2 ) return false;
//         else return true;
//     }
// };


class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter,
                      int x1, int y1, int x2, int y2) {

        int closestX = max(x1, min(xCenter, x2));
        int closestY = max(y1, min(yCenter, y2));

        int dx = xCenter - closestX;
        int dy = yCenter - closestY;

        return dx * dx + dy * dy <= radius * radius;
    }
};