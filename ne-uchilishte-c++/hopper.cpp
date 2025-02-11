#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int x0, y0, x1, y1, x2, y2;
    
    // Въвеждаме координатите
    cin >> x0 >> y0;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    // Определяме границите на правоъгълника
    int xmin = min(x1, x2);
    int xmax = max(x1, x2);
    int ymin = min(y1, y2);
    int ymax = max(y1, y2);
    
    // Изчисляваме разстоянието до най-близката страна на правоъгълника
    int dx = 0, dy = 0;
    
    // За x-координатата
    if (x0 < xmin) {
        dx = xmin - x0;
    } else if (x0 > xmax) {
        dx = x0 - xmax;
    }
    
    // За y-координатата
    if (y0 < ymin) {
        dy = ymin - y0;
    } else if (y0 > ymax) {
        dy = y0 - ymax;
    }
    
    // Най-малкото разстояние е макс. от dx и dy
    int result = max(dx, dy);
    
    // Извеждаме резултата
    cout << result << endl;
    
    return 0;
}
