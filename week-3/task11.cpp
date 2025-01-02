/* #include <iostream>
#include <cmath>

using namespace std;

int main() {
    int H, M; //H=hour, M=minutes
    cin>>H>>M;

    float hourAngle = (H % 12 + (float)M / 60)*30;  //360/12 = hour angle
    float minuteAngle = M * 6; //360/60 = minute angle
    float angle = fabs(hourAngle - minuteAngle);

    if(angle > 180){
        angle = 360 - angle;
        return angle;
    }
    cout<<angle;
    return 0; 
}*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    // checking input data
    if (H < 1 || H > 12 || M < 0 || M > 59) {
        return 1;
    }

    double minute_angle = 6 * M;
    double hour_angle = 30 * H + 0.5 * M;

    double angle = abs( hour_angle - minute_angle);
    // The angle should not exceed 180 degrees
    angle = min(angle, 360 - angle);

    cout <<angle;

    return 0;
}
