#include <iostream>

using namespace std;

int main() 
{
    int H, M; //H=hour, M=minutes
    double angle;

    cin>>H>>M;

    H %= 12;

    //angle of the hour hand
    double hourAngle = (H + M / 60.0) * 30; // 30 degrees per hour
    //angle of the minute hand
    double minuteAngle = M * 6.0; // 6 degrees per minute

    //difference between the two angles
    angle = hourAngle - minuteAngle;

    //is angle is positive
    if (angle < 0) {
        angle += 360.0;
    }

    //smaller angle between the two possible angles
    angle = angle <= 180.0 ? angle : 360.0 - angle;

    cout << angle;

    return 0; 
}